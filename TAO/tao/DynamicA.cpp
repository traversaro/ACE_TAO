// -*- C++ -*-
//
// $Id$

// ****  Code generated by the The ACE ORB (TAO) IDL Compiler ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
// and
//       Institute for Software Integrated Systems
//       Vanderbilt University
//       Nashville, TN
//       USA
//       http://www.isis.vanderbilt.edu/
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html

#include "DynamicC.h"
#include "tao/Null_RefCount_Policy.h"
#include "tao/TypeCode_Constants.h"
#include "tao/Alias_TypeCode.h"
#include "tao/Sequence_TypeCode.h"
#include "tao/String_TypeCode.h"
#include "tao/CDR.h"
#include "tao/Any.h"
#include "tao/Any_Dual_Impl_T.h"

// TAO_IDL - Generated from
// be/be_visitor_typecode/alias_typecode.cpp:31



// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_defn.cpp:743

namespace TAO
{
  namespace TypeCode
  {
    TAO::TypeCode::Sequence<TAO::Null_RefCount_Policy>
      Dynamic_ParameterList_0 (
        CORBA::tk_sequence,
        &Dynamic::_tc_Parameter,
        0U);
      
    ::CORBA::TypeCode_ptr const tc_Dynamic_ParameterList_0 =
      &Dynamic_ParameterList_0;
    
  }
}

static TAO::TypeCode::Alias<char const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_Dynamic_ParameterList (
    "IDL:omg.org/Dynamic/ParameterList:1.0",
    "ParameterList",
    &TAO::TypeCode::tc_Dynamic_ParameterList_0);
  
namespace Dynamic
{
  ::CORBA::TypeCode_ptr const _tc_ParameterList =
    &_tao_tc_Dynamic_ParameterList;
}



// TAO_IDL - Generated from
// be/be_visitor_typecode/alias_typecode.cpp:31



// TAO_IDL - Generated from
// be/be_visitor_typecode/alias_typecode.cpp:31



// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_defn.cpp:743

namespace TAO
{
  namespace TypeCode
  {
    TAO::TypeCode::Sequence<TAO::Null_RefCount_Policy>
      CORBA_sequence_0 (
        CORBA::tk_sequence,
        &CORBA::_tc_string,
        0U);
      
    ::CORBA::TypeCode_ptr const tc_CORBA_sequence_0 =
      &CORBA_sequence_0;
    
  }
}

static TAO::TypeCode::Alias<char const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_CORBA_StringSeq (
    "IDL:omg.org/CORBA/StringSeq:1.0",
    "StringSeq",
    &TAO::TypeCode::tc_CORBA_sequence_0);
  
namespace CORBA
{
  ::CORBA::TypeCode_ptr const _tc_StringSeq =
    &_tao_tc_CORBA_StringSeq;
}

static TAO::TypeCode::Alias<char const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_Dynamic_ContextList (
    "IDL:omg.org/Dynamic/ContextList:1.0",
    "ContextList",
    &CORBA::_tc_StringSeq);
  
namespace Dynamic
{
  ::CORBA::TypeCode_ptr const _tc_ContextList =
    &_tao_tc_Dynamic_ContextList;
}



// TAO_IDL - Generated from
// be/be_visitor_typecode/alias_typecode.cpp:31



// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_defn.cpp:743

namespace TAO
{
  namespace TypeCode
  {
    TAO::TypeCode::Sequence<TAO::Null_RefCount_Policy>
      Dynamic_ExceptionList_0 (
        CORBA::tk_sequence,
        &CORBA::_tc_TypeCode,
        0U);
      
    ::CORBA::TypeCode_ptr const tc_Dynamic_ExceptionList_0 =
      &Dynamic_ExceptionList_0;
    
  }
}

static TAO::TypeCode::Alias<char const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_Dynamic_ExceptionList (
    "IDL:omg.org/Dynamic/ExceptionList:1.0",
    "ExceptionList",
    &TAO::TypeCode::tc_Dynamic_ExceptionList_0);
  
namespace Dynamic
{
  ::CORBA::TypeCode_ptr const _tc_ExceptionList =
    &_tao_tc_Dynamic_ExceptionList;
}



// TAO_IDL - Generated from
// be/be_visitor_typecode/alias_typecode.cpp:31



// TAO_IDL - Generated from
// be/be_visitor_typecode/alias_typecode.cpp:31



// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_defn.cpp:743

namespace TAO
{
  namespace TypeCode
  {
    TAO::TypeCode::Sequence<TAO::Null_RefCount_Policy>
      CORBA_sequence_0 (
        CORBA::tk_sequence,
        &CORBA::_tc_string,
        0U);
      
    ::CORBA::TypeCode_ptr const tc_CORBA_sequence_0 =
      &CORBA_sequence_0;
    
  }
}

static TAO::TypeCode::Alias<char const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_CORBA_StringSeq (
    "IDL:omg.org/CORBA/StringSeq:1.0",
    "StringSeq",
    &TAO::TypeCode::tc_CORBA_sequence_0);
  
namespace CORBA
{
  ::CORBA::TypeCode_ptr const _tc_StringSeq =
    &_tao_tc_CORBA_StringSeq;
}

static TAO::TypeCode::Alias<char const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_Dynamic_RequestContext (
    "IDL:omg.org/Dynamic/RequestContext:1.0",
    "RequestContext",
    &CORBA::_tc_StringSeq);
  
namespace Dynamic
{
  ::CORBA::TypeCode_ptr const _tc_RequestContext =
    &_tao_tc_Dynamic_RequestContext;
}



// TAO_IDL - Generated from 
// be/be_visitor_sequence/any_op_cs.cpp:54

// Copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    const Dynamic::ParameterList &_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<Dynamic::ParameterList>::insert_copy (
      _tao_any,
      Dynamic::ParameterList::_tao_any_destructor,
      TAO::TypeCode::tc_Dynamic_ParameterList_0,
      _tao_elem
    );
}

// Non-copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    Dynamic::ParameterList *_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<Dynamic::ParameterList>::insert (
      _tao_any,
      Dynamic::ParameterList::_tao_any_destructor,
      TAO::TypeCode::tc_Dynamic_ParameterList_0,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    Dynamic::ParameterList *&_tao_elem
  )
{
  return _tao_any >>= const_cast<
      const Dynamic::ParameterList *&> (
      _tao_elem
    );
}

// Extraction to const pointer.
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    const Dynamic::ParameterList *&_tao_elem
  )
{
  return
    TAO::Any_Dual_Impl_T<Dynamic::ParameterList>::extract (
        _tao_any,
        Dynamic::ParameterList::_tao_any_destructor,
        TAO::TypeCode::tc_Dynamic_ParameterList_0,
        _tao_elem
      );
}

// TAO_IDL - Generated from 
// be/be_visitor_sequence/any_op_cs.cpp:54

// Copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    const Dynamic::ExceptionList &_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<Dynamic::ExceptionList>::insert_copy (
      _tao_any,
      Dynamic::ExceptionList::_tao_any_destructor,
      TAO::TypeCode::tc_Dynamic_ExceptionList_0,
      _tao_elem
    );
}

// Non-copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    Dynamic::ExceptionList *_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<Dynamic::ExceptionList>::insert (
      _tao_any,
      Dynamic::ExceptionList::_tao_any_destructor,
      TAO::TypeCode::tc_Dynamic_ExceptionList_0,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    Dynamic::ExceptionList *&_tao_elem
  )
{
  return _tao_any >>= const_cast<
      const Dynamic::ExceptionList *&> (
      _tao_elem
    );
}

// Extraction to const pointer.
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    const Dynamic::ExceptionList *&_tao_elem
  )
{
  return
    TAO::Any_Dual_Impl_T<Dynamic::ExceptionList>::extract (
        _tao_any,
        Dynamic::ExceptionList::_tao_any_destructor,
        TAO::TypeCode::tc_Dynamic_ExceptionList_0,
        _tao_elem
      );
}

#if defined (ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION)

  template class
    TAO::Any_Dual_Impl_T<
        Dynamic::ParameterList
      >;

  template class
    TAO::Any_Dual_Impl_T<
        Dynamic::ExceptionList
      >;

#elif defined (ACE_HAS_TEMPLATE_INSTANTIATION_PRAGMA)

# pragma instantiate \
    TAO::Any_Dual_Impl_T< \
        Dynamic::ParameterList \
      >

# pragma instantiate \
    TAO::Any_Dual_Impl_T< \
        Dynamic::ExceptionList \
      >

#endif /* !ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION */ 
