#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// * Chapter 11.1 문자열을 정의하는 방법
#define MESSAGE "A symbolic string sting constant"
#define MAXLENGTH 81

int main()
{
	char words[MAXLENGTH] = "A string in an array";
	const char* pt1 = "A pointer to a string.";

	puts("Put() adds a newline at the at the end:");// put() add \n at the end
	puts(MESSAGE);
	puts(words);// Null character 까지 모두 초기화 하지 않아서 이다, char word[21] removes this worning
	puts(pt1);
	words[3] = 'p';//ok
	puts(words);
	//pt1[8] = 'A' // Error

	char greeting[50] = "Hello, and ""How are""you""today!";
	// char greeting[50] = "Hello, and How are youtoday!"; //와 같다
	puts(greeting);

	printf("\"To be, or not to be\" Hamlet said.\n");

	printf("%s, %p, %c\n", "We", "are", *"excellent progrmers");

	
	const char m1[15] = "Love you!";
	for (int i = 0; i < 15; ++i)
		printf("%d ", (int)m1[i]);
	printf("\n");

	const char m2[15] = { 'L', 'o', 'v','e', ' ', 'y', 'o', 'u', '!', '\0' };//문자의 배열로 초기화, \0 꼭 넣어주어야 한다
	for (int i = 0; i < 15; ++i)
		printf("%d ", (int)m1[i]);
	printf("\n");

	const char m3[] = "Love you, too!";

	int n = 8;
	char cookies[1] = { 'A', };
	char cakes[2 + 5] = { 'A', };
	char pies[2 * sizeof(long double + 1)] = { 'A', };// 정수형만 된다
	//char crumbs[n]; // VLA 를 지원해주는 compiler는 가능


	char truth[10] = "Truths is ";
	if (truth == &truth[0]) puts("true!");
	if (*truth == 'T') puts("true!");
	if (*(truth + 1) == truth[1]) puts("true!");
	if (truth[1] == 'r') puts("true!");
	
	return 0;
}

 Chapter 11.2 메모리 레이아웃과 문자열

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


	/* gets, gets_s, puts 함수*/
	//char words[STRLEN] = "";
	//gets(words);
	//printf("START\n");
	//printf("%s", words);
	//puts(words); //자동줄바꿈 가능
	//puts("END.");

	/* fgets, fputs 함수*/

	char words[STRLEN] = "";
	fgets(words, STRLEN, stdin);// stdin 으로 consol 입력을 받는다

	fputs(words, stdout);// \n을 출력하지 않는다
	fputs("END", stdout);

	return 0;
}