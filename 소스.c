/*
#include <stdio.h>

int main()
{
	int ch1, ch2;
	ch1 = getchar();
	ch2 = fgetc(stdin);
	
	putchar(ch1);
	fputc(ch2, stdout);
	return 0;
}
*/
/*
#include <stdio.h>

int main()
{
	int ch;
	
	while (1)
	{
		ch = getchar();
		if (ch == EOF)
			break;
		putchar(ch);
	}
	return 0;
}
*/
/*
#include <stdio.h>

int index(chi)
{
	int diff = 'a' - 'A';
	if (chi >= 'A' && chi <= 'Z')
		return chi + diff;
	else if (chi >= 'a' && chi <= 'z')
		return chi - diff;
	else return -1;
}

int main()
{
	int ch;
	ch = getchar();
	ch = index(ch);
	if (ch == -1)
	{
		puts("error! not part of the alphabet!");
		return -1;
	}
	putchar(ch);
	return 0;
}
*/
/*
#include <stdio.h>

int main()
{
	char* str = "Simple String";
	printf("1. puts test ------ \n");
	puts(str);
	puts("So Simple String");

	printf("2. fputs test ----- \n");
	fputs(str, stdout); printf("\n");
	fputs("So Simple String", stdout); printf("\n");
	
	printf("3. end of main ---- \n");
	return 0;
}
*/

#include <stdio.h>

int main()
{
	char str[7];
	int i;

	for (i = 0; i < 3; i++)
	{
		fgets(str, sizeof(str), stdin);
		printf("Read %d: %s \n", i + 1, str);
	}
	return 0;
}
