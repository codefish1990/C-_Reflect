/***************************************************************************
 * 
 * Copyright (c) 2016 Baidu.com, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
 
 
/**
 * @file base_type.cpp
 * @author baoruilin(com@baidu.com)
 * @date 2016/09/18 15:52:39
 * @brief 
 *  
 **/
#include <stdio.h>
#include "base_type.h"

BaseType::BaseType()
{
}

BaseType::~BaseType()
{
}

void* BaseType::get_object()
{
    return new BaseType();
}

void BaseType::print_type()
{
    std::cout << "BaseType" << std::endl;
}

// RegisterObject register_object("BaseType", BaseType::get_object);
REGISTER(BaseType);

/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
