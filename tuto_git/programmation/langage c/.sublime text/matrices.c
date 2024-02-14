#include <stdio.h>
#include <stdlib.h>
#define L 3 //nombre de lignes
#define C 2 //nombre de colonnes
short tab[L][C] = {{1, 2}, {14, 15}, {100, 200}};
int main()
	{
		int i, j;
		for (i = 0 ; i < L; i++) 
		{
			for (j = 0; j < C; j++)
			printf("tab[%d][%d]=%d\n",i,j,tab[i][j]);
		}
	return 0;

	}