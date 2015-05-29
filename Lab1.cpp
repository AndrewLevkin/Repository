#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <conio.h>
#include <stdlib.h>
//#include <string.h>


int main()
{
	int i=0, n, j;
	unsigned char *p;
	scanf("%d", &n);
	p = (unsigned char *)malloc(n*sizeof(unsigned char));
	for (i = 0; i<n; i++)
	{
		fflush(stdin);
		scanf("%d", &p[i]);
	}
	for (i = 0; i < n - 1; i++) 
	{
		for (j = 0; j < n - i - 1; j++) 
		{
			if (p[j] > p[j + 1]) 
			{
				int tmp = p[j]; p[j] = p[j + 1]; p[j + 1] = tmp;
			}
		}
	}
	for (i = 0; i<n; i++)
	{
		printf("%d  ", p[i]);
	}

system("PAUSE");
return 0;
}
