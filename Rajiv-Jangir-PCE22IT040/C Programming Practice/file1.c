#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
FILE *fp;
int i = 1;
char ch;
fp = fopen("a.txt", "r+");
if (fp == NULL)
{
	puts("\nFile can't be open");
	exit(1);
}
printf("%d. ", i);
i++;
do
{
	ch = fgetc(fp);
	if (ch == '.')
	{
		printf("%c", ch);
		if (fgetc(fp) == EOF)
			continue;

		printf("\n%d. ", i);

		i++;
		continue;
	}
	printf("%c", ch);
} while (ch != EOF);
fclose(fp);
_getch();
return 0;
}