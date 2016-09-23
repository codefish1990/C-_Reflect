/***************************************************************************
 * 
 * Copyright (c) 2016 Baidu.com, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
 
 
/**
 * @file register_object.h
 * @author baoruilin(com@baidu.com)
 * @date 2016/09/18 15:46:34
 * @brief 
 *  
 **/
#ifndef  __REGISTER_OBJECT_H_
#define  __REGISTER_OBJECT_H_

#include "object_factory.h"

class RegisterObject
{
public:
    RegisterObject(std::string class_name, function_ptr func)
    {
        std::cout << "register\t" << class_name << std::endl;
        ObjectFactory::get_instance()->register_object(class_name, func);
    }
};

#endif  //__REGISTER_OBJECT_H_

/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
