// Generated by Haxe 4.1.1
#include <hxcpp.h>

#ifndef INCLUDED_869a921fcf5bba54
#define INCLUDED_869a921fcf5bba54
#include "maglev/MagLevAny.h"
#endif
#ifndef INCLUDED_20db69a30a45e926
#define INCLUDED_20db69a30a45e926
#include "maglev/MagLevArray.h"
#endif
#ifndef INCLUDED_35ec03520fbb0747
#define INCLUDED_35ec03520fbb0747
#include "maglev/MagLevBoolean.h"
#endif
#ifndef INCLUDED_d8a74f90a5c0b964
#define INCLUDED_d8a74f90a5c0b964
#include "maglev/MagLevError.h"
#endif
#ifndef INCLUDED_7f9204b932c8d809
#define INCLUDED_7f9204b932c8d809
#include "maglev/MagLevFunction.h"
#endif
#ifndef INCLUDED_ba46386e6aba7150
#define INCLUDED_ba46386e6aba7150
#include "maglev/MagLevNull.h"
#endif
#ifndef INCLUDED_95fa5e9194badcf5
#define INCLUDED_95fa5e9194badcf5
#include "maglev/MagLevNumber.h"
#endif
#ifndef INCLUDED_f4da16f85a617f60
#define INCLUDED_f4da16f85a617f60
#include "maglev/MagLevObject.h"
#endif
#ifndef INCLUDED_65acb6100057af6e
#define INCLUDED_65acb6100057af6e
#include "maglev/MagLevResult.h"
#endif
#ifndef INCLUDED_c859d2752ef86c43
#define INCLUDED_c859d2752ef86c43
#include "maglev/MagLevString.h"
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_persistence_MagLevConverter
#include <persistence/MagLevConverter.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_20a371823f0e41b4_16_convertToHaxe,"persistence.MagLevConverter","convertToHaxe",0x593b046d,"persistence.MagLevConverter.convertToHaxe","persistence/MagLevConverter.hx",16,0x208943d8)
HX_LOCAL_STACK_FRAME(_hx_pos_20a371823f0e41b4_62_convertToHaxe,"persistence.MagLevConverter","convertToHaxe",0x593b046d,"persistence.MagLevConverter.convertToHaxe","persistence/MagLevConverter.hx",62,0x208943d8)
HX_LOCAL_STACK_FRAME(_hx_pos_20a371823f0e41b4_64_convertToHaxe,"persistence.MagLevConverter","convertToHaxe",0x593b046d,"persistence.MagLevConverter.convertToHaxe","persistence/MagLevConverter.hx",64,0x208943d8)
HX_LOCAL_STACK_FRAME(_hx_pos_20a371823f0e41b4_55_convertToHaxe,"persistence.MagLevConverter","convertToHaxe",0x593b046d,"persistence.MagLevConverter.convertToHaxe","persistence/MagLevConverter.hx",55,0x208943d8)
HX_LOCAL_STACK_FRAME(_hx_pos_20a371823f0e41b4_77_convertToMagLev,"persistence.MagLevConverter","convertToMagLev",0x55d04711,"persistence.MagLevConverter.convertToMagLev","persistence/MagLevConverter.hx",77,0x208943d8)
HX_LOCAL_STACK_FRAME(_hx_pos_20a371823f0e41b4_97_convertToMagLev,"persistence.MagLevConverter","convertToMagLev",0x55d04711,"persistence.MagLevConverter.convertToMagLev","persistence/MagLevConverter.hx",97,0x208943d8)
HX_LOCAL_STACK_FRAME(_hx_pos_20a371823f0e41b4_93_convertToMagLev,"persistence.MagLevConverter","convertToMagLev",0x55d04711,"persistence.MagLevConverter.convertToMagLev","persistence/MagLevConverter.hx",93,0x208943d8)
namespace persistence{

void MagLevConverter_obj::__construct() { }

Dynamic MagLevConverter_obj::__CreateEmpty() { return new MagLevConverter_obj; }

void *MagLevConverter_obj::_hx_vtable = 0;

Dynamic MagLevConverter_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MagLevConverter_obj > _hx_result = new MagLevConverter_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MagLevConverter_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x03c35d1f;
}

 ::Dynamic MagLevConverter_obj::convertToHaxe( ::maglev::MagLevAny x){
            	HX_GC_STACKFRAME(&_hx_pos_20a371823f0e41b4_16_convertToHaxe)
HXDLIN(  16)		int _hx_tmp = x->getType();
HXDLIN(  16)		if ((_hx_tmp == ::maglev::MagLevNull_obj::getStaticType())) {
HXLINE(  17)			return null();
            		}
            		else {
HXLINE(  19)			int _hx_tmp = x->getType();
HXDLIN(  19)			if ((_hx_tmp == ::maglev::MagLevBoolean_obj::getStaticType())) {
HXLINE(  20)				 ::maglev::MagLevBoolean y = ::hx::TCast<  ::maglev::MagLevBoolean >::cast(x);
HXLINE(  21)				return y->getBool();
            			}
            			else {
HXLINE(  23)				int _hx_tmp = x->getType();
HXDLIN(  23)				if ((_hx_tmp == ::maglev::MagLevString_obj::getStaticType())) {
HXLINE(  24)					 ::maglev::MagLevString y = ::hx::TCast<  ::maglev::MagLevString >::cast(x);
HXLINE(  25)					return y->getString();
            				}
            				else {
HXLINE(  27)					int _hx_tmp = x->getType();
HXDLIN(  27)					if ((_hx_tmp == ::maglev::MagLevNumber_obj::getStaticType())) {
HXLINE(  28)						 ::maglev::MagLevNumber y = ::hx::TCast<  ::maglev::MagLevNumber >::cast(x);
HXLINE(  29)						return y->getFloat();
            					}
            					else {
HXLINE(  31)						int _hx_tmp = x->getType();
HXDLIN(  31)						if ((_hx_tmp == ::maglev::MagLevArray_obj::getStaticType())) {
HXLINE(  32)							 ::maglev::MagLevArray y = ::hx::TCast<  ::maglev::MagLevArray >::cast(x);
HXLINE(  33)							::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new();
HXLINE(  34)							int i = 0;
HXLINE(  35)							while((i < y->size())){
HXLINE(  36)								arr->push(::persistence::MagLevConverter_obj::convertToHaxe(y->get(i)));
HXLINE(  37)								i = (i + 1);
            							}
HXLINE(  39)							return arr;
            						}
            						else {
HXLINE(  41)							int _hx_tmp = x->getType();
HXDLIN(  41)							if ((_hx_tmp == ::maglev::MagLevObject_obj::getStaticType())) {
HXLINE(  42)								 ::maglev::MagLevObject y = ::hx::TCast<  ::maglev::MagLevObject >::cast(x);
HXLINE(  43)								 ::haxe::ds::StringMap map =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  44)								 ::maglev::MagLevArray keys = y->keys();
HXLINE(  45)								int i = 0;
HXLINE(  46)								while((i < keys->size())){
HXLINE(  47)									::String key = ::hx::TCast<  ::maglev::MagLevString >::cast(keys->get(i))->getString();
HXLINE(  48)									map->set(key,::persistence::MagLevConverter_obj::convertToHaxe(y->get(key)));
HXLINE(  49)									i = (i + 1);
            								}
HXLINE(  51)								return map;
            							}
            							else {
HXLINE(  53)								int _hx_tmp = x->getType();
HXDLIN(  53)								if ((_hx_tmp == ::maglev::MagLevFunction_obj::getStaticType())) {
            									HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::maglev::MagLevFunction,y) HXARGC(2)
            									void _hx_run(::cpp::VirtualArray args, ::Dynamic callback){
            										HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::maglev::MagLevResult,ret) HXARGC(1)
            										 ::maglev::MagLevResult _hx_run( ::maglev::MagLevError error){
            											HX_GC_STACKFRAME(&_hx_pos_20a371823f0e41b4_62_convertToHaxe)
HXLINE(  62)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(ret->getError()->getMessage()));
HXDLIN(  62)											return null();
            										}
            										HX_END_LOCAL_FUNC1(return)

            										HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::Dynamic,callback) HXARGC(1)
            										 ::maglev::MagLevResult _hx_run( ::maglev::MagLevAny result){
            											HX_GC_STACKFRAME(&_hx_pos_20a371823f0e41b4_64_convertToHaxe)
HXLINE(  65)											 ::Dynamic callback1 = callback;
HXDLIN(  65)											callback1(::persistence::MagLevConverter_obj::convertToHaxe(result));
HXLINE(  66)											return ::maglev::MagLevResult_obj::fromResult(::maglev::MagLevNull_obj::create());
            										}
            										HX_END_LOCAL_FUNC1(return)

            										HX_GC_STACKFRAME(&_hx_pos_20a371823f0e41b4_55_convertToHaxe)
HXLINE(  56)										 ::maglev::MagLevArray arr = ::maglev::MagLevArray_obj::create();
HXLINE(  57)										{
HXLINE(  57)											int _g = 0;
HXDLIN(  57)											while((_g < args->get_length())){
HXLINE(  57)												 ::Dynamic arg = args->__get(_g);
HXDLIN(  57)												_g = (_g + 1);
HXLINE(  58)												arr->push(::persistence::MagLevConverter_obj::convertToMagLev(arg));
            											}
            										}
HXLINE(  60)										 ::maglev::MagLevResult ret = y->call(arr);
HXLINE(  61)										ret->onError( ::Dynamic(new _hx_Closure_0(ret)));
HXLINE(  64)										ret->onResult( ::Dynamic(new _hx_Closure_1(callback)));
            									}
            									HX_END_LOCAL_FUNC2((void))

HXLINE(  54)									 ::maglev::MagLevFunction y = ::hx::TCast<  ::maglev::MagLevFunction >::cast(x);
HXLINE(  55)									 ::Dynamic f =  ::Dynamic(new _hx_Closure_2(y));
HXLINE(  69)									return f;
            								}
            								else {
HXLINE(  72)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("convertToHaxe: unknown type",4a,83,07,f2)));
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE(  16)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MagLevConverter_obj,convertToHaxe,return )

 ::maglev::MagLevAny MagLevConverter_obj::convertToMagLev( ::Dynamic x){
            	HX_STACKFRAME(&_hx_pos_20a371823f0e41b4_77_convertToMagLev)
HXDLIN(  77)		if (::hx::IsNull( x )) {
HXLINE(  78)			return ::maglev::MagLevNull_obj::create();
            		}
            		else {
HXLINE(  80)			if (::Std_obj::isOfType(x,( ( ::Dynamic)(::hx::ClassOf< bool >()) ))) {
HXLINE(  81)				return ::maglev::MagLevBoolean_obj::fromBool(::hx::TCast< bool >::cast(x));
            			}
            			else {
HXLINE(  83)				if (::Std_obj::isOfType(x,( ( ::Dynamic)(::hx::ClassOf< ::String >()) ))) {
HXLINE(  84)					return ::maglev::MagLevString_obj::fromString(::hx::TCast< ::String >::cast(x));
            				}
            				else {
HXLINE(  86)					if (::Std_obj::isOfType(x,( ( ::Dynamic)(::hx::ClassOf< int >()) ))) {
HXLINE(  87)						return ::maglev::MagLevNumber_obj::fromInt(::hx::TCast< int >::cast(x));
            					}
            					else {
HXLINE(  89)						if (::Std_obj::isOfType(x,( ( ::Dynamic)(::hx::ClassOf< ::Float >()) ))) {
HXLINE(  90)							return ::maglev::MagLevNumber_obj::fromFloat(( (Float)(x) ));
            						}
            						else {
HXLINE(  92)							if (::Reflect_obj::isFunction(x)) {
            								HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::Dynamic,x) HXARGC(1)
            								 ::maglev::MagLevResult _hx_run( ::maglev::MagLevArray args){
            									HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::maglev::MagLevResult,r) HXARGC(1)
            									 ::maglev::MagLevResult _hx_run( ::Dynamic haxeRet){
            										HX_STACKFRAME(&_hx_pos_20a371823f0e41b4_97_convertToMagLev)
HXLINE(  98)										 ::maglev::MagLevResult r1 = r;
HXDLIN(  98)										r1->setResult(::persistence::MagLevConverter_obj::convertToMagLev(haxeRet));
HXLINE(  99)										return ::maglev::MagLevResult_obj::fromResult(::maglev::MagLevNull_obj::create());
            									}
            									HX_END_LOCAL_FUNC1(return)

            									HX_STACKFRAME(&_hx_pos_20a371823f0e41b4_93_convertToMagLev)
HXLINE(  94)									 ::Dynamic y = x;
HXLINE(  95)									 ::Dynamic haxeArgs = ::persistence::MagLevConverter_obj::convertToHaxe(args);
HXLINE(  96)									 ::maglev::MagLevResult r = ::maglev::MagLevResult_obj::createAsync();
HXLINE(  97)									y(haxeArgs, ::Dynamic(new _hx_Closure_0(r)));
HXLINE( 101)									return r;
            								}
            								HX_END_LOCAL_FUNC1(return)

HXLINE(  93)								 ::Dynamic f =  ::Dynamic(new _hx_Closure_1(x));
HXLINE( 103)								return ::maglev::MagLevFunction_obj::fromFunction(f);
            							}
            							else {
HXLINE( 105)								if (::Std_obj::isOfType(x,( ( ::Dynamic)(::hx::ArrayBase::__mClass) ))) {
HXLINE( 106)									 ::maglev::MagLevArray arr = ::maglev::MagLevArray_obj::create();
HXLINE( 107)									::cpp::VirtualArray y = ( (::cpp::VirtualArray)(x) );
HXLINE( 108)									{
HXLINE( 108)										int _g = 0;
HXDLIN( 108)										while((_g < y->get_length())){
HXLINE( 108)											 ::Dynamic item = y->__get(_g);
HXDLIN( 108)											_g = (_g + 1);
HXLINE( 109)											arr->push(::persistence::MagLevConverter_obj::convertToMagLev(item));
            										}
            									}
HXLINE( 111)									return arr;
            								}
            								else {
HXLINE( 113)									if (::Std_obj::isOfType(x,( ( ::Dynamic)(::hx::ClassOf< ::haxe::ds::StringMap >()) ))) {
HXLINE( 114)										 ::haxe::ds::StringMap map = ( ( ::haxe::ds::StringMap)(x) );
HXLINE( 115)										 ::maglev::MagLevObject obj = ::maglev::MagLevObject_obj::create();
HXLINE( 116)										{
HXLINE( 116)											 ::Dynamic key = map->keys();
HXDLIN( 116)											while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 116)												::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 117)												obj->set(key1,::persistence::MagLevConverter_obj::convertToMagLev(map->get(key1)));
            											}
            										}
HXLINE( 119)										return obj;
            									}
            									else {
HXLINE( 121)										if (::Reflect_obj::isObject(x)) {
HXLINE( 122)											 ::maglev::MagLevObject obj = ::maglev::MagLevObject_obj::create();
HXLINE( 123)											{
HXLINE( 123)												int _g = 0;
HXDLIN( 123)												::Array< ::String > _g1 = ::Reflect_obj::fields(x);
HXDLIN( 123)												while((_g < _g1->length)){
HXLINE( 123)													::String field = _g1->__get(_g);
HXDLIN( 123)													_g = (_g + 1);
HXLINE( 124)													 ::Dynamic val = ::Reflect_obj::getProperty(x,field);
HXLINE( 125)													obj->set(field,::persistence::MagLevConverter_obj::convertToMagLev(val));
            												}
            											}
HXLINE( 127)											return obj;
            										}
            										else {
HXLINE( 130)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("convertToMagLev: unknown type",ae,84,a9,64)));
            										}
            									}
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE(  77)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MagLevConverter_obj,convertToMagLev,return )


MagLevConverter_obj::MagLevConverter_obj()
{
}

bool MagLevConverter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"convertToHaxe") ) { outValue = convertToHaxe_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"convertToMagLev") ) { outValue = convertToMagLev_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *MagLevConverter_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *MagLevConverter_obj_sStaticStorageInfo = 0;
#endif

::hx::Class MagLevConverter_obj::__mClass;

static ::String MagLevConverter_obj_sStaticFields[] = {
	HX_("convertToHaxe",94,89,1b,b6),
	HX_("convertToMagLev",f8,a3,b9,0f),
	::String(null())
};

void MagLevConverter_obj::__register()
{
	MagLevConverter_obj _hx_dummy;
	MagLevConverter_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("persistence.MagLevConverter",87,81,09,2e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MagLevConverter_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MagLevConverter_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< MagLevConverter_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MagLevConverter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MagLevConverter_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace persistence
