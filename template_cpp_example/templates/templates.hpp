//
//  templates.hpp
//  template_cpp_example
//
//  Created by Артём Семёнов on 11.08.2019.
//  Copyright © 2019 Артём Семёнов. All rights reserved.
//

#ifndef templates_hpp
#define templates_hpp

#include <iostream>

template <typename T>
void printArray(const T *array, const int count) {
    for (int i = 0; i < count; i++) {
        std::cout << array[i] << ", ";
    }
    std::cout << std::endl;
}


#endif /* templates_hpp */
