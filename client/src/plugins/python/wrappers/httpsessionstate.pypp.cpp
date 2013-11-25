// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "httpsessionstate.h"
#include "httpsessionstate.pypp.hpp"

namespace bp = boost::python;

static boost::python::object getID_5dc1057c75205f3cbc3f157f9abad4da( ::osiris::HttpSessionState const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::String const & result = inst.getID();
    __pythreadSaver.restore();
    typedef bp::return_value_policy< bp::copy_const_reference > call_policies_t;
    return boost::python::object( pyplusplus::call_policies::make_object< call_policies_t, ::osiris::String const & >( result ) );
}

static void set_c120eb09a59cdbf974db842316b7d4df( ::osiris::HttpSessionState & inst, ::osiris::String const & key, ::osiris::String const & value ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    inst.set(key, value);
    __pythreadSaver.restore();
}

static boost::python::object getDuration_4661496e7e4d829b0c8ba82476446320( ::osiris::HttpSessionState const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::TimeDuration const & result = inst.getDuration();
    __pythreadSaver.restore();
    typedef bp::return_value_policy< bp::copy_const_reference > call_policies_t;
    return boost::python::object( pyplusplus::call_policies::make_object< call_policies_t, ::osiris::TimeDuration const & >( result ) );
}

static boost::python::object isElapsed_57b717198ea94f7e6778fa4edbf45781( ::osiris::HttpSessionState const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    bool result = inst.isElapsed();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object getToken_0696db03633d9ed3ab0a6a8e024be1e4( ::osiris::HttpSessionState const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::std::string result = inst.getToken();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static void validate_90e425369d499f7a60c6449eb29558d2( ::osiris::HttpSessionState & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    inst.validate();
    __pythreadSaver.restore();
}

static boost::python::object createToken_e8d1b098fadd2892180523322fe511b4( ::osiris::HttpSessionState & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::std::string result = inst.createToken();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object get_9ae68eea736f7a6c6e8efa8fdc3681cd( ::osiris::HttpSessionState const & inst, ::osiris::String const & key ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::String const & result = inst.get(key);
    __pythreadSaver.restore();
    typedef bp::return_value_policy< bp::copy_const_reference > call_policies_t;
    return boost::python::object( pyplusplus::call_policies::make_object< call_policies_t, ::osiris::String const & >( result ) );
}

static boost::python::object hasToken_0ff8ee7bc8db944b9d683a894e02bc7a( ::osiris::HttpSessionState const & inst, ::std::string const token ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    bool result = inst.hasToken(token);
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static void setDuration_924898e4ef76a6f9b34177c43f95efdf( ::osiris::HttpSessionState & inst, ::osiris::TimeDuration const & duration ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    inst.setDuration(duration);
    __pythreadSaver.restore();
}

void register_HttpSessionState_class(){

    { //::osiris::HttpSessionState
        typedef ::boost::python::class_< ::osiris::HttpSessionState, ::boost::noncopyable > HttpSessionState_exposer_t;
        HttpSessionState_exposer_t HttpSessionState_exposer = HttpSessionState_exposer_t( "HttpSessionState", ::boost::python::init< ::osiris::String const &, ::osiris::TimeDuration const & >(( ::boost::python::arg("id"), ::boost::python::arg("duration") )) );
        ::boost::python::scope HttpSessionState_scope( HttpSessionState_exposer );
        { //::osiris::HttpSessionState::getID
        
            typedef boost::python::object ( *getID_function_type )( ::osiris::HttpSessionState const & );
            
            HttpSessionState_exposer.def( 
                "getID"
                , getID_function_type( &getID_5dc1057c75205f3cbc3f157f9abad4da ) );
        
        }
        { //::osiris::HttpSessionState::set
        
            typedef void ( *set_function_type )( ::osiris::HttpSessionState &,::osiris::String const &,::osiris::String const & );
            
            HttpSessionState_exposer.def( 
                "set"
                , set_function_type( &set_c120eb09a59cdbf974db842316b7d4df )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("key"), ::boost::python::arg("value") ) );
        
        }
        { //::osiris::HttpSessionState::getDuration
        
            typedef boost::python::object ( *getDuration_function_type )( ::osiris::HttpSessionState const & );
            
            HttpSessionState_exposer.def( 
                "getDuration"
                , getDuration_function_type( &getDuration_4661496e7e4d829b0c8ba82476446320 ) );
        
        }
        { //::osiris::HttpSessionState::isElapsed
        
            typedef boost::python::object ( *isElapsed_function_type )( ::osiris::HttpSessionState const & );
            
            HttpSessionState_exposer.def( 
                "isElapsed"
                , isElapsed_function_type( &isElapsed_57b717198ea94f7e6778fa4edbf45781 ) );
        
        }
        { //::osiris::HttpSessionState::getToken
        
            typedef boost::python::object ( *getToken_function_type )( ::osiris::HttpSessionState const & );
            
            HttpSessionState_exposer.def( 
                "getToken"
                , getToken_function_type( &getToken_0696db03633d9ed3ab0a6a8e024be1e4 ) );
        
        }
        { //::osiris::HttpSessionState::validate
        
            typedef void ( *validate_function_type )( ::osiris::HttpSessionState & );
            
            HttpSessionState_exposer.def( 
                "validate"
                , validate_function_type( &validate_90e425369d499f7a60c6449eb29558d2 ) );
        
        }
        { //::osiris::HttpSessionState::createToken
        
            typedef boost::python::object ( *createToken_function_type )( ::osiris::HttpSessionState & );
            
            HttpSessionState_exposer.def( 
                "createToken"
                , createToken_function_type( &createToken_e8d1b098fadd2892180523322fe511b4 ) );
        
        }
        { //::osiris::HttpSessionState::get
        
            typedef boost::python::object ( *get_function_type )( ::osiris::HttpSessionState const &,::osiris::String const & );
            
            HttpSessionState_exposer.def( 
                "get"
                , get_function_type( &get_9ae68eea736f7a6c6e8efa8fdc3681cd )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("key") ) );
        
        }
        { //::osiris::HttpSessionState::hasToken
        
            typedef boost::python::object ( *hasToken_function_type )( ::osiris::HttpSessionState const &,::std::string const );
            
            HttpSessionState_exposer.def( 
                "hasToken"
                , hasToken_function_type( &hasToken_0ff8ee7bc8db944b9d683a894e02bc7a )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("token") ) );
        
        }
        { //::osiris::HttpSessionState::setDuration
        
            typedef void ( *setDuration_function_type )( ::osiris::HttpSessionState &,::osiris::TimeDuration const & );
            
            HttpSessionState_exposer.def( 
                "setDuration"
                , setDuration_function_type( &setDuration_924898e4ef76a6f9b34177c43f95efdf )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("duration") ) );
        
        }
        { //property "duration"[fget=::osiris::HttpSessionState::getDuration, fset=::osiris::HttpSessionState::setDuration]
        
            typedef ::osiris::TimeDuration const & ( ::osiris::HttpSessionState::*fget )(  ) const;
            typedef void ( ::osiris::HttpSessionState::*fset )( ::osiris::TimeDuration const & ) ;
            
            HttpSessionState_exposer.add_property( 
                "duration"
                , ::boost::python::make_function( 
                      fget( &::osiris::HttpSessionState::getDuration )
                    , bp::return_value_policy< bp::copy_const_reference >() ) 
                , fset( &::osiris::HttpSessionState::setDuration )
                , "get\\set property, built on top of \"osiris::TimeDuration const & osiris::HttpSessionState::getDuration() const [member function]\" and \"void osiris::HttpSessionState::setDuration(osiris::TimeDuration const & duration) [member function]\"" );
        
        }
        { //property "id"[fget=::osiris::HttpSessionState::getID]
        
            typedef ::osiris::String const & ( ::osiris::HttpSessionState::*fget )(  ) const;
            
            HttpSessionState_exposer.add_property( 
                "id"
                , ::boost::python::make_function( 
                      fget( &::osiris::HttpSessionState::getID )
                    , bp::return_value_policy< bp::copy_const_reference >() ) 
                , "get property, built on top of \"osiris::String const & osiris::HttpSessionState::getID() const [member function]\"" );
        
        }
        { //property "token"[fget=::osiris::HttpSessionState::getToken]
        
            typedef ::std::string ( ::osiris::HttpSessionState::*fget )(  ) const;
            
            HttpSessionState_exposer.add_property( 
                "token"
                , fget( &::osiris::HttpSessionState::getToken )
                , "get property, built on top of \"std::string osiris::HttpSessionState::getToken() const [member function]\"" );
        
        }
        ::boost::python::register_ptr_to_python< boost::shared_ptr< ::osiris::HttpSessionState > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::HttpSessionState >, boost::shared_ptr< ::osiris::Object > >();
    }

}