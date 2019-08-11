//
//  MyTemplats.hpp
//  template_cpp_example
//
//  Created by Артём Семёнов on 11.08.2019.
//  Copyright © 2019 Артём Семёнов. All rights reserved.
//

#ifndef MyTemplats_hpp
#define MyTemplats_hpp


#include <iostream>

template <typename T>
void printArray(const T *array, const int count) {
    for (int i = 0; i < count; i++) {
        std::cout << array[i] << ", ";
    }
    std::cout << std::endl;
}

template <typename T>
class stack {
    T *stackPtr; // ссылка на объекты в памяти
    int count; // размер стека
    int top; // вершина стека

public:
    stack(int s = 10); // по умолчанию стек пуст
    bool push(const T);
    bool pop(); // взять элемент из стека
    void  printStack(); // вывести стек
    ~stack(); // диструктор
};

#endif /* MyTemplats_hpp */

template <typename T>
stack<T>::stack(int s) {
    count = s >= 0 ? s: 10;
    stackPtr = new T[count];
    top = -1;
}

template <typename T>
bool stack<T>::push(const T item) {
    if (top == (count - 1)) return false;
    top++;
    stackPtr[top] = item;
    return true;
}

template <typename T>
bool stack<T>::pop() {
    if (top == -1) return false;
    stackPtr[top] = 0;
    top--;
    return true;
}

template <typename T>
void stack<T>::printStack() {
    for (int i = 0; i <= top; i++) {
        std::cout << stackPtr[i] << ", ";
    }
    std::cout << std::endl;
}

template <typename T>
stack<T>::~stack() {
    delete [] stackPtr;
}
