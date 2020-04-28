#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// * Chapter 9_6 재귀호출
//void my_function(int);
//
//int main()
//{
//	my_function(1);
//
//	return 0;
//
//}
//
//void my_function(int n)
//{
//	printf("Level %d, adress of variable n=%p\n", n, &n);
//
//	if (n < 4)
//		my_function(n + 1);
//
//	printf("Level %d, adress of variable n=%p\n", n, &n);
//}


// * Chapter 9_8 Factorial 예제

//long loop_factorial(int n);
//long recursive_factorial(int n);
//
//int main()
//{
//	int num = 5;
//
//	printf("%d\n", loop_factorial(num));
//	printf("%d\n", recursive_factorial(num));
//
//	return 0;
//}
//
//long loop_factorial(int n)
//{
//	long ans;
//
//	for (ans = 1; n >= 1; n--)
//		ans = ans * n;
//	
//	return ans;
//}
//
//long recursive_factorial(int n)
//{
//	if (n > 0)
//	{
//		return n * recursive_factorial(n - 1);
//	}
//	else
//		return 1;
//}

// * Chapter 9_9 이진수 변환예제

//void print_binary(unsigned long num);
//void print_binary_loop(unsigned long num);
//
//int main()
//{
//	unsigned long num = 10;
//
//	print_binary_loop(num);
//	print_binary(num);
//
//	printf("\n");
//
//	return 0;
//}
//
//void print_binary_loop(unsigned long num)
//{
//	while (1)
//	{
//		int quotient = num / 2;
//		int remainder = num % 2;
//
//		printf("%d", remainder);
//
//		num = quotient;
//
//		if (num == 0)
//			break;
//	}
//
//	printf("\n");
//}
//
//void print_binary(unsigned long num)
//{
//	int remainder = num % 2;
//
//	if (num >= 2)
//		print_binary(num / 2);
//
//	printf("%d", remainder); // 출력되는 부분이 Recursion 다음에 왔으므로 Stack에 쌓였던 역순으로 프린트
//		
//}

// * Chapter 9_10 Fibonacci

int fibonacci(int number);

int main()
{
	for (int count = 1; count < 13; ++count)
	{
		printf("%d ", fibonacci(count));
	}
	return 0;
}

int fibonacci(int number)
{
	if (number > 2)
		return fibonacci(number - 1) + fibonacci(number - 2);
	else
		return 1;
}