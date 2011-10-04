#include "test_lua_common.h"


namespace {


GTEST(global)
{
	using namespace cpgf;
	using namespace testscript;

	TestLuaContext * context = getLuaContext();

	GApiScopedPointer<IMetaClass> metaClass(context->getService()->findClassByName("testscript::TestData"));
	GCHECK(metaClass);
	
	GScopedPointer<TestData> dataLib(new TestData);
	GScopedPointer<TestData> dataApi(new TestData);
	dataLib->x = 10;
	dataLib->name = "abc";
	dataApi->x = 10;
	dataApi->name = "abc";

	GApiScopedPointer<IScriptName> scriptName;
	cpgf::GApiScopedPointer<cpgf::IScriptObject> bindingApi(context->getBindingApi());

	context->getBindingLib()->setObject("data", dataLib.get(), metaClass.get(), false);
	
	scriptName.reset(context->getBindingApi()->createName("data"));
	bindingApi->setObject(scriptName.get(), dataApi.get(), metaClass.get(), false);
	
	context->doString(
		LINE(assert(data.x == 10))
		LINE(assert(data.name == "abc"))
		LINE(data.x = data.x + 1)
	);

	GEQUAL(dataLib->x, 11);
	GEQUAL(dataApi->x, 11);
	
	context->getBindingLib()->nullifyValue("data");
	scriptName.reset(context->getBindingApi()->createName("data"));
	bindingApi->nullifyValue(scriptName.get());
	context->doString("assert(data == nil)");
}




}