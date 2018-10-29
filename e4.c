#include <stdio.h>

int main(void)
{
    int largest = 0;
    for(int i = 999; i > 99; --i)
    {
        for(int d = 999; d > 99; --d)
        {
            int backwards = 0;
            for(int temp = i * d; temp > 0; temp /= 10)
            {
                backwards *= 10;
                backwards += (temp % 10);
            }
            if(backwards == i * d && i * d > largest)          
                largest = i * d;
        }
    }
    printf("Answer - %i\n", largest);
}