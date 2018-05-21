#include <stdio.h>
#include <string.h>
int main()
{
	int t, i, n,x;
	char word[10000];
	scanf ("%d", &t);
	for (i=1; i<=t; i++)
	{
		scanf ("%s", word);
		n=strlen(word);
		if (n<=10)
			printf ("%s\n", word);
		else
		{
			x=n-2;
			printf ("%c%d%c\n", word[0], x, word[n-1]);
		}
	}
	return 0;
}
