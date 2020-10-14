// Generated by Haxe 4.1.1
#include <hxcpp.h>

#ifndef INCLUDED_16d41c6fc5b8bf5d
#define INCLUDED_16d41c6fc5b8bf5d
#include "maglev/MagLev.h"
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
#ifndef INCLUDED_persistence_Persistence
#include <persistence/Persistence.h>
#endif
#ifndef INCLUDED_persistence__Persistence_Getter
#include <persistence/_Persistence/Getter.h>
#endif
#ifndef INCLUDED_persistence__Persistence_Mutator
#include <persistence/_Persistence/Mutator.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9b0a59171cb4a4c9_20_new,"persistence.Persistence","new",0x1c38c4a2,"persistence.Persistence.new","persistence/Persistence.hx",20,0x9767c4cf)
HX_DEFINE_STACK_FRAME(_hx_pos_9b0a59171cb4a4c9_35_new,"persistence.Persistence","new",0x1c38c4a2,"persistence.Persistence.new","persistence/Persistence.hx",35,0x9767c4cf)
HX_DEFINE_STACK_FRAME(_hx_pos_9b0a59171cb4a4c9_54_new,"persistence.Persistence","new",0x1c38c4a2,"persistence.Persistence.new","persistence/Persistence.hx",54,0x9767c4cf)
HX_DEFINE_STACK_FRAME(_hx_pos_9b0a59171cb4a4c9_61_new,"persistence.Persistence","new",0x1c38c4a2,"persistence.Persistence.new","persistence/Persistence.hx",61,0x9767c4cf)
HX_DEFINE_STACK_FRAME(_hx_pos_9b0a59171cb4a4c9_16_new,"persistence.Persistence","new",0x1c38c4a2,"persistence.Persistence.new","persistence/Persistence.hx",16,0x9767c4cf)
HX_LOCAL_STACK_FRAME(_hx_pos_9b0a59171cb4a4c9_69_addMutator,"persistence.Persistence","addMutator",0xab434ebf,"persistence.Persistence.addMutator","persistence/Persistence.hx",69,0x9767c4cf)
HX_LOCAL_STACK_FRAME(_hx_pos_9b0a59171cb4a4c9_71_addMutator,"persistence.Persistence","addMutator",0xab434ebf,"persistence.Persistence.addMutator","persistence/Persistence.hx",71,0x9767c4cf)
HX_LOCAL_STACK_FRAME(_hx_pos_9b0a59171cb4a4c9_80_addGetter,"persistence.Persistence","addGetter",0xa800a5ce,"persistence.Persistence.addGetter","persistence/Persistence.hx",80,0x9767c4cf)
HX_LOCAL_STACK_FRAME(_hx_pos_9b0a59171cb4a4c9_82_addGetter,"persistence.Persistence","addGetter",0xa800a5ce,"persistence.Persistence.addGetter","persistence/Persistence.hx",82,0x9767c4cf)
HX_LOCAL_STACK_FRAME(_hx_pos_9b0a59171cb4a4c9_85_addGetter,"persistence.Persistence","addGetter",0xa800a5ce,"persistence.Persistence.addGetter","persistence/Persistence.hx",85,0x9767c4cf)
HX_LOCAL_STACK_FRAME(_hx_pos_9b0a59171cb4a4c9_95_mutate,"persistence.Persistence","mutate",0x1e0a9484,"persistence.Persistence.mutate","persistence/Persistence.hx",95,0x9767c4cf)
HX_LOCAL_STACK_FRAME(_hx_pos_9b0a59171cb4a4c9_135_get,"persistence.Persistence","get",0x1c3374d8,"persistence.Persistence.get","persistence/Persistence.hx",135,0x9767c4cf)
HX_LOCAL_STACK_FRAME(_hx_pos_9b0a59171cb4a4c9_190_calcKey,"persistence.Persistence","calcKey",0xf23c314c,"persistence.Persistence.calcKey","persistence/Persistence.hx",190,0x9767c4cf)
HX_LOCAL_STACK_FRAME(_hx_pos_9b0a59171cb4a4c9_10_boot,"persistence.Persistence","boot",0x8d8c49b0,"persistence.Persistence.boot","persistence/Persistence.hx",10,0x9767c4cf)
namespace persistence{

void Persistence_obj::__construct( ::maglev::MagLev bus){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::persistence::Persistence,_gthis) HXARGC(1)
            		 ::Dynamic _hx_run(::cpp::VirtualArray args){
            			HX_GC_STACKFRAME(&_hx_pos_9b0a59171cb4a4c9_20_new)
HXLINE(  21)			::String recordType = ( (::String)(args->__get(0)) );
HXLINE(  22)			::String operationName = ( (::String)(args->__get(1)) );
HXLINE(  23)			 ::Dynamic strategyMethod = args->__get(2);
HXLINE(  24)			 ::Dynamic updateMapper = null();
HXLINE(  25)			if ((args->get_length() > 3)) {
HXLINE(  26)				updateMapper = args->__get(3);
            			}
HXLINE(  28)			 ::Dynamic useRecordDataAsParams = null();
HXLINE(  29)			if ((args->get_length() > 4)) {
HXLINE(  30)				useRecordDataAsParams = args->__get(4);
            			}
HXLINE(  32)			_gthis->addMutator(recordType,operationName,strategyMethod,updateMapper,useRecordDataAsParams);
HXLINE(  33)			return true;
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::persistence::Persistence,_gthis) HXARGC(1)
            		 ::Dynamic _hx_run(::cpp::VirtualArray args){
            			HX_GC_STACKFRAME(&_hx_pos_9b0a59171cb4a4c9_35_new)
HXLINE(  36)			::String recordType = ( (::String)(args->__get(0)) );
HXLINE(  37)			::String operationName = ( (::String)(args->__get(1)) );
HXLINE(  38)			 ::Dynamic strategyMethod = args->__get(2);
HXLINE(  39)			 ::Dynamic queryMapper = null();
HXLINE(  40)			if ((args->get_length() >= 4)) {
HXLINE(  41)				queryMapper = args->__get(3);
            			}
HXLINE(  43)			 ::Dynamic resultMapper = null();
HXLINE(  44)			if ((args->get_length() >= 5)) {
HXLINE(  45)				resultMapper = args->__get(4);
            			}
HXLINE(  47)			 ::Dynamic useQueryValuesAsParams = null();
HXLINE(  48)			if ((args->get_length() >= 6)) {
HXLINE(  49)				useQueryValuesAsParams = args->__get(5);
            			}
HXLINE(  51)			_gthis->addGetter(recordType,operationName,strategyMethod,queryMapper,resultMapper,useQueryValuesAsParams);
HXLINE(  52)			return true;
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::persistence::Persistence,_gthis) HXARGC(1)
            		 ::Dynamic _hx_run(::cpp::VirtualArray args){
            			HX_GC_STACKFRAME(&_hx_pos_9b0a59171cb4a4c9_54_new)
HXLINE(  55)			::String recordType = ( (::String)(args->__get(0)) );
HXLINE(  56)			::String operationName = ( (::String)(args->__get(1)) );
HXLINE(  57)			 ::Dynamic recordData = args->__get(2);
HXLINE(  58)			_gthis->mutate(recordType,operationName,recordData);
HXLINE(  59)			return true;
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_3, ::persistence::Persistence,_gthis) HXARGC(1)
            		 ::Dynamic _hx_run(::cpp::VirtualArray args){
            			HX_GC_STACKFRAME(&_hx_pos_9b0a59171cb4a4c9_61_new)
HXLINE(  62)			::String recordType = ( (::String)(args->__get(0)) );
HXLINE(  63)			::String operationName = ( (::String)(args->__get(1)) );
HXLINE(  64)			 ::Dynamic queryValues = args->__get(2);
HXLINE(  65)			return _gthis->get(recordType,operationName,queryValues);
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_GC_STACKFRAME(&_hx_pos_9b0a59171cb4a4c9_16_new)
HXDLIN(  16)		 ::persistence::Persistence _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  17)		this->mutators =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  18)		this->getters =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  19)		this->maglev = bus;
HXLINE(  20)		this->maglev->_hx_register(HX_("Persistence.AddMutator",b0,4b,5e,d4), ::Dynamic(new _hx_Closure_0(_gthis)));
HXLINE(  35)		this->maglev->_hx_register(HX_("Persistence.AddGetter",fd,51,1c,b7), ::Dynamic(new _hx_Closure_1(_gthis)));
HXLINE(  54)		this->maglev->_hx_register(HX_("Persistence.Mutate",f5,04,66,8c), ::Dynamic(new _hx_Closure_2(_gthis)));
HXLINE(  61)		this->maglev->_hx_register(HX_("Persistence.Get",c7,c3,56,12), ::Dynamic(new _hx_Closure_3(_gthis)));
            	}

Dynamic Persistence_obj::__CreateEmpty() { return new Persistence_obj; }

void *Persistence_obj::_hx_vtable = 0;

Dynamic Persistence_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Persistence_obj > _hx_result = new Persistence_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Persistence_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0263bb48;
}

void Persistence_obj::addMutator(::String recordType,::String operationName, ::Dynamic strategyMethod, ::Dynamic updateMapper, ::Dynamic useRecordDataAsParams){
            	HX_GC_STACKFRAME(&_hx_pos_9b0a59171cb4a4c9_69_addMutator)
HXLINE(  70)		if (::hx::IsNull( updateMapper )) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            			 ::Dynamic _hx_run( ::Dynamic v){
            				HX_STACKFRAME(&_hx_pos_9b0a59171cb4a4c9_71_addMutator)
HXLINE(  71)				return v;
            			}
            			HX_END_LOCAL_FUNC1(return)

HXLINE(  71)			updateMapper =  ::Dynamic(new _hx_Closure_0());
            		}
HXLINE(  73)		if (::hx::IsNull( useRecordDataAsParams )) {
HXLINE(  74)			useRecordDataAsParams = false;
            		}
HXLINE(  76)		 ::persistence::_Persistence::Mutator mutator =  ::persistence::_Persistence::Mutator_obj::__alloc( HX_CTX ,recordType,strategyMethod,updateMapper,( (bool)(useRecordDataAsParams) ));
HXLINE(  77)		{
HXLINE(  77)			::Dynamic this1 = this->mutators;
HXDLIN(  77)			( ( ::haxe::ds::StringMap)(this1) )->set(this->calcKey(recordType,operationName),mutator);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC5(Persistence_obj,addMutator,(void))

void Persistence_obj::addGetter(::String recordType,::String operationName, ::Dynamic strategyMethod, ::Dynamic queryMapper, ::Dynamic resultMapper, ::Dynamic useQueryValuesAsParams){
            	HX_GC_STACKFRAME(&_hx_pos_9b0a59171cb4a4c9_80_addGetter)
HXLINE(  81)		if (::hx::IsNull( queryMapper )) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            			 ::Dynamic _hx_run( ::Dynamic v){
            				HX_STACKFRAME(&_hx_pos_9b0a59171cb4a4c9_82_addGetter)
HXLINE(  82)				return v;
            			}
            			HX_END_LOCAL_FUNC1(return)

HXLINE(  82)			queryMapper =  ::Dynamic(new _hx_Closure_0());
            		}
HXLINE(  84)		if (::hx::IsNull( resultMapper )) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            			 ::Dynamic _hx_run( ::Dynamic v){
            				HX_STACKFRAME(&_hx_pos_9b0a59171cb4a4c9_85_addGetter)
HXLINE(  85)				return v;
            			}
            			HX_END_LOCAL_FUNC1(return)

HXLINE(  85)			resultMapper =  ::Dynamic(new _hx_Closure_1());
            		}
HXLINE(  87)		if (::hx::IsNull( useQueryValuesAsParams )) {
HXLINE(  88)			useQueryValuesAsParams = false;
            		}
HXLINE(  90)		 ::persistence::_Persistence::Getter getter =  ::persistence::_Persistence::Getter_obj::__alloc( HX_CTX ,recordType,strategyMethod,queryMapper,resultMapper,( (bool)(useQueryValuesAsParams) ));
HXLINE(  91)		{
HXLINE(  91)			::Dynamic this1 = this->getters;
HXDLIN(  91)			( ( ::haxe::ds::StringMap)(this1) )->set(this->calcKey(recordType,operationName),getter);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC6(Persistence_obj,addGetter,(void))

void Persistence_obj::mutate(::String recordType,::String operationName, ::Dynamic recordData){
            	HX_STACKFRAME(&_hx_pos_9b0a59171cb4a4c9_95_mutate)
HXDLIN(  95)		::Dynamic this1 = this->mutators;
HXDLIN(  95)		if (( ( ::haxe::ds::StringMap)(this1) )->exists(this->calcKey(recordType,operationName))) {
HXLINE(  96)			::Dynamic this1 = this->mutators;
HXDLIN(  96)			 ::persistence::_Persistence::Mutator mutator = ( ( ::persistence::_Persistence::Mutator)(( ( ::haxe::ds::StringMap)(this1) )->get(this->calcKey(recordType,operationName))) );
HXLINE(  98)			 ::Dynamic params = null();
HXLINE(  99)			if (::Reflect_obj::isFunction(mutator->updateMapper)) {
HXLINE( 100)				 ::Dynamic updateMapper = mutator->updateMapper;
HXLINE( 101)				params = updateMapper(recordData);
            			}
            			else {
HXLINE( 103)				if (::Std_obj::isOfType(mutator->updateMapper,( ( ::Dynamic)(::hx::ClassOf< ::String >()) ))) {
HXLINE( 104)					::String updateMapper = ( (::String)(mutator->updateMapper) );
HXLINE( 106)					params = this->maglev->call(updateMapper,::cpp::VirtualArray_obj::__new(1)->init(0,recordData));
            				}
            				else {
HXLINE( 109)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("updateMapper must be a string or function",e1,0d,80,87)));
            				}
            			}
HXLINE( 112)			 ::Dynamic raw_result = null();
HXLINE( 113)			if (::Reflect_obj::isFunction(mutator->strategyMethod)) {
HXLINE( 114)				 ::Dynamic strategyMethod = mutator->strategyMethod;
HXLINE( 115)				raw_result = strategyMethod(params);
            			}
            			else {
HXLINE( 117)				if (::Std_obj::isOfType(mutator->strategyMethod,( ( ::Dynamic)(::hx::ClassOf< ::String >()) ))) {
HXLINE( 118)					::String strategyMethod = ( (::String)(mutator->strategyMethod) );
HXLINE( 119)					if (mutator->useRecordDataAsParams) {
HXLINE( 120)						raw_result = this->maglev->call(strategyMethod,( (::cpp::VirtualArray)(params) ));
            					}
            					else {
HXLINE( 122)						raw_result = this->maglev->call(strategyMethod,::cpp::VirtualArray_obj::__new(1)->init(0,params));
            					}
            				}
            				else {
HXLINE( 126)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("strategyMethod must be a string or function",97,7a,0d,90)));
            				}
            			}
            		}
            		else {
HXLINE( 130)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("the specified mutator has not been added",fc,3b,68,3f)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Persistence_obj,mutate,(void))

 ::Dynamic Persistence_obj::get(::String recordType,::String operationName, ::Dynamic queryValues){
            	HX_STACKFRAME(&_hx_pos_9b0a59171cb4a4c9_135_get)
HXDLIN( 135)		::Dynamic this1 = this->getters;
HXDLIN( 135)		if (( ( ::haxe::ds::StringMap)(this1) )->exists(this->calcKey(recordType,operationName))) {
HXLINE( 136)			::Dynamic this1 = this->getters;
HXDLIN( 136)			 ::persistence::_Persistence::Getter getter = ( ( ::persistence::_Persistence::Getter)(( ( ::haxe::ds::StringMap)(this1) )->get(this->calcKey(recordType,operationName))) );
HXLINE( 138)			 ::Dynamic query = null();
HXLINE( 139)			if (::Reflect_obj::isFunction(getter->queryMapper)) {
HXLINE( 140)				 ::Dynamic queryMapper = getter->queryMapper;
HXLINE( 141)				query = queryMapper(queryValues);
            			}
            			else {
HXLINE( 143)				if (::Std_obj::isOfType(getter->queryMapper,( ( ::Dynamic)(::hx::ClassOf< ::String >()) ))) {
HXLINE( 144)					::String queryMapper = ( (::String)(getter->queryMapper) );
HXLINE( 146)					query = this->maglev->call(queryMapper,::cpp::VirtualArray_obj::__new(1)->init(0,queryValues));
            				}
            				else {
HXLINE( 149)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("queryMapper must be a string or function",42,16,bc,ef)));
            				}
            			}
HXLINE( 152)			 ::Dynamic raw_result = null();
HXLINE( 153)			if (::Reflect_obj::isFunction(getter->strategyMethod)) {
HXLINE( 154)				 ::Dynamic strategyMethod = getter->strategyMethod;
HXLINE( 155)				raw_result = strategyMethod(query);
            			}
            			else {
HXLINE( 157)				if (::Std_obj::isOfType(getter->strategyMethod,( ( ::Dynamic)(::hx::ClassOf< ::String >()) ))) {
HXLINE( 158)					::String strategyMethod = ( (::String)(getter->strategyMethod) );
HXLINE( 159)					if (getter->useQueryValuesAsParams) {
HXLINE( 160)						raw_result = this->maglev->call(( (::String)(getter->strategyMethod) ),( (::cpp::VirtualArray)(query) ));
            					}
            					else {
HXLINE( 162)						raw_result = this->maglev->call(( (::String)(getter->strategyMethod) ),::cpp::VirtualArray_obj::__new(1)->init(0,query));
            					}
            				}
            				else {
HXLINE( 166)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("strategyMethod must be a string or function",97,7a,0d,90)));
            				}
            			}
HXLINE( 169)			 ::Dynamic result = null();
HXLINE( 170)			if (::Reflect_obj::isFunction(getter->resultMapper)) {
HXLINE( 171)				 ::Dynamic resultMapper = getter->resultMapper;
HXLINE( 172)				result = resultMapper(raw_result);
            			}
            			else {
HXLINE( 174)				if (::Std_obj::isOfType(getter->resultMapper,( ( ::Dynamic)(::hx::ClassOf< ::String >()) ))) {
HXLINE( 175)					::String resultMapper = ( (::String)(getter->resultMapper) );
HXLINE( 177)					result = this->maglev->call(resultMapper,::cpp::VirtualArray_obj::__new(1)->init(0,raw_result));
            				}
            				else {
HXLINE( 180)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("resultMapper must be a string or function",8d,d7,71,1d)));
            				}
            			}
HXLINE( 182)			return result;
            		}
            		else {
HXLINE( 185)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("the specified getter has not been added",55,b4,c1,d8)));
            		}
HXLINE( 135)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC3(Persistence_obj,get,return )

::String Persistence_obj::calcKey(::String recordType,::String operationName){
            	HX_STACKFRAME(&_hx_pos_9b0a59171cb4a4c9_190_calcKey)
HXDLIN( 190)		return ((recordType + HX_(".",2e,00,00,00)) + operationName);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Persistence_obj,calcKey,return )


::hx::ObjectPtr< Persistence_obj > Persistence_obj::__new( ::maglev::MagLev bus) {
	::hx::ObjectPtr< Persistence_obj > __this = new Persistence_obj();
	__this->__construct(bus);
	return __this;
}

::hx::ObjectPtr< Persistence_obj > Persistence_obj::__alloc(::hx::Ctx *_hx_ctx, ::maglev::MagLev bus) {
	Persistence_obj *__this = (Persistence_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Persistence_obj), true, "persistence.Persistence"));
	*(void **)__this = Persistence_obj::_hx_vtable;
	__this->__construct(bus);
	return __this;
}

Persistence_obj::Persistence_obj()
{
}

void Persistence_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Persistence);
	HX_MARK_MEMBER_NAME(mutators,"mutators");
	HX_MARK_MEMBER_NAME(getters,"getters");
	HX_MARK_MEMBER_NAME(maglev,"maglev");
	HX_MARK_END_CLASS();
}

void Persistence_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mutators,"mutators");
	HX_VISIT_MEMBER_NAME(getters,"getters");
	HX_VISIT_MEMBER_NAME(maglev,"maglev");
}

::hx::Val Persistence_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"maglev") ) { return ::hx::Val( maglev ); }
		if (HX_FIELD_EQ(inName,"mutate") ) { return ::hx::Val( mutate_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getters") ) { return ::hx::Val( getters ); }
		if (HX_FIELD_EQ(inName,"calcKey") ) { return ::hx::Val( calcKey_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mutators") ) { return ::hx::Val( mutators ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addGetter") ) { return ::hx::Val( addGetter_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addMutator") ) { return ::hx::Val( addMutator_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Persistence_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"maglev") ) { maglev=inValue.Cast<  ::maglev::MagLev >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getters") ) { getters=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mutators") ) { mutators=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Persistence_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("mutators",51,5b,0f,e4));
	outFields->push(HX_("getters",08,4b,a3,34));
	outFields->push(HX_("maglev",2a,df,2b,b3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Persistence_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Persistence_obj,mutators),HX_("mutators",51,5b,0f,e4)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Persistence_obj,getters),HX_("getters",08,4b,a3,34)},
	{::hx::fsUnknown /*  ::maglev::MagLev */ ,(int)offsetof(Persistence_obj,maglev),HX_("maglev",2a,df,2b,b3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Persistence_obj_sStaticStorageInfo = 0;
#endif

static ::String Persistence_obj_sMemberFields[] = {
	HX_("mutators",51,5b,0f,e4),
	HX_("getters",08,4b,a3,34),
	HX_("maglev",2a,df,2b,b3),
	HX_("addMutator",c1,56,e0,ee),
	HX_("addGetter",0c,14,64,5b),
	HX_("mutate",86,f3,be,3f),
	HX_("get",96,80,4e,00),
	HX_("calcKey",0a,f4,5a,4e),
	::String(null()) };

::hx::Class Persistence_obj::__mClass;

void Persistence_obj::__register()
{
	Persistence_obj _hx_dummy;
	Persistence_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("persistence.Persistence",b0,8b,d5,e5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Persistence_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Persistence_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Persistence_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Persistence_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Persistence_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_9b0a59171cb4a4c9_10_boot)
HXDLIN(  10)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,::cpp::VirtualArray_obj::__new(4)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))->init(1,HX_("checkstyle:LocalVariableName",c1,ac,a3,03))->init(2,HX_("checkstyle:MultipleStringLiterals",d6,ed,13,79))->init(3,HX_("checkstyle:MagicNumber",a5,aa,f4,8b)))))));
            	}
}

} // end namespace persistence
