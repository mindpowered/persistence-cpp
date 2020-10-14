// Generated by Haxe 4.1.1
#ifndef INCLUDED_persistence__Persistence_Mutator
#define INCLUDED_persistence__Persistence_Mutator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(persistence,_Persistence,Mutator)

namespace persistence{
namespace _Persistence{


class HXCPP_CLASS_ATTRIBUTES Mutator_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Mutator_obj OBJ_;
		Mutator_obj();

	public:
		enum { _hx_ClassId = 0x1e10b1a7 };

		void __construct(::String recordType, ::Dynamic strategyMethod, ::Dynamic updateMapper,bool useRecordDataAsParams);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="persistence._Persistence.Mutator")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"persistence._Persistence.Mutator"); }
		static ::hx::ObjectPtr< Mutator_obj > __new(::String recordType, ::Dynamic strategyMethod, ::Dynamic updateMapper,bool useRecordDataAsParams);
		static ::hx::ObjectPtr< Mutator_obj > __alloc(::hx::Ctx *_hx_ctx,::String recordType, ::Dynamic strategyMethod, ::Dynamic updateMapper,bool useRecordDataAsParams);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Mutator_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Mutator",c2,52,a7,54); }

		static void __boot();
		static  ::Dynamic __meta__;
		::String recordType;
		 ::Dynamic strategyMethod;
		 ::Dynamic updateMapper;
		bool useRecordDataAsParams;
};

} // end namespace persistence
} // end namespace _Persistence

#endif /* INCLUDED_persistence__Persistence_Mutator */ 
