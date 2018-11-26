#include <stdio.h>
#include <ctype.h>

void uppLowCh1();
void uppLowCh2();
void fileTest1();					// Based on Windows OS.
void fileTest2();
void fileTest3();
void fileTest4();
void fileTest5();
void fileTest6();
void fileTest7();
void buffTest();
void mkFile();
void randAccess();


void main()
{

	fileTest6();

}

void uppLowCh1()
{
	char c;

	printf("Type the string : ");
	while ((c = getchar()) != EOF)
	{
		if (c >= 'A' && c <= 'Z') printf("%c", c + ('a' - 'A'));
		else printf("%c", c - ('a' - 'A'));
	}

}

void uppLowCh2()
{
	char c;

	printf("Type the string : ");
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
		if (*sp == ' ') count++;
		sp++;
	}

	if (count && *s) count++;

	fclose(wfp);

	printf("Words : %d\n", count);

}

void fileTest3()
{
	char s[50];
	int count = 0;
	char tmp;
	FILE *rfp;
	rfp = fopen("c:/tmp/data1.txt", "r");

	fgets(s, 50, rfp);
	printf("Read from file : ");
	puts(s);

	fseek(rfp, 0, SEEK_SET);

	while (!feof(rfp))
	{
		tmp = fgetc(rfp);
		count++;
	}

	printf("%d\n", count);
	fclose(rfp);
}

void fileTest4()			// 문자수 count...
{
	char s[50];
	int count = 0;
	char tmp;
	FILE *rfp;
	rfp = fopen("c:/tmp/data1.txt", "r");

	fgets(s, 50, rfp);
	printf("Read from file : ");
	puts(s);

	fseek(rfp, 0, SEEK_SET);			// 처음 위치로 돌아가자...

	while (!feof(rfp))
	{
		tmp = fgetc(rfp);
		count++;
	}

	printf("%d\n", count);
	fclose(rfp);

}

void fileTest5()		// 문자수 count 2...
{

	char s[50];
	int count = 0;
	char tmp, find;
	FILE *rfp;
	rfp = fopen("c:/tmp/data1.txt", "r");

	fgets(s, 50, rfp);
	printf("Read from file : ");
	puts(s);

	fseek(rfp, 0, SEEK_SET);			// 처음 위치로 돌아가자...

	printf("What to find? ");
	scanf(" %c", &find);

	while (!feof(rfp))
	{
		tmp = fgetc(rfp);
		if (tmp == find) count++;
	}

	printf("%d\n", count);
	fclose(rfp);

}

void fileTest6()		// 실수 더하기
{

	FILE *rfp;
	FILE *wfp;
	float hap = 0;
	float in;
	int i;

	rfp = fopen("c:/tmp/inpt.txt", "r");
	wfp = fopen("c:/tmp/oupt.txt", "w");

	for (i = 0; i < 2; i++)
	{
		fscanf(rfp, "%f", &in);
		hap = hap + in;
	}
	
	fprintf(wfp, "sum : %f\n", hap);
	fclose(rfp);

}

void fileTest7()		// 복사하기
{

	char str[200];
	FILE *rfp;
	FILE *wfp;

	rfp = fopen("c:/tmp/data1.txt", "r");
	wfp = fopen("c:/tmp/data2.txt", "w");

	for (;;)
	{
		if (feof(rfp))break;
		fgets(str, 200, rfp);
		fputs(str, wfp);
	}

	fclose(rfp);
	fclose(wfp);

}

void buffTest()
{

	int i;
	int buffer[5] = { 10, 20, 30, 40, 50 };
	FILE *fp = NULL;

	fp = fopen("c:/tmp/binary.bin", "wb");
	if (!fp)
	{
		fprintf(stderr, "binary.bin 파일을 열수 없습니다.");
		return;
	}

	fwrite(buffer, sizeof(int), 5, fp);
	fclose(fp);
	for (i = 0; i<5; i++)
		buffer[i] = 0;
	fp = fopen("c:/tmp/binary.bin", "rb");
	if (fp == NULL){
		fprintf(stderr, "binary.bin 파일을 열 수 없습니다.");
		return 1;
	}

	fread(buffer, sizeof(int), 5, fp);
	for (i = 0; i<5; i++)
		printf("%d ", buffer[i]);
	fclose(fp);

	return;

}

void randAccess()
{
	FILE *fp;
	char buffer[100];

	fp = fopen("sample.txt", "w");
	fputs("ABCDEFGHIJKLMNOPQRSTUVWXYZ", fp);
	fclose(fp);

	fp = fopen("sample.txt", "r");

	fseek(fp, 3, SEEK_SET);
	printf("fseek(fp, 3, SEEK_SET) = %c \n", fgetc(fp));

	fseek(fp, -1, SEEK_END);
	printf("fseek(fp, -1, SEEK_END) = %c \n", fgetc(fp));

	fclose(fp);
	return 0;

}
