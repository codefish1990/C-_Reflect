/***************************************************************************
 * 
 * Copyright (c) 2016 Baidu.com, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
 
 
/**
 * @file ObjectFactory.h
 * @author baoruilin(com@baidu.com)
 * @date 2016/09/18 15:31:06
 * @brief 
 *  
 **/
#ifndef  __OBJECTFACTORY_H_
#define  __OBJECTFACTORY_H_

#include <iostream>
#include <map>

typedef void* (*function_ptr)();

class ObjectFactory
{
private:
    ObjectFactory();

public:
    static ObjectFactory* get_instance();

    void register_object(std::string class_name, function_ptr func);

    void* get_object(const std::string& class_name);

private:
    static ObjectFactory* _s_instance;
    std::map<std::string, function_ptr> _map;
};

#endif  //__OBJECTFACTORY_H_

/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
