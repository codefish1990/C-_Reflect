/***************************************************************************
 * 
 * Copyright (c) 2016 Baidu.com, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
 
 
/**
 * @file define.h
 * @author baoruilin(com@baidu.com)
 * @date 2016/09/18 16:47:39
 * @brief 
 *  
 **/

#ifndef  __DEFINE_H_
#define  __DEFINE_H_

#include "register_object.h"
#include "object_factory.h"

#define REGISTER(classname) \
    void* create_##classname() \
    { \
        return new classname; \
    } \
    __attribute__((constructor)) void register_##classname() { \
        ObjectFactory::get_instance()->register_object(#classname, create_##classname); \
    }

    // RegisterObject g_register(#classname, create_##classname)

#endif  //__DEFINE_H_

/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
