// $Id$

/**
 * @file Cookies.h
 *
 * A CIAO implementation of Cookie valuetype.
 *
 * @author Nanbor Wang <nanbor@cs.wustl.edu>
 */

#ifndef CIAO_COOKIES_H
#define CIAO_COOKIES_H
#include /**/ "ace/pre.h"

#include "CCM_BaseC.h"


#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "CIAO_Container_Export.h"
#include "CIAO_ValueC.h"
#include "ace/Active_Map_Manager.h"
#include "tao/PortableServer/PortableServer.h"
#include "CIAO_Events.h"

namespace CIAO
{
  /**
   * @class Map_Key_Cookie
   *
   * @brief A CIAO internal Cookie valuetype implementation.
   */
  class CIAO_CONTAINER_Export Map_Key_Cookie
    : public virtual OBV_CIAO::Cookie
  {
  public:
    /// Default constructor.
    Map_Key_Cookie ();

    /// Initialize a @c Cookie with an @c ACE_Active_Map_Manager_Key
    Map_Key_Cookie (const ACE_Active_Map_Manager_Key &key);

    virtual ::CORBA::OctetSeq * get_cookie (ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS);

    /// Initialize a @c Cookie with an @c ACE_Active_Map_Manager_Key
    /// This contructor make a copy of the Cookie.  Perhaps we can somehow
    /// avoid this?
    //Map_Key_Cookie (const ::OBV_Components::Cookie &ck);

    /// Destroy the @c Cookie
    ~Map_Key_Cookie (void);

    /// Insert the @c ACE_Active_Map_Manager_Key
    int insert (ACE_Active_Map_Manager_Key &key);

    /// Extract the @c ACE_Active_Map_Manager_Key
    static int extract (::Components::Cookie *c,
                        ACE_Active_Map_Manager_Key &key);

  protected:
  };

  class CIAO_CONTAINER_Export Map_Key_Cookie_init : public virtual ::Components::Cookie_init
  {
  public:
    Map_Key_Cookie_init (void);
    virtual ~Map_Key_Cookie_init (void);

    virtual CORBA::ValueBase *create_for_unmarshal (void);
  };


  // @@ George, can this be placed in a different file.
  /**
   * @class ObjectId_Cookie
   *
   * @brief A CIAO internal Cookie valuetype implementation.
   */
  class CIAO_CONTAINER_Export ObjectId_Cookie
    : public virtual OBV_CIAO::Cookie
  {

  public:

    /// Default constructor
    ObjectId_Cookie ();

    /// Initialize a @c Cookie with an object reference.
    ObjectId_Cookie (const PortableServer::ObjectId &oid);

    virtual ::CORBA::OctetSeq * get_cookie (ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS);

    ~ObjectId_Cookie ();

    int insert (const PortableServer::ObjectId &oid);

    static int extract (::Components::Cookie *ck,
                        PortableServer::ObjectId &oid);
  };

  class ObjectId_Cookie_init : public virtual ::Components::Cookie_init
  {


  public:
    ObjectId_Cookie_init (void);

    virtual ~ObjectId_Cookie_init (void);

    virtual CORBA::ValueBase * create_for_unmarshal (void);
  };


  /**
   * @class EventServiceInfo_Cookie
   *
   * @brief A CIAO internal Cookie valuetype implementation.
   */
  /*
  class CIAO_CONTAINER_Export EventServiceInfo_Cookie
    : public virtual OBV_CIAO::Cookie
  {

  public:

    /// Default constructor
    EventServiceInfo_Cookie ();

    /// Initialize a @c Cookie with an object reference.
    EventServiceInfo_Cookie (const CIAO::CIAO_EventServiceInfo &info);

    virtual ::CORBA::OctetSeq * get_cookie (ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS);

    ~EventServiceInfo_Cookie ();

    int insert (const CIAO::CIAO_EventServiceInfo &info);

    static int extract (::Components::Cookie *ck,
                        CIAO::CIAO_EventServiceInfo &info);
  };

  class EventServiceInfo_Cookie_init : public virtual ::Components::Cookie_init
  {

  public:
    EventServiceInfo_Cookie_init (void);

    virtual ~EventServiceInfo_Cookie_init (void);

    virtual CORBA::ValueBase * create_for_unmarshal (void);
  };
  */
}

#if defined (__ACE_INLINE__)
#include "Cookies.inl"
#endif /* !defined INLINE */

#include /**/ "ace/post.h"
#endif /* CIAO_COOKIES_H */
