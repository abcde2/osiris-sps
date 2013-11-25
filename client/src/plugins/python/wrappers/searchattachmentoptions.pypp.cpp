// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "searchattachmentoptions.h"
#include "idesearchparam.h"
#include "searchattachmentoptions.pypp.hpp"

namespace bp = boost::python;

struct SearchAttachmentOptions_wrapper : ::osiris::SearchAttachmentOptions, ::osiris::PythonWrapper< ::osiris::SearchAttachmentOptions > {

    SearchAttachmentOptions_wrapper(::osiris::SearchAttachmentOptions const & arg )
    : ::osiris::SearchAttachmentOptions( arg )
      , ::osiris::PythonWrapper< ::osiris::SearchAttachmentOptions >(){
        // copy constructor
        
    }

    SearchAttachmentOptions_wrapper( )
    : ::osiris::SearchAttachmentOptions( )
      , ::osiris::PythonWrapper< ::osiris::SearchAttachmentOptions >(){
        // null constructor
    
    }

    virtual ::boost::shared_ptr< osiris::IdeSearchParam > getControl(  ) {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_getControl = this->get_override( "getControl" ) )
            return func_getControl(  );
        else{
            __pystate.leave();
            return this->::osiris::ISearchOptions::getControl(  );
        }
    }
    
    ::boost::shared_ptr< osiris::IdeSearchParam > default_getControl(  ) {
        ::osiris::PythonThreadSaver __pythreadSaver;
        return ::osiris::ISearchOptions::getControl( );
    }

};

void register_SearchAttachmentOptions_class(){

    ::boost::python::class_< SearchAttachmentOptions_wrapper, ::boost::python::bases< ::osiris::ISearchOptions > >( "SearchAttachmentOptions", ::boost::python::init< >() )    
        .def( 
            "getControl"
            , (::boost::shared_ptr< osiris::IdeSearchParam > ( ::osiris::ISearchOptions::* )(  ) )(&::osiris::ISearchOptions::getControl)
            , (::boost::shared_ptr< osiris::IdeSearchParam > ( SearchAttachmentOptions_wrapper::* )(  ) )(&SearchAttachmentOptions_wrapper::default_getControl) );

}