#include <stdio.h>
#include <ctype.h>

void uppLowCh1();
void uppLowCh2();
void fileTest1();
void fileTest2();
void mkFile();


void main()
{

	fileTest2();

}

void uppLowCh1()
{
	char c;

	printf("문자열 입력 : ");
	while ((c = getchar()) != EOF)
	{
		if (c >= 'A' && c <= 'Z') printf("%c", c + ('a' - 'A'));
		else printf("%c", c - ('a' - 'A'));
	}

}

void uppLowCh2()
{
	char c;

	printf("문자열 입력 : ");
	while ((c = getchar()) != EOF)
	{
		if (isupper(c)) printf("%c", tolower(c));
		else if (islower(c)) printf("%c", toupper(c));
		else printf("\n");
	}

}

void mkFile()
{

	char s[50];
	FILE *wfp;

	wfp = fopen("c:/tmp/sample.txt", "w");

	printf("Type the string : ");
	gets(s);

	fputs(s, wfp);
	fclose(wfp);

}

void fileTest1()
{

	char s[20];
	FILE *wfp;

	wfp = fopen("c:/tmp/data1.txt", "r");

	fgets(s, 20, wfp);

	printf("Read from file : ");
	puts(s);

	fclose(wfp);

}

void fileTest2()
{
	char s[50];
	char *sp = s;
	int count = 0;
	FILE *wfp;

	wfp = fopen("c:/tmp/data1.txt", "r");

	fgets(s, 50, wfp);

	printf("Read from file : ");
	puts(s);

	while (*sp)
	{
		if (*sp == ' ' || *sp == NULL) count++;
		sp++;
	}

	if (count && *s) count++;

	fclose(wfp);

	printf("Words : %d\n", count);

}
