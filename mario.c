#include <stdio.h>

int main(void)
{
    int altura = 4;
    for (int h = 0; h < altura; h++)
    {
        int hash = h + 1;
        int dots = altura - hash;
        
        for (int i = 0; i < dots; i++)
        {
            printf(" ");
        
        }

        for (int i = 0; i < hash; i++)
        {
            printf("#");
       }
       printf("\n");
    }
}
