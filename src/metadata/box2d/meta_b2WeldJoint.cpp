// Auto generated file, don't modify.

#include "Box2D/Box2D.h"
#include "Box2D/Dynamics/Joints/b2WeldJoint.h"

#include "cpgf/metadata/box2d/meta_b2WeldJoint.h"

#include "cpgf/gmetapolicy.h"

using namespace cpgf;

GDefineMetaInfo createMetaClass_B2WeldJoint()
{
    GDefineMetaClass<b2WeldJoint, b2Joint> _d = GDefineMetaClass<b2WeldJoint, b2Joint>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent> >::declare("b2WeldJoint");
    buildMetaClass_B2WeldJoint(0, _d, NULL, GMetaPolicyCopyAllConstReference());
    return _d.getMetaInfo();
}


GDefineMetaInfo createMetaClass_B2WeldJointDef()
{
    GDefineMetaClass<b2WeldJointDef, b2JointDef> _d = GDefineMetaClass<b2WeldJointDef, b2JointDef>::declare("b2WeldJointDef");
    buildMetaClass_B2WeldJointDef(0, _d, NULL, GMetaPolicyCopyAllConstReference());
    return _d.getMetaInfo();
}


