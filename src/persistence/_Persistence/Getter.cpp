// Generated by Haxe 4.1.1
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_persistence__Persistence_Getter
#include <persistence/_Persistence/Getter.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c272a059e327b7a8_318_new,"persistence._Persistence.Getter","new",0x0c4617fc,"persistence._Persistence.Getter.new","persistence/Persistence.hx",318,0x9767c4cf)
HX_LOCAL_STACK_FRAME(_hx_pos_c272a059e327b7a8_311_boot,"persistence._Persistence.Getter","boot",0xa927e516,"persistence._Persistence.Getter.boot","persistence/Persistence.hx",311,0x9767c4cf)
namespace persistence{
namespace _Persistence{

void Getter_obj::__construct(::String recordType, ::Dynamic strategyMethod, ::Dynamic queryMapper, ::Dynamic resultMapper,bool useQueryValuesAsParams){
            	HX_STACKFRAME(&_hx_pos_c272a059e327b7a8_318_new)
HXLINE( 319)		bool _hx_tmp;
HXDLIN( 319)		if (!(::Std_obj::isOfType(strategyMethod,( ( ::Dynamic)(::hx::ClassOf< ::String >()) )))) {
HXLINE( 319)			_hx_tmp = !(::Reflect_obj::isFunction(strategyMethod));
            		}
            		else {
HXLINE( 319)			_hx_tmp = false;
            		}
HXDLIN( 319)		if (_hx_tmp) {
HXLINE( 320)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("strategyMethod must be a string or function",97,7a,0d,90)));
            		}
HXLINE( 322)		bool _hx_tmp1;
HXDLIN( 322)		if (!(::Std_obj::isOfType(queryMapper,( ( ::Dynamic)(::hx::ClassOf< ::String >()) )))) {
HXLINE( 322)			_hx_tmp1 = !(::Reflect_obj::isFunction(queryMapper));
            		}
            		else {
HXLINE( 322)			_hx_tmp1 = false;
            		}
HXDLIN( 322)		if (_hx_tmp1) {
HXLINE( 323)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("queryMapper must be a string or function",42,16,bc,ef)));
            		}
HXLINE( 325)		bool _hx_tmp2;
HXDLIN( 325)		if (!(::Std_obj::isOfType(resultMapper,( ( ::Dynamic)(::hx::ClassOf< ::String >()) )))) {
HXLINE( 325)			_hx_tmp2 = !(::Reflect_obj::isFunction(resultMapper));
            		}
            		else {
HXLINE( 325)			_hx_tmp2 = false;
            		}
HXDLIN( 325)		if (_hx_tmp2) {
HXLINE( 326)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("resultMapper must be a string or function",8d,d7,71,1d)));
            		}
HXLINE( 328)		this->recordType = recordType;
HXLINE( 329)		this->strategyMethod = strategyMethod;
HXLINE( 330)		this->queryMapper = queryMapper;
HXLINE( 331)		this->resultMapper = resultMapper;
HXLINE( 332)		this->useQueryValuesAsParams = useQueryValuesAsParams;
            	}

Dynamic Getter_obj::__CreateEmpty() { return new Getter_obj; }

void *Getter_obj::_hx_vtable = 0;

Dynamic Getter_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Getter_obj > _hx_result = new Getter_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool Getter_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2cce5e02;
}


::hx::ObjectPtr< Getter_obj > Getter_obj::__new(::String recordType, ::Dynamic strategyMethod, ::Dynamic queryMapper, ::Dynamic resultMapper,bool useQueryValuesAsParams) {
	::hx::ObjectPtr< Getter_obj > __this = new Getter_obj();
	__this->__construct(recordType,strategyMethod,queryMapper,resultMapper,useQueryValuesAsParams);
	return __this;
}

::hx::ObjectPtr< Getter_obj > Getter_obj::__alloc(::hx::Ctx *_hx_ctx,::String recordType, ::Dynamic strategyMethod, ::Dynamic queryMapper, ::Dynamic resultMapper,bool useQueryValuesAsParams) {
	Getter_obj *__this = (Getter_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Getter_obj), true, "persistence._Persistence.Getter"));
	*(void **)__this = Getter_obj::_hx_vtable;
	__this->__construct(recordType,strategyMethod,queryMapper,resultMapper,useQueryValuesAsParams);
	return __this;
}

Getter_obj::Getter_obj()
{
}

void Getter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Getter);
	HX_MARK_MEMBER_NAME(recordType,"recordType");
	HX_MARK_MEMBER_NAME(strategyMethod,"strategyMethod");
	HX_MARK_MEMBER_NAME(queryMapper,"queryMapper");
	HX_MARK_MEMBER_NAME(resultMapper,"resultMapper");
	HX_MARK_MEMBER_NAME(useQueryValuesAsParams,"useQueryValuesAsParams");
	HX_MARK_END_CLASS();
}

void Getter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(recordType,"recordType");
	HX_VISIT_MEMBER_NAME(strategyMethod,"strategyMethod");
	HX_VISIT_MEMBER_NAME(queryMapper,"queryMapper");
	HX_VISIT_MEMBER_NAME(resultMapper,"resultMapper");
	HX_VISIT_MEMBER_NAME(useQueryValuesAsParams,"useQueryValuesAsParams");
}

::hx::Val Getter_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"recordType") ) { return ::hx::Val( recordType ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"queryMapper") ) { return ::hx::Val( queryMapper ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resultMapper") ) { return ::hx::Val( resultMapper ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"strategyMethod") ) { return ::hx::Val( strategyMethod ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"useQueryValuesAsParams") ) { return ::hx::Val( useQueryValuesAsParams ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Getter_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"recordType") ) { recordType=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"queryMapper") ) { queryMapper=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resultMapper") ) { resultMapper=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"strategyMethod") ) { strategyMethod=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"useQueryValuesAsParams") ) { useQueryValuesAsParams=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Getter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("recordType",eb,b1,5b,61));
	outFields->push(HX_("strategyMethod",b4,fb,77,6e));
	outFields->push(HX_("queryMapper",e9,c8,46,0b));
	outFields->push(HX_("resultMapper",7e,34,80,cf));
	outFields->push(HX_("useQueryValuesAsParams",fb,48,47,23));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Getter_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(Getter_obj,recordType),HX_("recordType",eb,b1,5b,61)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Getter_obj,strategyMethod),HX_("strategyMethod",b4,fb,77,6e)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Getter_obj,queryMapper),HX_("queryMapper",e9,c8,46,0b)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Getter_obj,resultMapper),HX_("resultMapper",7e,34,80,cf)},
	{::hx::fsBool,(int)offsetof(Getter_obj,useQueryValuesAsParams),HX_("useQueryValuesAsParams",fb,48,47,23)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Getter_obj_sStaticStorageInfo = 0;
#endif

static ::String Getter_obj_sMemberFields[] = {
	HX_("recordType",eb,b1,5b,61),
	HX_("strategyMethod",b4,fb,77,6e),
	HX_("queryMapper",e9,c8,46,0b),
	HX_("resultMapper",7e,34,80,cf),
	HX_("useQueryValuesAsParams",fb,48,47,23),
	::String(null()) };

::hx::Class Getter_obj::__mClass;

void Getter_obj::__register()
{
	Getter_obj _hx_dummy;
	Getter_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("persistence._Persistence.Getter",0a,aa,6b,7b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Getter_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Getter_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Getter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Getter_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Getter_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_c272a059e327b7a8_311_boot)
HXDLIN( 311)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace persistence
} // end namespace _Persistence
