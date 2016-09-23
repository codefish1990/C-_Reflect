/***************************************************************************
 * 
 * Copyright (c) 2016 Baidu.com, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
 
 
/**
 * @file main.cpp
 * @author baoruilin(com@baidu.com)
 * @date 2016/09/18 15:56:26
 * @brief 
 *  
 **/
#include <iostream>
#include "base_type.h"
#include "object_factory.h"

int main()
{
    std::string type_name = "BaseType";
    std::cout << "in main" << std::endl;
    
    ObjectFactory* factory = ObjectFactory::get_instance();
    BaseType* type = (BaseType*)factory->get_object(type_name);
    type->print_type();

    type_name = "IntType";
    type = (BaseType*)factory->get_object(type_name);
    type->print_type();
    return 0;
}

/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
