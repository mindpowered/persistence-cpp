// Generated by Haxe 4.1.1
#ifndef INCLUDED_maglev_MagLevCpp
#define INCLUDED_maglev_MagLevCpp

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_f1f713c9e000f5d3
#define INCLUDED_f1f713c9e000f5d3
#include "array"
#endif
#ifndef INCLUDED_7625ac700f09f214
#define INCLUDED_7625ac700f09f214
#include "functional"
#endif
#ifndef INCLUDED_31a7389c9269a947
#define INCLUDED_31a7389c9269a947
#include "hx/StdString.h"
#endif
HX_DECLARE_CLASS1(maglev,CppAny)
HX_DECLARE_CLASS1(maglev,MagLevCpp)
HX_DECLARE_CLASS1(maglev,MagLevOld)

namespace maglev{


class HXCPP_CLASS_ATTRIBUTES MagLevCpp_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef MagLevCpp_obj OBJ_;
		MagLevCpp_obj();

	public:
		enum { _hx_ClassId = 0x7fdd21fb };

		void __construct( ::maglev::MagLevOld maglev);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="maglev.MagLevCpp")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"maglev.MagLevCpp"); }
		static ::hx::ObjectPtr< MagLevCpp_obj > __new( ::maglev::MagLevOld maglev);
		static ::hx::ObjectPtr< MagLevCpp_obj > __alloc(::hx::Ctx *_hx_ctx, ::maglev::MagLevOld maglev);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MagLevCpp_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MagLevCpp",19,04,a7,b2); }

		static  ::maglev::MagLevCpp getInstance( hx::StdString cppKey);

		 ::maglev::MagLevOld maglev;
		void _hx_register( hx::StdString cppMethod, std::function<CppAny(std::vector<CppAny>)> cppCallback);

		void call( hx::StdString cppMethod, std::vector<CppAny> cppArgs, std::function<void(CppAny)> cppResultCallback);

		void listen( hx::StdString cppEvent, std::function<CppAny(std::vector<CppAny>)> cppCallback);

		void emit( hx::StdString cppEvent, std::vector<CppAny> cppArgs);

		 ::Dynamic CppAnyToAny( ::maglev::CppAny cppAny);
		::Dynamic CppAnyToAny_dyn();

		::cpp::VirtualArray CppAnyVectorToAnyArray( std::vector<CppAny> cppAnyVector);

		 ::maglev::CppAny AnyToCppAny( ::Dynamic any);
		::Dynamic AnyToCppAny_dyn();

		 std::vector<CppAny> AnyArrayToCppAnyVector(::cpp::VirtualArray anyArray);

};

} // end namespace maglev

#endif /* INCLUDED_maglev_MagLevCpp */ 
