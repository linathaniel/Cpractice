#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>



int sum_one_to_hundred()
{
    int sum = 0;
    for(int i = 1; i <= 100; ++i)
    {
        sum += i;
    }
    return sum;
}

int main(int argc, char** argv)
{
    int month = 9; 
    int day = 26;
    printf("%d/%d\n", day, month);

    srand(time(NULL));
    int num = 0;
    /*
    int target = rand() % 100;
    while(true)
    {

        printf("input num:");
        scanf("%d", &num);
        if(num > target)
        {
            printf("greater\n");
        } else if (num < target)
        {
            printf("less\n");
        } else 
        {
            printf("equal\n");
            break;
        }
        
    }
    //*/
    printf("input num:");
    scanf("%d", &num);
    for(int target = rand() % 100; num != target; scanf("%d", &num))
    {
        if(num > target)
        {
            printf("greater\n");
        } else if (num < target)
        {
            printf("less\n");
        } else 
        {
            printf("equal\n");
            break;
        }
        printf("input num:");
    }
    // 1. change while to for
    // 2. write a function: add 1 to 100 
    printf("%d\n", sum_one_to_hundred());

    return 0;
}