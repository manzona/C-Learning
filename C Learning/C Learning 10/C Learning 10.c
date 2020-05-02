#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//// Chapter 10.4 포인터와 배열
//int main()
//{
//	int arr[10];
//	
//	int num = sizeof(arr) / sizeof(arr[0]);
//
//	for (int i = 0; i < num; ++i)
//		arr[i] = (i + 1) * 100;
//
//	/*int* ptr = arr;
//
//	printf("%p %p %p\n", ptr, arr, &arr[0]);
//
//	ptr += 2;
//
//	printf("%p %p %p\n", ptr, arr + 2, &arr[2]);
//
//	printf("%d %d %d\n", *(ptr + 1), *(arr + 3), arr[3]);*/
//	
//	int* ptr = arr;
//	for (int i = 0; i < num; ++i)
//	{
//		printf("%d %d\n", *ptr++, arr[i]);// redirection을 하고 ; 만나면 더해준다 
//	}
//	return 0;
//}


//// * Chapter 10.5 2차원배열과 메모리
//int main()
//{
//	int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };
//
//	printf("%d\n\n", arr[1][1]);
//
//	for (int i = 0; i < 2; ++i)
//	{
//		for (int j = 0; j < 3; ++j)
//			printf("%d ", arr[i][j]);
//
//		printf("\n");
//	}
//
//	return 0;
//}


//// * Chapter 10.6 2차원배열 연습문제
//#define MONTHS 12
//#define YEARS 3
//
//int main()
//{
//	/*double year2016[MONTHS] = { 3.2, 0.2, 7.0, 14.1, 19.6, 23.6, 26.2, 28.0, 23.1, 16.1, 6.8, 1.2 };
//	double year2016[MONTHS] = { -1.8, -0.2, 6.3, 13.9, 19.5, 23.3, 26.9, 25.9, 22.1, 16.4, 5.6, -1.9 };
//	double year2016[MONTHS] = { -4.0, -1.6, 8.1, 13.0, 18.2, 23.1, 27.8, 28.8, 21.5, 13.1, 7.8, -0.6 };*/
//
//	// * step 1
//	double temp_data[3][12] = {
//		{ 3.2, 0.2, 7.0, 14.1, 19.6, 23.6, 26.2, 28.0, 23.1, 16.1, 6.8, 1.2 },
//		{ -1.8, -0.2, 6.3, 13.9, 19.5, 23.3, 26.9, 25.9, 22.1, 16.4, 5.6, -1.9 },
//		{ -4.0, -1.6, 8.1, 13.0, 18.2, 23.1, 27.8, 28.8, 21.5, 13.1, 7.8, -0.6 }
//	};
//
//	// * step 2
//	printf("[Temperature Data]\n");
//
//	printf("Year index : ");
//	for (int m = 0; m < MONTHS; ++m)
//	{
//		printf("\t%d ", m + 1);
//	}
//	printf("\n");
//
//	for (int y = 0; y < YEARS; ++y)
//	{
//		printf("Year %d     : ", y);
//		for (int m = 0; m < MONTHS; ++m)
//		{
//			printf("\t%.1f ", temp_data[y][m]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//
//	// * step 3
//	printf("[Yearly average temperatures of 3 years]\n");
//	for (int y = 0; y < YEARS; ++y)
//	{
//		double avg_temp = 0.0;
//
//		for (int m = 0; m < MONTHS; ++m)
//			avg_temp += temp_data[y][m];
//
//		avg_temp /= (double)MONTHS;
//
//		printf("Year %d : average temperature = %.1f\n", y, avg_temp);
//	}
//	printf("\n");
//
//	//step 4
//	printf("[Monthly average temperatures for 3 years]\n");
//	printf("Year index : ");
//	for (int m = 0; m < MONTHS; ++m)
//	{
//		printf("\t%d ", m + 1);
//	}
//	printf("\n");
//
//	printf("Avg temps  : ");
//	for (int m = 0; m < MONTHS; ++m)
//	{
//		double avg_temp = 0;
//		for (int y = 0; y < YEARS; ++y)
//		{
//			avg_temp += temp_data[y][m];
//		}
//		avg_temp /= (double)YEARS;
//
//		printf("\t%.1f ", avg_temp);
//	}
//	printf("\n");
//
//	return 0;
//}

//// Chapter 10.9
//
//int main()
//{
//	/*
//	Pointer operations
//	- Assignment
//	- Value finding(deferencing)
//	- Taking a pointer adress
//	- Adding an integer to a point
//	- Incrementing a pointer
//	- Substrating an integer from a pointer
//	- Incrementing a pointer
//	- Decrementing a pointer
//	- Differencing
//	- Comparinson
//	*/
//
//	int arr[5] = { 100, 200, 300, 400, 500 };
//	int* ptr1, * ptr2, * ptr3;
//
//	ptr1 = arr; // Assingment
//	printf("%p %d %p\n", ptr1, *ptr1, &ptr1);//pointer 의 (memory에 주소값), pointer 의 redirection 값, pointer 변수 자체의 주소값
//
//	ptr2 = &arr[2]; //Adress-of aperator 인 &
//	printf("%p %d %p\n", ptr2, *ptr2, &ptr2);
//
//	ptr3 = ptr1 + 4; // adding an integer from a point
//	printf("%p %d %p\n", ptr3, *ptr3, &ptr3);
//
//	//Differencing
//	printf("%td\n", ptr3 - ptr1);// t는 pointer 의 차이를 출력할 때 사용한다
//
//	ptr3 = ptr3 - 4;// substracing an integer from a pointer
//
//	printf("%p %d %p\n", ptr3, *ptr3, &ptr3);
//
//	ptr1++;// Incrementing
//	ptr1--;// Decrementing
//	--ptr1;
//	--ptr1; // 모두사용할 수 있다
//
//	if (ptr1 == ptr3)// 같은 타입의 포인터는 비교도 가능하다
//		printf("Same\n");
//	else
//		printf("different\n");
//
//	double d = 3.14;
//	double* ptr_d = &d;
//	
//	if (ptr1 == ptr_d)// warning 이 뜬다
//	// if (ptr 1 == (double*)ptr_d), 이렇게 하면 된다
//		printf("Same\n");
//	else
//		printf("different\n");
//
//	return 0;
//}


//// * Chapter 10.11 배열매개변수와 const
//void print_arry(const int arr[], const int n)
//{
//	for (int i = 0; i < n; ++i)
//		printf("%d ", arr[i]);
//	printf("\n");
//}
//
//void add_value(int arr[], int n, int val)
//{
//	int i;
//	for (i = 0; i < n; i++)
//		arr[i] += val;
//}
//
//int sum(const int arr[], const int n)// 여기에 const를 넣어주면 좋다
//{
//	int i;
//	int total = 0;
//	
//	for (i = 0; i < n; i++)
//		total += arr[i];
//
//	return total;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	const int n = sizeof(arr) / sizeof(arr[0]);
//
//	print_arry(arr, 5);
//	add_value(arr, 5,100);
//	print_arry(arr, 5);
//
//	int s = sum(arr, n);
//
//	printf("Sum is %d\n", s);
//	print_arry(arr, 5);
//
//	return 0;
//}

// *Chapter 10.13 포인터의 배열과 2차원 배월
int main()
{
	int arr[2][3] = { {1, 2, 3}, {4, 5,6} };

	int* parr[2] = { arr[0], arr[1] };

	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 3; ++j)
			printf("%d %d %d %d\n",
				arr[i][j], parr[i][j], *(parr[i] + j), (*(parr + i) + j));
			printf("\n");
	}
	printf("\n");
	return 0;
}