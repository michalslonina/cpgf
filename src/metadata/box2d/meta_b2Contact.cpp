// Auto generated file, don't modify.

#include "Box2D/Box2D.h"
#include "Box2D/Dynamics/Contacts/b2Contact.h"

#include "cpgf/metadata/box2d/meta_b2Contact.h"

#include "cpgf/gmetapolicy.h"

using namespace cpgf;

GDefineMetaInfo createMetaClass_B2Contact()
{
    GDefineMetaClass<b2Contact> _d = GDefineMetaClass<b2Contact>::Policy<MakePolicy<GMetaRuleDestructorAbsent, GMetaRuleDefaultConstructorAbsent, GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("b2Contact");
    buildMetaClass_B2Contact(0, _d, NULL, GMetaPolicyCopyAllConstReference());
    return _d.getMetaInfo();
}


GDefineMetaInfo createMetaClass_B2ContactEdge()
{
    GDefineMetaClass<b2ContactEdge> _d = GDefineMetaClass<b2ContactEdge>::declare("b2ContactEdge");
    buildMetaClass_B2ContactEdge(0, _d, NULL, GMetaPolicyCopyAllConstReference());
    return _d.getMetaInfo();
}


GDefineMetaInfo createMetaClass_B2ContactRegister()
{
    GDefineMetaClass<b2ContactRegister> _d = GDefineMetaClass<b2ContactRegister>::declare("b2ContactRegister");
    buildMetaClass_B2ContactRegister(0, _d, NULL, GMetaPolicyCopyAllConstReference());
    return _d.getMetaInfo();
}


