// Generated by Haxe 4.1.1
#ifndef INCLUDED_persistence_Persistence
#define INCLUDED_persistence_Persistence

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_16d41c6fc5b8bf5d
#define INCLUDED_16d41c6fc5b8bf5d
#include "maglev/MagLev.h"
#endif
#ifndef INCLUDED_869a921fcf5bba54
#define INCLUDED_869a921fcf5bba54
#include "maglev/MagLevAny.h"
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(persistence,Persistence)
HX_DECLARE_CLASS2(persistence,_Persistence,Getter)
HX_DECLARE_CLASS2(persistence,_Persistence,Mutator)

namespace persistence{


class HXCPP_CLASS_ATTRIBUTES Persistence_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Persistence_obj OBJ_;
		Persistence_obj();

	public:
		enum { _hx_ClassId = 0x0263bb48 };

		void __construct( ::maglev::MagLev bus);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="persistence.Persistence")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"persistence.Persistence"); }
		static ::hx::ObjectPtr< Persistence_obj > __new( ::maglev::MagLev bus);
		static ::hx::ObjectPtr< Persistence_obj > __alloc(::hx::Ctx *_hx_ctx, ::maglev::MagLev bus);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Persistence_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Persistence",3f,af,f6,da); }

		static void __boot();
		static  ::Dynamic __meta__;
		 ::haxe::ds::StringMap mutators;
		 ::haxe::ds::StringMap getters;
		 ::maglev::MagLev maglev;
		void addMutator(::String recordType,::String operationName, ::Dynamic strategyMethod, ::Dynamic updateMapper, ::Dynamic useRecordDataAsParams);
		::Dynamic addMutator_dyn();

		void addGetter(::String recordType,::String operationName, ::Dynamic strategyMethod, ::Dynamic queryMapper, ::Dynamic resultMapper, ::Dynamic useQueryValuesAsParams);
		::Dynamic addGetter_dyn();

		void mutate(::String recordType,::String operationName, ::Dynamic recordData, ::Dynamic callback);
		::Dynamic mutate_dyn();

		void get(::String recordType,::String operationName, ::Dynamic queryValues, ::Dynamic callback);
		::Dynamic get_dyn();

		::String calcKey(::String recordType,::String operationName);
		::Dynamic calcKey_dyn();

		 ::Dynamic convertToHaxe( ::maglev::MagLevAny x);
		::Dynamic convertToHaxe_dyn();

		 ::maglev::MagLevAny convertToMagLev( ::Dynamic x);
		::Dynamic convertToMagLev_dyn();

		void mapUpdate( ::persistence::_Persistence::Mutator mutator, ::Dynamic recordData, ::Dynamic callback);
		::Dynamic mapUpdate_dyn();

		void update( ::persistence::_Persistence::Mutator mutator, ::Dynamic recordData, ::Dynamic callback);
		::Dynamic update_dyn();

		void mapQuery( ::persistence::_Persistence::Getter getter, ::Dynamic queryValues, ::Dynamic callback);
		::Dynamic mapQuery_dyn();

		void query( ::persistence::_Persistence::Getter getter, ::Dynamic queryValues, ::Dynamic callback);
		::Dynamic query_dyn();

		void mapResults( ::persistence::_Persistence::Getter getter, ::Dynamic queryResults, ::Dynamic callback);
		::Dynamic mapResults_dyn();

};

} // end namespace persistence

#endif /* INCLUDED_persistence_Persistence */ 
