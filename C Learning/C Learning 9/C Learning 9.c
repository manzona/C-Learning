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

//int fibonacci(int number);
//
//int main()
//{
//	for (int count = 1; count < 13; ++count)
//	{
//		printf("%d ", fibonacci(count));
//	}
//	return 0;
//}
//
//int fibonacci(int number)
//{
//	if (number > 2)
//		return fibonacci(number - 1) + fibonacci(number - 2);
//	else
//		return 1;
//}

// * Chapter 9_13 포인터의 기본 사용법

//int main()
//{
	/*int a, b;

	a = 123;
	int *a_ptr;
	a_ptr = &a;
	printf("%d %d %p\n", a, *a_ptr, a_ptr);


	*a_ptr = 456;
	printf("%d %d %p\n", a, *a_ptr, a_ptr);*/


	// * Chapter 9_15 Null 포인터와 런타임에러 

	//int a;
	//printf("%p\n", &a);
	//printf("%d\n", a);// initialization 않하면 쓰레기값이 들어간다



	//int* ptr = 1234 ; //포인터 변수에 주소가 아닌 정수를 입력한 오류	                    

	//printf("%p\n", ptr);
	//printf("%d\n", *ptr);// 이때 Rederection 하는 과정에서 Runtime 오류가 발생한다


//	//* NULL 값 넣어주는 실무형 방법
//
//	int* safer_ptr = NULL;
//
//	int a = 123;
//
//	//safer_ptr = &a;
//
//	int b;
//	
//	scanf("%d", &b);
//
//	if (b % 2 == 0)
//		safer_ptr = &a;
//
//	if (safer_ptr != NULL)
//		printf("%p\n", safer_ptr);
//
//	if (safer_ptr != NULL)
//		printf("%d\n", *safer_ptr);
//
//}

//// * Chapter 9_17 포인터변수의 크기
//
//void main()
//{
//	char a;
//	float b;
//	double c;
//
//	char* ptr_a = &a;
//	float* ptr_b = &b;
//	double* ptr_c = &c;
//
//	printf("%zd %zd %zd\n", sizeof(a), sizeof(b), sizeof(c));
//	printf("%zd %zd %zd\n", sizeof(ptr_a), sizeof(ptr_b), sizeof(ptr_c));
//	printf("%zd %zd %zd\n", sizeof(&a), sizeof(&b), sizeof(&c));
//	printf("%zd %zd %zd\n", sizeof(char*), sizeof(float*), sizeof(double*));
//
//}

// * Chapter 9_18 포인터형 매개변수
//   Call by pointer

void swap(int* u, int* v)
{
	printf("%p %p\n", u, v);

	int temp = *u;
	*u = *v;
	*v = temp;
}

int main()
{
	int a = 123;
	int b = 456;

	printf("%p %p\n", &a, &b);

	swap(&a, &b);

	printf("%d %d\n", a, b);
}