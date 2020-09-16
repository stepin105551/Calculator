#include "Calculator_header.h"



int add(int num1, int num2)
{
    return (num1+num2);

}

int sub(int num1, int num2)
{
    return (num1-num2);

}
 int *calculate(int arr[])
 {
     int (* fptr[])(int, int) = {add, sub};

     result_arr[0] = fptr[0](arr[0], arr[1]);
     result_arr[1] = fptr[1](arr[0], arr[1]);

     return result_arr;
 }
