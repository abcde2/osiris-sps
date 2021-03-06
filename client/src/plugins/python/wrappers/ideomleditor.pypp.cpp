// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "ideomleditor.h"
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
#include "ideomleditor.pypp.hpp"

namespace bp = boost::python;

struct IdeOMLEditor_wrapper : ::osiris::IdeOMLEditor, ::osiris::PythonWrapper< ::osiris::IdeOMLEditor > {

    IdeOMLEditor_wrapper( )
    : ::osiris::IdeOMLEditor( )
      , ::osiris::PythonWrapper< ::osiris::IdeOMLEditor >(){
        // null constructor
    
    }

    static boost::python::object getExtended( ::osiris::IdeOMLEditor const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        bool result = inst.getExtended();
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static boost::python::object getRow( ::osiris::IdeOMLEditor const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        bool result = inst.getRow();
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static boost::python::object getValue( ::osiris::IdeOMLEditor const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::String const & result = inst.getValue();
        __pythreadSaver.restore();
        typedef bp::return_value_policy< bp::copy_const_reference > call_policies_t;
        return boost::python::object( pyplusplus::call_policies::make_object< call_policies_t, ::osiris::String const & >( result ) );
    }

    virtual ::osiris::String getTemplatePath(  ) {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_getTemplatePath = this->get_override( "getTemplatePath" ) )
            return func_getTemplatePath(  );
        else{
            __pystate.leave();
            return this->::osiris::IdeOMLEditor::getTemplatePath(  );
        }
    }
    
    ::osiris::String default_getTemplatePath(  ) {
        ::osiris::PythonThreadSaver __pythreadSaver;
        return ::osiris::IdeOMLEditor::getTemplatePath( );
    }

    virtual void onInit(  ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onInit = this->get_override( "onInit" ) )
            func_onInit(  );
        else{
            __pystate.leave();
            this->::osiris::IdeOMLEditor::onInit(  );
        }
    }
    
    virtual void default_onInit(  ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IdeOMLEditor::onInit( );
    }

    virtual void onLoad(  ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onLoad = this->get_override( "onLoad" ) )
            func_onLoad(  );
        else{
            __pystate.leave();
            this->::osiris::IdeOMLEditor::onLoad(  );
        }
    }
    
    virtual void default_onLoad(  ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IdeOMLEditor::onLoad( );
    }

    virtual void onPreRender(  ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onPreRender = this->get_override( "onPreRender" ) )
            func_onPreRender(  );
        else{
            __pystate.leave();
            this->::osiris::IdeOMLEditor::onPreRender(  );
        }
    }
    
    virtual void default_onPreRender(  ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IdeOMLEditor::onPreRender( );
    }

    virtual void onLoadViewState( ::osiris::DataTree const & state ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onLoadViewState = this->get_override( "onLoadViewState" ) )
            func_onLoadViewState( boost::ref(state) );
        else{
            __pystate.leave();
            this->::osiris::IdeOMLEditor::onLoadViewState( boost::ref(state) );
        }
    }
    
    virtual void default_onLoadViewState( ::osiris::DataTree const & state ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IdeOMLEditor::onLoadViewState( boost::ref(state) );
    }

    virtual void onSaveViewState( ::osiris::DataTree & state ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onSaveViewState = this->get_override( "onSaveViewState" ) )
            func_onSaveViewState( boost::ref(state) );
        else{
            __pystate.leave();
            this->::osiris::IdeOMLEditor::onSaveViewState( boost::ref(state) );
        }
    }
    
    virtual void default_onSaveViewState( ::osiris::DataTree & state ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IdeOMLEditor::onSaveViewState( boost::ref(state) );
    }

    static void setExtended( ::osiris::IdeOMLEditor & inst, bool extended ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        inst.setExtended(extended);
        __pythreadSaver.restore();
    }

    static void setRow( ::osiris::IdeOMLEditor & inst, bool row ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        inst.setRow(row);
        __pythreadSaver.restore();
    }

    static void setValue( ::osiris::IdeOMLEditor & inst, ::osiris::String const & value ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        inst.setValue(value);
        __pythreadSaver.restore();
    }

    bool decodeEvent( ::osiris::String const & command, ::osiris::String & eventName, ::osiris::HtmlEvent & e ) const {
        return ::osiris::IHtmlControl::decodeEvent( boost::ref(command), boost::ref(eventName), boost::ref(e) );
    }

    ::osiris::String encodeEvent( ::osiris::String const & eventName, ::osiris::HtmlEvent const * e=(nullptr) ) const {
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

    virtual void onEvent( ::osiris::String const & name, ::osiris::IEvent * e=(nullptr) ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onEvent = this->get_override( "onEvent" ) )
            func_onEvent( boost::ref(name), boost::python::ptr(e) );
        else{
            __pystate.leave();
            this->::osiris::IHtmlControl::onEvent( boost::ref(name), boost::python::ptr(e) );
        }
    }
    
    virtual void default_onEvent( ::osiris::String const & name, ::osiris::IEvent * e=(nullptr) ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IHtmlControl::onEvent( boost::ref(name), boost::python::ptr(e) );
    }

    virtual void onInitStylesheet(  ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onInitStylesheet = this->get_override( "onInitStylesheet" ) )
            func_onInitStylesheet(  );
        else{
            __pystate.leave();
            this->::osiris::IXSLRenderer< osiris::IPageControl< osiris::IHtmlControl > >::onInitStylesheet(  );
        }
    }
    
    virtual void default_onInitStylesheet(  ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IXSLRenderer< osiris::IPageControl< osiris::IHtmlControl > >::onInitStylesheet( );
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

void register_IdeOMLEditor_class(){

    { //::osiris::IdeOMLEditor
        typedef ::boost::python::class_< IdeOMLEditor_wrapper, ::boost::python::bases< ::osiris::IXSLRenderer< osiris::IPageControl< osiris::IHtmlControl > > >, ::boost::noncopyable > IdeOMLEditor_exposer_t;
        IdeOMLEditor_exposer_t IdeOMLEditor_exposer = IdeOMLEditor_exposer_t( "IdeOMLEditor", ::boost::python::init< >() );
        ::boost::python::scope IdeOMLEditor_scope( IdeOMLEditor_exposer );
        { //::osiris::IdeOMLEditor::getExtended
        
            typedef boost::python::object ( *getExtended_function_type )( ::osiris::IdeOMLEditor const & );
            
            IdeOMLEditor_exposer.def( 
                "getExtended"
                , getExtended_function_type( &IdeOMLEditor_wrapper::getExtended ) );
        
        }
        { //::osiris::IdeOMLEditor::getRow
        
            typedef boost::python::object ( *getRow_function_type )( ::osiris::IdeOMLEditor const & );
            
            IdeOMLEditor_exposer.def( 
                "getRow"
                , getRow_function_type( &IdeOMLEditor_wrapper::getRow ) );
        
        }
        { //::osiris::IdeOMLEditor::getValue
        
            typedef boost::python::object ( *getValue_function_type )( ::osiris::IdeOMLEditor const & );
            
            IdeOMLEditor_exposer.def( 
                "getValue"
                , getValue_function_type( &IdeOMLEditor_wrapper::getValue ) );
        
        }
        { //::osiris::IdeOMLEditor::getTemplatePath
        
            typedef ::osiris::String ( ::osiris::IdeOMLEditor::*getTemplatePath_function_type )(  ) ;
            typedef ::osiris::String ( IdeOMLEditor_wrapper::*default_getTemplatePath_function_type )(  ) ;
            
            IdeOMLEditor_exposer.def( 
                "getTemplatePath"
                , getTemplatePath_function_type(&::osiris::IdeOMLEditor::getTemplatePath)
                , default_getTemplatePath_function_type(&IdeOMLEditor_wrapper::default_getTemplatePath) );
        
        }
        { //::osiris::IdeOMLEditor::onInit
        
            typedef void ( IdeOMLEditor_wrapper::*onInit_function_type )(  ) ;
            
            IdeOMLEditor_exposer.def( 
                "onInit"
                , onInit_function_type( &IdeOMLEditor_wrapper::default_onInit ) );
        
        }
        { //::osiris::IdeOMLEditor::onLoad
        
            typedef void ( IdeOMLEditor_wrapper::*onLoad_function_type )(  ) ;
            
            IdeOMLEditor_exposer.def( 
                "onLoad"
                , onLoad_function_type( &IdeOMLEditor_wrapper::default_onLoad ) );
        
        }
        { //::osiris::IdeOMLEditor::onPreRender
        
            typedef void ( IdeOMLEditor_wrapper::*onPreRender_function_type )(  ) ;
            
            IdeOMLEditor_exposer.def( 
                "onPreRender"
                , onPreRender_function_type( &IdeOMLEditor_wrapper::default_onPreRender ) );
        
        }
        { //::osiris::IdeOMLEditor::onLoadViewState
        
            typedef void ( IdeOMLEditor_wrapper::*onLoadViewState_function_type )( ::osiris::DataTree const & ) ;
            
            IdeOMLEditor_exposer.def( 
                "onLoadViewState"
                , onLoadViewState_function_type( &IdeOMLEditor_wrapper::default_onLoadViewState )
                , ( ::boost::python::arg("state") ) );
        
        }
        { //::osiris::IdeOMLEditor::onSaveViewState
        
            typedef void ( IdeOMLEditor_wrapper::*onSaveViewState_function_type )( ::osiris::DataTree & ) ;
            
            IdeOMLEditor_exposer.def( 
                "onSaveViewState"
                , onSaveViewState_function_type( &IdeOMLEditor_wrapper::default_onSaveViewState )
                , ( ::boost::python::arg("state") ) );
        
        }
        { //::osiris::IdeOMLEditor::setExtended
        
            typedef void ( *setExtended_function_type )( ::osiris::IdeOMLEditor &,bool );
            
            IdeOMLEditor_exposer.def( 
                "setExtended"
                , setExtended_function_type( &IdeOMLEditor_wrapper::setExtended )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("extended") ) );
        
        }
        { //::osiris::IdeOMLEditor::setRow
        
            typedef void ( *setRow_function_type )( ::osiris::IdeOMLEditor &,bool );
            
            IdeOMLEditor_exposer.def( 
                "setRow"
                , setRow_function_type( &IdeOMLEditor_wrapper::setRow )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("row") ) );
        
        }
        { //::osiris::IdeOMLEditor::setValue
        
            typedef void ( *setValue_function_type )( ::osiris::IdeOMLEditor &,::osiris::String const & );
            
            IdeOMLEditor_exposer.def( 
                "setValue"
                , setValue_function_type( &IdeOMLEditor_wrapper::setValue )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("value") ) );
        
        }
        { //::osiris::IHtmlControl::decodeEvent
        
            typedef bool ( IdeOMLEditor_wrapper::*decodeEvent_function_type )( ::osiris::String const &,::osiris::String &,::osiris::HtmlEvent & ) const;
            
            IdeOMLEditor_exposer.def( 
                "decodeEvent"
                , decodeEvent_function_type( &IdeOMLEditor_wrapper::decodeEvent )
                , ( ::boost::python::arg("command"), ::boost::python::arg("eventName"), ::boost::python::arg("e") ) );
        
        }
        { //::osiris::IHtmlControl::encodeEvent
        
            typedef ::osiris::String ( IdeOMLEditor_wrapper::*encodeEvent_function_type )( ::osiris::String const &,::osiris::HtmlEvent const * ) const;
            
            IdeOMLEditor_exposer.def( 
                "encodeEvent"
                , encodeEvent_function_type( &IdeOMLEditor_wrapper::encodeEvent )
                , ( ::boost::python::arg("eventName"), ::boost::python::arg("e")=(nullptr) ) );
        
        }
        { //::osiris::IHtmlControl::getSession
        
            typedef ::boost::shared_ptr< osiris::HttpSession > ( ::osiris::IHtmlControl::*getSession_function_type )(  ) const;
            typedef ::boost::shared_ptr< osiris::HttpSession > ( IdeOMLEditor_wrapper::*default_getSession_function_type )(  ) const;
            
            IdeOMLEditor_exposer.def( 
                "getSession"
                , getSession_function_type(&::osiris::IHtmlControl::getSession)
                , default_getSession_function_type(&IdeOMLEditor_wrapper::default_getSession) );
        
        }
        { //::osiris::IHtmlControl::onEvent
        
            typedef void ( IdeOMLEditor_wrapper::*onEvent_function_type )( ::osiris::String const &,::osiris::IEvent * ) ;
            
            IdeOMLEditor_exposer.def( 
                "onEvent"
                , onEvent_function_type( &IdeOMLEditor_wrapper::default_onEvent )
                , ( ::boost::python::arg("name"), ::boost::python::arg("e")=(nullptr) ) );
        
        }
        { //::osiris::IXSLRenderer< osiris::IPageControl< osiris::IHtmlControl > >::onInitStylesheet
        
            typedef ::osiris::IdeOMLEditor exported_class_t;
            typedef void ( IdeOMLEditor_wrapper::*onInitStylesheet_function_type )(  ) ;
            
            IdeOMLEditor_exposer.def( 
                "onInitStylesheet"
                , onInitStylesheet_function_type( &IdeOMLEditor_wrapper::default_onInitStylesheet ) );
        
        }
        { //::osiris::IHtmlControl::onRender
        
            typedef void ( IdeOMLEditor_wrapper::*onRender_function_type )( ::osiris::HtmlWriter & ) ;
            
            IdeOMLEditor_exposer.def( 
                "onRender"
                , onRender_function_type( &IdeOMLEditor_wrapper::default_onRender )
                , ( ::boost::python::arg("writer") ) );
        
        }
        { //::osiris::IHtmlControl::renderAttributes
        
            typedef void ( ::osiris::IHtmlControl::*renderAttributes_function_type )( ::osiris::HtmlWriter & ) ;
            typedef void ( IdeOMLEditor_wrapper::*default_renderAttributes_function_type )( ::osiris::HtmlWriter & ) ;
            
            IdeOMLEditor_exposer.def( 
                "renderAttributes"
                , renderAttributes_function_type(&::osiris::IHtmlControl::renderAttributes)
                , default_renderAttributes_function_type(&IdeOMLEditor_wrapper::default_renderAttributes)
                , ( ::boost::python::arg("writer") ) );
        
        }
        { //::osiris::IHtmlControl::renderChilds
        
            typedef void ( ::osiris::IHtmlControl::*renderChilds_function_type )( ::osiris::HtmlWriter & ) ;
            typedef void ( IdeOMLEditor_wrapper::*default_renderChilds_function_type )( ::osiris::HtmlWriter & ) ;
            
            IdeOMLEditor_exposer.def( 
                "renderChilds"
                , renderChilds_function_type(&::osiris::IHtmlControl::renderChilds)
                , default_renderChilds_function_type(&IdeOMLEditor_wrapper::default_renderChilds)
                , ( ::boost::python::arg("writer") ) );
        
        }
        { //::osiris::IHtmlControl::saveViewState
        
            typedef void ( IdeOMLEditor_wrapper::*saveViewState_function_type )( ::osiris::DataTree & ) ;
            
            IdeOMLEditor_exposer.def( 
                "saveViewState"
                , saveViewState_function_type( &IdeOMLEditor_wrapper::saveViewState )
                , ( ::boost::python::arg("states") ) );
        
        }
        { //property "extended"[fget=::osiris::IdeOMLEditor::getExtended, fset=::osiris::IdeOMLEditor::setExtended]
        
            typedef bool ( ::osiris::IdeOMLEditor::*fget )(  ) const;
            typedef void ( ::osiris::IdeOMLEditor::*fset )( bool ) ;
            
            IdeOMLEditor_exposer.add_property( 
                "extended"
                , fget( &::osiris::IdeOMLEditor::getExtended )
                , fset( &::osiris::IdeOMLEditor::setExtended )
                , "get\\set property, built on top of \"bool osiris::IdeOMLEditor::getExtended() const [member function]\" and \"void osiris::IdeOMLEditor::setExtended(bool extended) [member function]\"" );
        
        }
        { //property "row"[fget=::osiris::IdeOMLEditor::getRow, fset=::osiris::IdeOMLEditor::setRow]
        
            typedef bool ( ::osiris::IdeOMLEditor::*fget )(  ) const;
            typedef void ( ::osiris::IdeOMLEditor::*fset )( bool ) ;
            
            IdeOMLEditor_exposer.add_property( 
                "row"
                , fget( &::osiris::IdeOMLEditor::getRow )
                , fset( &::osiris::IdeOMLEditor::setRow )
                , "get\\set property, built on top of \"bool osiris::IdeOMLEditor::getRow() const [member function]\" and \"void osiris::IdeOMLEditor::setRow(bool row) [member function]\"" );
        
        }
        { //property "value"[fget=::osiris::IdeOMLEditor::getValue, fset=::osiris::IdeOMLEditor::setValue]
        
            typedef ::osiris::String const & ( ::osiris::IdeOMLEditor::*fget )(  ) const;
            typedef void ( ::osiris::IdeOMLEditor::*fset )( ::osiris::String const & ) ;
            
            IdeOMLEditor_exposer.add_property( 
                "value"
                , ::boost::python::make_function( 
                      fget( &::osiris::IdeOMLEditor::getValue )
                    , bp::return_value_policy< bp::copy_const_reference >() ) 
                , fset( &::osiris::IdeOMLEditor::setValue )
                , "get\\set property, built on top of \"osiris::String const & osiris::IdeOMLEditor::getValue() const [member function]\" and \"void osiris::IdeOMLEditor::setValue(osiris::String const & value) [member function]\"" );
        
        }
    }

}
