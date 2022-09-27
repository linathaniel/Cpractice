#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>


int main(int argc, char** argv)
{
    int month = 9; 
    int day = 26;
    printf("%d/%d\n", day, month);

    srand(time(NULL));
    int target = rand() % 100;
    int num = 0;
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
    return 0;
}