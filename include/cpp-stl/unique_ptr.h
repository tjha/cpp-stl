#ifndef UNIQUE_PTR
#define UNIQUE_PTR
#include <iostream>

namespace stl {

    template<class T>
    class unique_ptr {
        private:
            T* ptr;
        public:
            unique_ptr();
            ~unique_ptr();
            unique_ptr(T* ptr_in);
            unique_ptr(const unique_ptr<T> &other) = delete; // disable copy constructor
            unique_ptr<T>& operator=(const unique_ptr<T> &other) = delete; // disable copy assignment operator
    };

    // Default Constructor
    template<class T>
    unique_ptr<T>::unique_ptr() {
        ptr = new T;
    }

    // Defaut Destructor
    template<class T>
    unique_ptr<T>::~unique_ptr() {
        delete ptr;
    }

    // Parameterized Constructor
    template<class T>
    unique_ptr<T>::unique_ptr(T* ptr_in) {
        ptr = ptr_in;
    }
}

#endif