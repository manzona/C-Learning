#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// * Chapter 11.1 ���ڿ��� �����ϴ� ���
#define MESSAGE "A symbolic string sting constant"
#define MAXLENGTH 81

int main()
{
	char words[MAXLENGTH] = "A string in an array";
	const char* pt1 = "A pointer to a string.";

	puts("Put() adds a newline at the at the end:");// put() add \n at the end
	puts(MESSAGE);
	puts(words);// Null character ���� ��� �ʱ�ȭ ���� �ʾƼ� �̴�, char word[21] removes this worning
	puts(pt1);
	words[3] = 'p';//ok
	puts(words);
	//pt1[8] = 'A' // Error

	char greeting[50] = "Hello, and ""How are""you""today!";
	// char greeting[50] = "Hello, and How are youtoday!"; //�� ����
	puts(greeting);

	printf("\"To be, or not to be\" Hamlet said.\n");

	printf("%s, %p, %c\n", "We", "are", *"excellent progrmers");

	
	const char m1[15] = "Love you!";
	for (int i = 0; i < 15; ++i)
		printf("%d ", (int)m1[i]);
	printf("\n");

	const char m2[15] = { 'L', 'o', 'v','e', ' ', 'y', 'o', 'u', '!', '\0' };//������ �迭�� �ʱ�ȭ, \0 �� �־��־�� �Ѵ�
	for (int i = 0; i < 15; ++i)
		printf("%d ", (int)m1[i]);
	printf("\n");

	const char m3[] = "Love you, too!";

	int n = 8;
	char cookies[1] = { 'A', };
	char cakes[2 + 5] = { 'A', };
	char pies[2 * sizeof(long double + 1)] = { 'A', };// �������� �ȴ�
	//char crumbs[n]; // VLA �� �������ִ� compiler�� ����


	char truth[10] = "Truths is ";
	if (truth == &truth[0]) puts("true!");
	if (*truth == 'T') puts("true!");
	if (*(truth + 1) == truth[1]) puts("true!");
	if (truth[1] == 'r') puts("true!");
	
	return 0;
}

 Chapter 11.2 �޸� ���̾ƿ��� ���ڿ�

void test_function()
{
	int j;
	printf("stack high \t%llu", (unsigned long long) & j);
}

int main()
{
	/* Arry versus Pointer*/
	const char* pt2 = " I am a string!.";
	const char* pt3 = " I am a string!.";
	const char* pt4 = " I am a string!!!!!!.";
	const char ar1[] = " I am a string!.";
	const char ar2[] = " I am a string!.";
	const char ar3[] = " I am a string!!.";

	printf("rodata low \t%llu %llu %llu %llu\n",
		(unsigned long long)pt2, (unsigned long long)pt3, (unsigned long long)pt4,
		(unsigned long long)"I am a string!.");
	printf("stack high \t%llu %llu %llu\n",
		(unsigned long long)ar1, (unsigned long long)ar2, (unsigned long long)ar3);

	return 0;
}

#define STRLEN 81

//char* custom_string_input(char* st, int n);

int main()
{
	/* Creating Space First*/

	//// char* name = "";// Error
	//char name[128];
	//int result = scanf("%s", name);


	/* gets, gets_s, puts �Լ�*/
	//char words[STRLEN] = "";
	//gets(words);
	//printf("START\n");
	//printf("%s", words);
	//puts(words); //�ڵ��ٹٲ� ����
	//puts("END.");

	/* fgets, fputs �Լ�*/

	char words[STRLEN] = "";
	fgets(words, STRLEN, stdin);// stdin ���� consol �Է��� �޴´�

	fputs(words, stdout);// \n�� ������� �ʴ´�
	fputs("END", stdout);

	return 0;
}