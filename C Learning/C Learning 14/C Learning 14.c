#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // malloc(), free()
#include <string.h>//strlen(), strcmp()
#include <conio.h>


//// * Chapter 14.4
//#define MAX_TITLE 40
//#define MAX_AUTHOR 40
//#define MAX_BOOKS 3
//
//
//char* s_gets(char* st, int n)
//{
//	char* ret_val;
//	char* find;
//
//	ret_val = fgets(st, n, stdin);// vs. scanf
//	if (ret_val)
//	{
//		find = strchr(st, '\n');  // look for new line
//		if (find)                 // if the adress in not NULL
//			*find = '\0';         // place a null character there
//		else
//			while (getchar() != '\n')
//				continue;         // dispose of rest of line 
//	}
//
//	return ret_val;
//}
//
//struct book
//{
//	char title[MAX_TITLE];
//	char author[MAX_AUTHOR];
//	float price;
//};
//
//int main()
//{
//	struct book library[MAX_BOOKS] = { {"Empty", "Empty", 0.0f}, };
//	
//	int count = 0;
//
//	while (1)
//	{
//		printf("Input a book title or pree [Enter] to stop. \n>>");
//		if (s_gets(library[count].title, MAX_TITLE) == NULL) break;
//		if (library[count].title[0] == '\0') break;
//
//		printf("Input the author.\n>>");
//		s_gets(library[count].author, MAX_AUTHOR);
//
//		printf("Input the price.\n>>");
//		int flag = scanf("%f", &library[count].price);
//		while (getchar() != '\n')
//			continue; // clear input line
//
//		count++;
//
//		if (count == MAX_BOOKS)
//		{
//			printf("No more books.\n");
//			break;
//		}
//	}
//
//	if (count > 0)
//	{
//		printf("\nThe list of books: \n");
//		for (int index = 0; index < count; index++)
//			printf("\"%s\" written by %s: $%.1f\n",
//				library[index].title, library[index].author, library[index].price);
//	}
//	else
//		printf("No books to show.\n");
//
//	return 0;
//}




//// * Chapter 14.6
//
//#define LEN 20
//
//struct names
//{
//	char given[LEN];
//	char family[LEN];
//};
//
//struct friend
//{
//	struct names full_name;
//	char mobile[LEN];
//};
//
//int main(void)
//{
//	struct friend my_friends[2] =
//	{
//		{{"Ariana", "Grande"}, "1234-1234" },
//		{{ "Taylor", "Swift" }, "6550-8888"},
//	};
//
//	struct friend* girl_friend;
//
//	girl_friend = &my_friends[0];
//
//	printf("%zd\n", sizeof(struct friend));
//	printf("%lld %s\n", (long long)girl_friend, girl_friend->full_name.given);
//	// -> indirect memeber access operator
//	girl_friend++;
//
//	printf("%lld %s\n", (long long)girl_friend, (*girl_friend).full_name.given);
//
//	return 0;
//}

//// * Chapter 14.7
//#define FUNDLEN 50
//
//struct fortune
//{
//	char	bank_name[FUNDLEN];
//	double	bank_saving;
//	char	fund_name[FUNDLEN];
//	double	fund_invest;
//};
//
////double sum(double* x, double* y);
//double sum(struct fortune my_fortune);
//
//int main()
//{
//	struct fortune my_fortune =
//	{
//		"Wells-Fargo", 4032.27,
//		"JPMorgan Chase", 8543.94
//	};
//
//	printf("Total : $%.2f\n",
//		//sum(&my_fortune.bank_saving, &my_fortune.fund_invest));
//		sum(my_fortune));
//	
//	//struct fortune my_fortuen2;
//	//my_fortuen2 = my_fortune// 대입이 된다
//
//	return 0;
//}
//
////double sum(double* x, double* y)
//double sum(struct fortune my_fortune)// 함수의 Parameter에 복사를 하게된다
//{
//	return my_fortune.bank_saving + my_fortune.fund_invest;
//}
