// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "idesearchglobalparams.h"
#include "searchquery.h"
#include "xmlstylesheet.h"
#include "ideskin.h"
#include "idesession.h"
#include "datatree.h"
#include "htmlattributes.h"
#include "htmlevent.h"
#include "eventssource.h"
#include "htmlvirtualpage.h"
#include "htmlwriter.h"
#include "httprequest.h"
#include "httpresponse.h"
#include "httpsession.h"
#include "idesearchglobalparams.pypp.hpp"

namespace bp = boost::python;

struct IdeSearchGlobalParams_wrapper : ::osiris::IdeSearchGlobalParams, ::osiris::PythonWrapper< ::osiris::IdeSearchGlobalParams > {

    IdeSearchGlobalParams_wrapper(::boost::shared_ptr< osiris::SearchQuery > query=osiris::null )
    : ::osiris::IdeSearchGlobalParams( query )
      , ::osiris::PythonWrapper< ::osiris::IdeSearchGlobalParams >(){
        // constructor
    
    }

    static boost::python::object getQuery( ::osiris::IdeSearchGlobalParams const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::boost::shared_ptr<osiris::SearchQuery> result = inst.getQuery();
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static void fillQuery( ::osiris::IdeSearchGlobalParams & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        inst.fillQuery();
        __pythreadSaver.restore();
    }

    virtual ::osiris::String getTemplatePath(  ) {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_getTemplatePath = this->get_override( "getTemplatePath" ) )
            return func_getTemplatePath(  );
        else{
            __pystate.leave();
            return this->::osiris::IdeSearchGlobalParams::getTemplatePath(  );
        }
    }
    
    ::osiris::String default_getTemplatePath(  ) {
        ::osiris::PythonThreadSaver __pythreadSaver;
        return ::osiris::IdeSearchGlobalParams::getTemplatePath( );
    }

    virtual void onInit(  ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onInit = this->get_override( "onInit" ) )
            func_onInit(  );
        else{
            __pystate.leave();
            this->::osiris::IdeSearchGlobalParams::onInit(  );
        }
    }
    
    virtual void default_onInit(  ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IdeSearchGlobalParams::onInit( );
    }

    virtual void onLoad(  ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onLoad = this->get_override( "onLoad" ) )
            func_onLoad(  );
        else{
            __pystate.leave();
            this->::osiris::IdeSearchGlobalParams::onLoad(  );
        }
    }
    
    virtual void default_onLoad(  ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IdeSearchGlobalParams::onLoad( );
    }

    virtual void onPreRender(  ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onPreRender = this->get_override( "onPreRender" ) )
            func_onPreRender(  );
        else{
            __pystate.leave();
            this->::osiris::IdeSearchGlobalParams::onPreRender(  );
        }
    }
    
    virtual void default_onPreRender(  ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IdeSearchGlobalParams::onPreRender( );
    }

    static void setQuery( ::osiris::IdeSearchGlobalParams & inst, ::boost::shared_ptr< osiris::SearchQuery > query ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        inst.setQuery(query);
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

    virtual void onInitStylesheet(  ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onInitStylesheet = this->get_override( "onInitStylesheet" ) )
            func_onInitStylesheet(  );
        else{
            __pystate.leave();
            this->::osiris::IXSLRenderer< osiris::IPortalPageControl< osiris::IHtmlControl > >::onInitStylesheet(  );
        }
    }
    
    virtual void default_onInitStylesheet(  ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IXSLRenderer< osiris::IPortalPageControl< osiris::IHtmlControl > >::onInitStylesheet( );
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

    virtual void onRender( ::osiris::HtmlWriter & writer ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onRender = this->get_override( "onRender" ) )
            func_onRender( boost::ref(writer) );
        else{
            __pystate.leave();
            this->::osiris::IHtmlControl::onRender( boost::ref(writer) );
        }
    }
    
    virtual void default_onRender( ::osiris::HtmlWriter & writer ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IHtmlControl::onRender( boost::ref(writer) );
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

void register_IdeSearchGlobalParams_class(){

    { //::osiris::IdeSearchGlobalParams
        typedef ::boost::python::class_< IdeSearchGlobalParams_wrapper, ::boost::python::bases< ::osiris::IXSLRenderer< osiris::IPortalPageControl< osiris::IHtmlControl > > >, ::boost::noncopyable > IdeSearchGlobalParams_exposer_t;
        IdeSearchGlobalParams_exposer_t IdeSearchGlobalParams_exposer = IdeSearchGlobalParams_exposer_t( "IdeSearchGlobalParams", ::boost::python::init< ::boost::python::optional< ::boost::shared_ptr< osiris::SearchQuery > > >(( ::boost::python::arg("query")=osiris::null )) );
        ::boost::python::scope IdeSearchGlobalParams_scope( IdeSearchGlobalParams_exposer );
        ::boost::python::implicitly_convertible< ::boost::shared_ptr< osiris::SearchQuery >, ::osiris::IdeSearchGlobalParams >();
        { //::osiris::IdeSearchGlobalParams::getQuery
        
            typedef boost::python::object ( *getQuery_function_type )( ::osiris::IdeSearchGlobalParams const & );
            
            IdeSearchGlobalParams_exposer.def( 
                "getQuery"
                , getQuery_function_type( &IdeSearchGlobalParams_wrapper::getQuery ) );
        
        }
        { //::osiris::IdeSearchGlobalParams::fillQuery
        
            typedef void ( *fillQuery_function_type )( ::osiris::IdeSearchGlobalParams & );
            
            IdeSearchGlobalParams_exposer.def( 
                "fillQuery"
                , fillQuery_function_type( &IdeSearchGlobalParams_wrapper::fillQuery ) );
        
        }
        { //::osiris::IdeSearchGlobalParams::getTemplatePath
        
            typedef ::osiris::String ( ::osiris::IdeSearchGlobalParams::*getTemplatePath_function_type )(  ) ;
            typedef ::osiris::String ( IdeSearchGlobalParams_wrapper::*default_getTemplatePath_function_type )(  ) ;
            
            IdeSearchGlobalParams_exposer.def( 
                "getTemplatePath"
                , getTemplatePath_function_type(&::osiris::IdeSearchGlobalParams::getTemplatePath)
                , default_getTemplatePath_function_type(&IdeSearchGlobalParams_wrapper::default_getTemplatePath) );
        
        }
        { //::osiris::IdeSearchGlobalParams::onInit
        
            typedef void ( IdeSearchGlobalParams_wrapper::*onInit_function_type )(  ) ;
            
            IdeSearchGlobalParams_exposer.def( 
                "onInit"
                , onInit_function_type( &IdeSearchGlobalParams_wrapper::default_onInit ) );
        
        }
        { //::osiris::IdeSearchGlobalParams::onLoad
        
            typedef void ( IdeSearchGlobalParams_wrapper::*onLoad_function_type )(  ) ;
            
            IdeSearchGlobalParams_exposer.def( 
                "onLoad"
                , onLoad_function_type( &IdeSearchGlobalParams_wrapper::default_onLoad ) );
        
        }
        { //::osiris::IdeSearchGlobalParams::onPreRender
        
            typedef void ( IdeSearchGlobalParams_wrapper::*onPreRender_function_type )(  ) ;
            
            IdeSearchGlobalParams_exposer.def( 
                "onPreRender"
                , onPreRender_function_type( &IdeSearchGlobalParams_wrapper::default_onPreRender ) );
        
        }
        { //::osiris::IdeSearchGlobalParams::setQuery
        
            typedef void ( *setQuery_function_type )( ::osiris::IdeSearchGlobalParams &,::boost::shared_ptr<osiris::SearchQuery> );
            
            IdeSearchGlobalParams_exposer.def( 
                "setQuery"
                , setQuery_function_type( &IdeSearchGlobalParams_wrapper::setQuery )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("query") ) );
        
        }
        { //::osiris::IHtmlControl::decodeEvent
        
            typedef bool ( IdeSearchGlobalParams_wrapper::*decodeEvent_function_type )( ::osiris::String const &,::osiris::String &,::osiris::HtmlEvent & ) const;
            
            IdeSearchGlobalParams_exposer.def( 
                "decodeEvent"
                , decodeEvent_function_type( &IdeSearchGlobalParams_wrapper::decodeEvent )
                , ( ::boost::python::arg("command"), ::boost::python::arg("eventName"), ::boost::python::arg("e") ) );
        
        }
        { //::osiris::IHtmlControl::encodeEvent
        
            typedef ::osiris::String ( IdeSearchGlobalParams_wrapper::*encodeEvent_function_type )( ::osiris::String const &,::osiris::HtmlEvent const * ) const;
            
            IdeSearchGlobalParams_exposer.def( 
                "encodeEvent"
                , encodeEvent_function_type( &IdeSearchGlobalParams_wrapper::encodeEvent )
                , ( ::boost::python::arg("eventName"), ::boost::python::arg("e")=(osiris::null) ) );
        
        }
        { //::osiris::IHtmlControl::getSession
        
            typedef ::boost::shared_ptr< osiris::HttpSession > ( ::osiris::IHtmlControl::*getSession_function_type )(  ) const;
            typedef ::boost::shared_ptr< osiris::HttpSession > ( IdeSearchGlobalParams_wrapper::*default_getSession_function_type )(  ) const;
            
            IdeSearchGlobalParams_exposer.def( 
                "getSession"
                , getSession_function_type(&::osiris::IHtmlControl::getSession)
                , default_getSession_function_type(&IdeSearchGlobalParams_wrapper::default_getSession) );
        
        }
        { //::osiris::IHtmlControl::onEvent
        
            typedef void ( IdeSearchGlobalParams_wrapper::*onEvent_function_type )( ::osiris::String const &,::osiris::IEvent * ) ;
            
            IdeSearchGlobalParams_exposer.def( 
                "onEvent"
                , onEvent_function_type( &IdeSearchGlobalParams_wrapper::default_onEvent )
                , ( ::boost::python::arg("name"), ::boost::python::arg("e")=(osiris::null) ) );
        
        }
        { //::osiris::IXSLRenderer< osiris::IPortalPageControl< osiris::IHtmlControl > >::onInitStylesheet
        
            typedef ::osiris::IdeSearchGlobalParams exported_class_t;
            typedef void ( IdeSearchGlobalParams_wrapper::*onInitStylesheet_function_type )(  ) ;
            
            IdeSearchGlobalParams_exposer.def( 
                "onInitStylesheet"
                , onInitStylesheet_function_type( &IdeSearchGlobalParams_wrapper::default_onInitStylesheet ) );
        
        }
        { //::osiris::IHtmlControl::onLoadViewState
        
            typedef void ( IdeSearchGlobalParams_wrapper::*onLoadViewState_function_type )( ::osiris::DataTree const & ) ;
            
            IdeSearchGlobalParams_exposer.def( 
                "onLoadViewState"
                , onLoadViewState_function_type( &IdeSearchGlobalParams_wrapper::default_onLoadViewState )
                , ( ::boost::python::arg("state") ) );
        
        }
        { //::osiris::IHtmlControl::onRender
        
            typedef void ( IdeSearchGlobalParams_wrapper::*onRender_function_type )( ::osiris::HtmlWriter & ) ;
            
            IdeSearchGlobalParams_exposer.def( 
                "onRender"
                , onRender_function_type( &IdeSearchGlobalParams_wrapper::default_onRender )
                , ( ::boost::python::arg("writer") ) );
        
        }
        { //::osiris::IHtmlControl::onSaveViewState
        
            typedef void ( IdeSearchGlobalParams_wrapper::*onSaveViewState_function_type )( ::osiris::DataTree & ) ;
            
            IdeSearchGlobalParams_exposer.def( 
                "onSaveViewState"
                , onSaveViewState_function_type( &IdeSearchGlobalParams_wrapper::default_onSaveViewState )
                , ( ::boost::python::arg("state") ) );
        
        }
        { //::osiris::IHtmlControl::renderAttributes
        
            typedef void ( ::osiris::IHtmlControl::*renderAttributes_function_type )( ::osiris::HtmlWriter & ) ;
            typedef void ( IdeSearchGlobalParams_wrapper::*default_renderAttributes_function_type )( ::osiris::HtmlWriter & ) ;
            
            IdeSearchGlobalParams_exposer.def( 
                "renderAttributes"
                , renderAttributes_function_type(&::osiris::IHtmlControl::renderAttributes)
                , default_renderAttributes_function_type(&IdeSearchGlobalParams_wrapper::default_renderAttributes)
                , ( ::boost::python::arg("writer") ) );
        
        }
        { //::osiris::IHtmlControl::renderChilds
        
            typedef void ( ::osiris::IHtmlControl::*renderChilds_function_type )( ::osiris::HtmlWriter & ) ;
            typedef void ( IdeSearchGlobalParams_wrapper::*default_renderChilds_function_type )( ::osiris::HtmlWriter & ) ;
            
            IdeSearchGlobalParams_exposer.def( 
                "renderChilds"
                , renderChilds_function_type(&::osiris::IHtmlControl::renderChilds)
                , default_renderChilds_function_type(&IdeSearchGlobalParams_wrapper::default_renderChilds)
                , ( ::boost::python::arg("writer") ) );
        
        }
        { //::osiris::IHtmlControl::saveViewState
        
            typedef void ( IdeSearchGlobalParams_wrapper::*saveViewState_function_type )( ::osiris::DataTree & ) ;
            
            IdeSearchGlobalParams_exposer.def( 
                "saveViewState"
                , saveViewState_function_type( &IdeSearchGlobalParams_wrapper::saveViewState )
                , ( ::boost::python::arg("states") ) );
        
        }
        { //property "query"[fget=::osiris::IdeSearchGlobalParams::getQuery, fset=::osiris::IdeSearchGlobalParams::setQuery]
        
            typedef ::boost::shared_ptr<osiris::SearchQuery> ( ::osiris::IdeSearchGlobalParams::*fget )(  ) const;
            typedef void ( ::osiris::IdeSearchGlobalParams::*fset )( ::boost::shared_ptr<osiris::SearchQuery> ) ;
            
            IdeSearchGlobalParams_exposer.add_property( 
                "query"
                , fget( &::osiris::IdeSearchGlobalParams::getQuery )
                , fset( &::osiris::IdeSearchGlobalParams::setQuery )
                , "get\\set property, built on top of \"boost::shared_ptr<osiris::SearchQuery> osiris::IdeSearchGlobalParams::getQuery() const [member function]\" and \"void osiris::IdeSearchGlobalParams::setQuery(boost::shared_ptr<osiris::SearchQuery> query) [member function]\"" );
        
        }
    }

}