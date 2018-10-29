#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(void)
{
    int answer;
    bool bPrime;
    for(int i = 3; i < sqrt(600851475143); i +=2)
    {
        bPrime = true;
        for(int d = 3; d < sqrt(i) + 1; d += 2)
        {
            if(i % d == 0)
            {
                bPrime = false;
                break;
            }
            
        }
        if(bPrime && 600851475143 % i == 0)
            answer = i;
    }
    printf("Answer - %i\n", answer);
}