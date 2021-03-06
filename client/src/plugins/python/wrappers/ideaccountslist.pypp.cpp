// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/list.hpp"
#include "_shared_ptr_less__osiris_scope_ideaccount__greater___value_traits.pypp.hpp"
#include "ideaccountslist.pypp.hpp"

namespace bp = boost::python;

void register_IdeAccountsList_class(){

    { //::std::list<boost::shared_ptr<osiris::IdeAccount>, osiris::StdAllocator<boost::shared_ptr<osiris::IdeAccount>, osiris::SysAllocator<boost::shared_ptr<osiris::IdeAccount> > > >
        typedef ::boost::python::class_< ::std::list<boost::shared_ptr<osiris::IdeAccount>, osiris::StdAllocator<boost::shared_ptr<osiris::IdeAccount>, osiris::SysAllocator<boost::shared_ptr<osiris::IdeAccount> > > > > IdeAccountsList_exposer_t;
        IdeAccountsList_exposer_t IdeAccountsList_exposer = IdeAccountsList_exposer_t( "IdeAccountsList" );
        ::boost::python::scope IdeAccountsList_scope( IdeAccountsList_exposer );
        IdeAccountsList_exposer.def( ::boost::python::indexing::list_suite< ::std::list<boost::shared_ptr<osiris::IdeAccount>, osiris::StdAllocator<boost::shared_ptr<osiris::IdeAccount>, osiris::SysAllocator<boost::shared_ptr<osiris::IdeAccount> > > > >() );
    }

}
