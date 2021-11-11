#pragma once // prevents multiple definitions

#include <iostream> // print library

int add(int a, int b);
    
// Exercise 2: implements function 'mul', that multiplies two numbers
int mul(int a, int b);

int main(){
    int num1;
    int num2;
    
    std::cin >> num1;
    std::cin >> num2;
    add(num1, num2);
    mul(num1, num2);
}

// ===============
// implementations

int add(int a, int b)
{
   std::cout << a + b << std::endl;
   return 0; // TODO: fix
}

// Exercise 2: implements function 'mul', that multiplies two numbers
int mul(int a, int b)
{
   std::cout << a * b << std::endl;
   return 0; // TODO: fix
}
