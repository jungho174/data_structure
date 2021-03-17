#include <stdio.h>

int main()

{
    char charType;
    int integerType;
    float floatType;
    double doubleType;

    printf("------   [조정호]  [2020039032]   ------\n");


    printf("Size of char: %ld byte\n",sizeof(charType)); // 변수 charType의 크기를 구해 출력
    printf("Size of int: %ld bytes\n",sizeof(integerType)); // 변수 integerType의 크기를 구해 출력
    printf("Size of float: %ld bytes\n",sizeof(floatType)); // " floatType "
    printf("Size of double: %ld bytes\n",sizeof(doubleType)); // " doubleType "
    printf("-----------------------------------------\n");
    printf("Size of char: %ld byte\n",sizeof(char)); // char 자료형의 크기를 출력
    printf("Size of int: %ld bytes\n",sizeof(int)); // int 자료형의 크기를 출력
    printf("Size of float: %ld bytes\n",sizeof(float)); // " float "
    printf("Size of double: %ld bytes\n",sizeof(double)); // " double "
    printf("-----------------------------------------\n");
    printf("Size of char*: %ld byte\n",sizeof(char*)); //포인터타입 크기 출력
    printf("Size of int*: %ld bytes\n",sizeof(int*)); // "
    printf("Size of float*: %ld bytes\n",sizeof(float*)); // "
    printf("Size of double*: %ld bytes\n",sizeof(double*)); // "

    return 0;
}