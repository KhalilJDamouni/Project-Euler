#include <stdio.h>

int main(void)
{
    int temp1 = 1;
    int temp2;
    int i = 1;
    int sum = 0;
    for(int i = 1; i < 4000000; temp1 = temp2)
    {
        temp2 = i;
        i += temp1;
        if(i % 2 == 0)
            sum += i;
    }
    printf("Answer - %i\n", sum);
}
