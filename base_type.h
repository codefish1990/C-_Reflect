/***************************************************************************
 * 
 * Copyright (c) 2016 Baidu.com, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
 
 
/**
 * @file base_type.h
 * @author baoruilin(com@baidu.com)
 * @date 2016/09/18 15:50:56
 * @brief 
 *  
 **/
#ifndef  __BASE_TYPE_H_
#define  __BASE_TYPE_H_

#include <iostream>
#include "define.h"


class BaseType
{
public:
    static void* get_object();

public:
    BaseType();
    
    virtual ~BaseType();

    virtual void print_type();
};

#endif  //__BASE_TYPE_H_

/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
