#pragma once // prevents multiple definitions

#include <iostream> // print library

int add(int a, int b);
    
// Exercise 2: implements function 'mul', that multiplies two numbers
int mul(int a, int b);

int main(){
    int num1;
    int num2;
  
    add(num1, num2);
    mul(num1, num2);
}

// ===============
// implementations

int add(int a, int b)
{
 
   return a + b; // TODO: fix
}

// Exercise 2: implements function 'mul', that multiplies two numbers
int mul(int a, int b)
{
   
   return a * b; // TODO: fix
}
