#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

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