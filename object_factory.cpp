/***************************************************************************
 * 
 * Copyright (c) 2016 Baidu.com, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
 
 
/**
 * @file object_factory.cpp
 * @author baoruilin(com@baidu.com)
 * @date 2016/09/18 15:37:42
 * @brief 
 *  
 **/
#include "object_factory.h"

ObjectFactory* ObjectFactory::_s_instance = NULL;

ObjectFactory::ObjectFactory()
{
}

ObjectFactory* ObjectFactory::get_instance()
{
    // 没考虑线程安全
    if (_s_instance == NULL)
    {
        _s_instance = new ObjectFactory();
    }
    return _s_instance;
}

void ObjectFactory::register_object(std::string class_name, function_ptr func)
{
    _map.insert(std::pair<std::string, function_ptr>(class_name, func));
}

void* ObjectFactory::get_object(const std::string& class_name)
{
    std::map<std::string, function_ptr>::iterator it = _map.find(class_name);
    if (it == NULL)
    {
        return NULL;
    }
    else
    {
        return it->second();
    }
}

/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
