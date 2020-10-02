#include "cpp-stl/unique_ptr.h"
#include <iostream>

int main() {
    stl::unique_ptr<int> ptr1;
    int* arr = new int[5];
    stl::unique_ptr<int> ptr2(arr);
}