#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int tab[4];
    tab [0]=10;
    tab [1]=23;
    tab [2]=505;
    tab [3]=8;
    for (int i = 0 ; i <4 ;i++)
    {
        printf("%d\n",tab[i]);
    }
    return 0;
}