#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a;
    do
    {
        a = get_int("height: ");
    }
    while(a<1 && a>8);

    for(int i=0; i<a; i++)
    {
        for(int k=a-i; k>1; k--)
        {
            printf(" ");
        }
        for(int j=0; j<=i; j++)
        {
            printf("#");
        }
        printf("\t");
        for(int j=0; j<=i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
