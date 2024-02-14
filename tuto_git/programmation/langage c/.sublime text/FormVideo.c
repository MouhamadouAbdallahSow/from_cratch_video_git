#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE * pfile = NULL ;
	pfile = fopen("fichier.txt" , "w") ;
	if (pfile !=NULL)
	{
		fputc('z',pfile) ;
		fputc('a',pfile) ;
		fputc('k',pfile) ;
		fputc('i',pfile) ;
		fputc('s',pfile) ;
		fputc('z',pfile) ;
	}
	fclose(pfile);
	return 0 ;
}