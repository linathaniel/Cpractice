#include <stdio.h>

void swap_number(int* ptr_a, int* ptr_b)
{
    int temp = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = temp;
} 

int main(int argc, char** argv)
{
    printf("10/04/2022\n");

    int num = 100;
    printf("address of num is %p\n", &num);

    int* ptr_num = &num;
    *ptr_num = 200;


    printf("ptr_num = %p \n", ptr_num);

    int* ptr_num2 = &num;
    *ptr_num2 = 300;


    printf("num = %d\n", num);


    int new_num = 4567;
    ptr_num2 = &new_num;
    *ptr_num2 = 7890;

    printf("num = %d newnum =  %d \n", num, new_num);


    int x = 12;
    int y = 34;

    swap_number(&x, &y);

    printf("x = %d y = %d\n", x, y);

    printf("sizeof int is %ld size of pointer is %ld\n", sizeof(x), sizeof(&x));


    return 0;
}