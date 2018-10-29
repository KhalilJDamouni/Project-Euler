#include <stdio.h>

int main(void)
{
    for(int i = 20; ; i += 20)
    {
        for(int d = 3; d < 21; ++d)
        {
            if(i % d != 0)
                break;

            if(d == 20)
            {
                printf("Answer - %i\n", i);
                return 0;
            }
        }
    }
}