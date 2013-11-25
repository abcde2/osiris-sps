// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "htmlparagraph.h"
#include "datatree.h"
#include "htmlattributes.h"
#include "htmlevent.h"
#include "eventssource.h"
#include "htmlvirtualpage.h"
#include "htmlwriter.h"
#include "httprequest.h"
#include "httpresponse.h"
#include "httpsession.h"
#include "htmlparagraph.pypp.hpp"

namespace bp = boost::python;

struct HtmlParagraph_wrapper : ::osiris::HtmlParagraph, ::osiris::PythonWrapper< ::osiris::HtmlParagraph > {

    HtmlParagraph_wrapper(::osiris::String const & caption=osiris::String::EMPTY )
    : ::osiris::HtmlParagraph( boost::ref(caption) )
      , ::osiris::PythonWrapper< ::osiris::HtmlParagraph >(){
        // constructor
    
    }

    static boost::python::object getCaption( ::osiris::HtmlParagraph const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::String const & result = inst.getCaption();
        __pythreadSaver.restore();
        typedef bp::return_value_policy< bp::copy_const_reference > call_policies_t;
        return boost::python::object( pyplusplus::call_policies::make_object< call_policies_t, ::osiris::String const & >( result ) );
    }

    virtual void onInit(  ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onInit = this->get_override( "onInit" ) )
            func_onInit(  );
        else{
            __pystate.leave();
            this->::osiris::HtmlParagraph::onInit(  );
        }
    }
    
    virtual void default_onInit(  ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::HtmlParagraph::onInit( );
    }

    virtual void onRender( ::osiris::HtmlWriter & writer ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onRender = this->get_override( "onRender" ) )
            func_onRender( boost::ref(writer) );
        else{
            __pystate.leave();
            this->::osiris::HtmlParagraph::onRender( boost::ref(writer) );
        }
    }
    
    virtual void default_onRender( ::osiris::HtmlWriter & writer ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::HtmlParagraph::onRender( boost::ref(writer) );
    }

    static void setCaption( ::osiris::HtmlParagraph & inst, ::osiris::String const & caption ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        inst.setCaption(caption);
        __pythreadSaver.restore();
    }

    bool decodeEvent( ::osiris::String const & command, ::osiris::String & eventName, ::osiris::HtmlEvent & e ) const {
        return ::osiris::IHtmlControl::decodeEvent( boost::ref(command), boost::ref(eventName), boost::ref(e) );
    }

    ::osiris::String encodeEvent( ::osiris::String const & eventName, ::osiris::HtmlEvent const * e=(osiris::null) ) const {
        return ::osiris::IHtmlControl::encodeEvent( boost::ref(eventName), boost::python::ptr(e) );
    }

    virtual ::boost::shared_ptr< osiris::HttpSession > getSession(  ) const  {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_getSession = this->get_override( "getSession" ) )
            return func_getSession(  );
        else{
            __pystate.leave();
            return this->::osiris::IHtmlControl::getSession(  );
        }
    }
    
    ::boost::shared_ptr< osiris::HttpSession > default_getSession(  ) const  {
        ::osiris::PythonThreadSaver __pythreadSaver;
        return ::osiris::IHtmlControl::getSession( );
    }

    virtual void onEvent( ::osiris::String const & name, ::osiris::IEvent * e=(osiris::null) ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onEvent = this->get_override( "onEvent" ) )
            func_onEvent( boost::ref(name), boost::python::ptr(e) );
        else{
            __pystate.leave();
            this->::osiris::IHtmlControl::onEvent( boost::ref(name), boost::python::ptr(e) );
        }
    }
    
    virtual void default_onEvent( ::osiris::String const & name, ::osiris::IEvent * e=(osiris::null) ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IHtmlControl::onEvent( boost::ref(name), boost::python::ptr(e) );
    }

    virtual void onLoad(  ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onLoad = this->get_override( "onLoad" ) )
            func_onLoad(  );
        else{
            __pystate.leave();
            this->::osiris::IHtmlControl::onLoad(  );
        }
    }
    
    virtual void default_onLoad(  ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IHtmlControl::onLoad( );
    }

    virtual void onLoadViewState( ::osiris::DataTree const & state ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onLoadViewState = this->get_override( "onLoadViewState" ) )
            func_onLoadViewState( boost::ref(state) );
        else{
            __pystate.leave();
            this->::osiris::IHtmlControl::onLoadViewState( boost::ref(state) );
        }
    }
    
    virtual void default_onLoadViewState( ::osiris::DataTree const & state ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IHtmlControl::onLoadViewState( boost::ref(state) );
    }

    virtual void onPreRender(  ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onPreRender = this->get_override( "onPreRender" ) )
            func_onPreRender(  );
        else{
            __pystate.leave();
            this->::osiris::IHtmlControl::onPreRender(  );
        }
    }
    
    virtual void default_onPreRender(  ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IHtmlControl::onPreRender( );
    }

    virtual void onSaveViewState( ::osiris::DataTree & state ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onSaveViewState = this->get_override( "onSaveViewState" ) )
            func_onSaveViewState( boost::ref(state) );
        else{
            __pystate.leave();
            this->::osiris::IHtmlControl::onSaveViewState( boost::ref(state) );
        }
    }
    
    virtual void default_onSaveViewState( ::osiris::DataTree & state ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IHtmlControl::onSaveViewState( boost::ref(state) );
    }

    virtual void renderAttributes( ::osiris::HtmlWriter & writer ) {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_renderAttributes = this->get_override( "renderAttributes" ) )
            func_renderAttributes( boost::ref(writer) );
        else{
            __pystate.leave();
            this->::osiris::IHtmlControl::renderAttributes( boost::ref(writer) );
        }
    }
    
    void default_renderAttributes( ::osiris::HtmlWriter & writer ) {
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IHtmlControl::renderAttributes( boost::ref(writer) );
    }

    virtual void renderChilds( ::osiris::HtmlWriter & writer ) {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_renderChilds = this->get_override( "renderChilds" ) )
            func_renderChilds( boost::ref(writer) );
        else{
            __pystate.leave();
            this->::osiris::IHtmlControl::renderChilds( boost::ref(writer) );
        }
    }
    
    void default_renderChilds( ::osiris::HtmlWriter & writer ) {
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IHtmlControl::renderChilds( boost::ref(writer) );
    }

    void saveViewState( ::osiris::DataTree & states ){
        ::osiris::IHtmlControl::saveViewState( boost::ref(states) );
    }

};

void register_HtmlParagraph_class(){

    { //::osiris::HtmlParagraph
        typedef ::boost::python::class_< HtmlParagraph_wrapper, ::boost::python::bases< ::osiris::IHtmlControl >, ::boost::noncopyable > HtmlParagraph_exposer_t;
        HtmlParagraph_exposer_t HtmlParagraph_exposer = HtmlParagraph_exposer_t( "HtmlParagraph", ::boost::python::init< ::boost::python::optional< ::osiris::String const & > >(( ::boost::python::arg("caption")=osiris::String::EMPTY )) );
        ::boost::python::scope HtmlParagraph_scope( HtmlParagraph_exposer );
        ::boost::python::implicitly_convertible< ::osiris::String const &, ::osiris::HtmlParagraph >();
        { //::osiris::HtmlParagraph::getCaption
        
            typedef boost::python::object ( *getCaption_function_type )( ::osiris::HtmlParagraph const & );
            
            HtmlParagraph_exposer.def( 
                "getCaption"
                , getCaption_function_type( &HtmlParagraph_wrapper::getCaption ) );
        
        }
        { //::osiris::HtmlParagraph::onInit
        
            typedef void ( HtmlParagraph_wrapper::*onInit_function_type )(  ) ;
            
            HtmlParagraph_exposer.def( 
                "onInit"
                , onInit_function_type( &HtmlParagraph_wrapper::default_onInit ) );
        
        }
        { //::osiris::HtmlParagraph::onRender
        
            typedef void ( HtmlParagraph_wrapper::*onRender_function_type )( ::osiris::HtmlWriter & ) ;
            
            HtmlParagraph_exposer.def( 
                "onRender"
                , onRender_function_type( &HtmlParagraph_wrapper::default_onRender )
                , ( ::boost::python::arg("writer") ) );
        
        }
        { //::osiris::HtmlParagraph::setCaption
        
            typedef void ( *setCaption_function_type )( ::osiris::HtmlParagraph &,::osiris::String const & );
            
            HtmlParagraph_exposer.def( 
                "setCaption"
                , setCaption_function_type( &HtmlParagraph_wrapper::setCaption )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("caption") ) );
        
        }
        { //::osiris::IHtmlControl::decodeEvent
        
            typedef bool ( HtmlParagraph_wrapper::*decodeEvent_function_type )( ::osiris::String const &,::osiris::String &,::osiris::HtmlEvent & ) const;
            
            HtmlParagraph_exposer.def( 
                "decodeEvent"
                , decodeEvent_function_type( &HtmlParagraph_wrapper::decodeEvent )
                , ( ::boost::python::arg("command"), ::boost::python::arg("eventName"), ::boost::python::arg("e") ) );
        
        }
        { //::osiris::IHtmlControl::encodeEvent
        
            typedef ::osiris::String ( HtmlParagraph_wrapper::*encodeEvent_function_type )( ::osiris::String const &,::osiris::HtmlEvent const * ) const;
            
            HtmlParagraph_exposer.def( 
                "encodeEvent"
                , encodeEvent_function_type( &HtmlParagraph_wrapper::encodeEvent )
                , ( ::boost::python::arg("eventName"), ::boost::python::arg("e")=(osiris::null) ) );
        
        }
        { //::osiris::IHtmlControl::getSession
        
            typedef ::boost::shared_ptr< osiris::HttpSession > ( ::osiris::IHtmlControl::*getSession_function_type )(  ) const;
            typedef ::boost::shared_ptr< osiris::HttpSession > ( HtmlParagraph_wrapper::*default_getSession_function_type )(  ) const;
            
            HtmlParagraph_exposer.def( 
                "getSession"
                , getSession_function_type(&::osiris::IHtmlControl::getSession)
                , default_getSession_function_type(&HtmlParagraph_wrapper::default_getSession) );
        
        }
        { //::osiris::IHtmlControl::onEvent
        
            typedef void ( HtmlParagraph_wrapper::*onEvent_function_type )( ::osiris::String const &,::osiris::IEvent * ) ;
            
            HtmlParagraph_exposer.def( 
                "onEvent"
                , onEvent_function_type( &HtmlParagraph_wrapper::default_onEvent )
                , ( ::boost::python::arg("name"), ::boost::python::arg("e")=(osiris::null) ) );
        
        }
        { //::osiris::IHtmlControl::onLoad
        
            typedef void ( HtmlParagraph_wrapper::*onLoad_function_type )(  ) ;
            
            HtmlParagraph_exposer.def( 
                "onLoad"
                , onLoad_function_type( &HtmlParagraph_wrapper::default_onLoad ) );
        
        }
        { //::osiris::IHtmlControl::onLoadViewState
        
            typedef void ( HtmlParagraph_wrapper::*onLoadViewState_function_type )( ::osiris::DataTree const & ) ;
            
            HtmlParagraph_exposer.def( 
                "onLoadViewState"
                , onLoadViewState_function_type( &HtmlParagraph_wrapper::default_onLoadViewState )
                , ( ::boost::python::arg("state") ) );
        
        }
        { //::osiris::IHtmlControl::onPreRender
        
            typedef void ( HtmlParagraph_wrapper::*onPreRender_function_type )(  ) ;
            
            HtmlParagraph_exposer.def( 
                "onPreRender"
                , onPreRender_function_type( &HtmlParagraph_wrapper::default_onPreRender ) );
        
        }
        { //::osiris::IHtmlControl::onSaveViewState
        
            typedef void ( HtmlParagraph_wrapper::*onSaveViewState_function_type )( ::osiris::DataTree & ) ;
            
            HtmlParagraph_exposer.def( 
                "onSaveViewState"
                , onSaveViewState_function_type( &HtmlParagraph_wrapper::default_onSaveViewState )
                , ( ::boost::python::arg("state") ) );
        
        }
        { //::osiris::IHtmlControl::renderAttributes
        
            typedef void ( ::osiris::IHtmlControl::*renderAttributes_function_type )( ::osiris::HtmlWriter & ) ;
            typedef void ( HtmlParagraph_wrapper::*default_renderAttributes_function_type )( ::osiris::HtmlWriter & ) ;
            
            HtmlParagraph_exposer.def( 
                "renderAttributes"
                , renderAttributes_function_type(&::osiris::IHtmlControl::renderAttributes)
                , default_renderAttributes_function_type(&HtmlParagraph_wrapper::default_renderAttributes)
                , ( ::boost::python::arg("writer") ) );
        
        }
        { //::osiris::IHtmlControl::renderChilds
        
            typedef void ( ::osiris::IHtmlControl::*renderChilds_function_type )( ::osiris::HtmlWriter & ) ;
            typedef void ( HtmlParagraph_wrapper::*default_renderChilds_function_type )( ::osiris::HtmlWriter & ) ;
            
            HtmlParagraph_exposer.def( 
                "renderChilds"
                , renderChilds_function_type(&::osiris::IHtmlControl::renderChilds)
                , default_renderChilds_function_type(&HtmlParagraph_wrapper::default_renderChilds)
                , ( ::boost::python::arg("writer") ) );
        
        }
        { //::osiris::IHtmlControl::saveViewState
        
            typedef void ( HtmlParagraph_wrapper::*saveViewState_function_type )( ::osiris::DataTree & ) ;
            
            HtmlParagraph_exposer.def( 
                "saveViewState"
                , saveViewState_function_type( &HtmlParagraph_wrapper::saveViewState )
                , ( ::boost::python::arg("states") ) );
        
        }
        { //property "caption"[fget=::osiris::HtmlParagraph::getCaption, fset=::osiris::HtmlParagraph::setCaption]
        
            typedef ::osiris::String const & ( ::osiris::HtmlParagraph::*fget )(  ) const;
            typedef void ( ::osiris::HtmlParagraph::*fset )( ::osiris::String const & ) ;
            
            HtmlParagraph_exposer.add_property( 
                "caption"
                , ::boost::python::make_function( 
                      fget( &::osiris::HtmlParagraph::getCaption )
                    , bp::return_value_policy< bp::copy_const_reference >() ) 
                , fset( &::osiris::HtmlParagraph::setCaption )
                , "get\\set property, built on top of \"osiris::String const & osiris::HtmlParagraph::getCaption() const [member function]\" and \"void osiris::HtmlParagraph::setCaption(osiris::String const & caption) [member function]\"" );
        
        }
    }

}