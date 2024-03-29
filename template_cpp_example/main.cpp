//
//  main.cpp
//  template_cpp_example
//
//  Created by Артём Семёнов on 11.08.2019.
//  Copyright © 2019 Артём Семёнов. All rights reserved.
//

#include <iostream>
#include "MyTemplats.hpp"

int main(int argc, const char * argv[]) {
    const int iSize = 10;
    int intArray[iSize] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::cout << "Массив интов:\n";
    printArray(intArray, iSize);
    const int dSise = 4;
    double doubleArray[dSise] = {1.5, 2.6, 3.7, 4.8};
    std::cout << "Массив даблов:\n";
    printArray(doubleArray, dSise);
    stack<int> st(5);
    st.push(0);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.pop();
    st.printStack();
    return 0;
}
