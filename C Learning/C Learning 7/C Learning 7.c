#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

// *** Chpater 7_2 ***
/*
     1. Introduction of getchar() and putchar()
     2. Using while loop to process character sequence
     3. Filter of a specific character
     4. Converting numbers to asterisks
     5. Lower characters to Upper characters
*/

//int main()
//{
    /*char ch;
    ch = getchar();
    putchar(ch);*/


    //char ch;

    //ch = getchar();
    //
    //while (ch != '\n')// Use '\n' to find the end of sequence, 여러문자를 입력하면 Buffer에 저장했다 한꺼번에 보여준다 ?
    //{
    //    putchar(ch);

    //    ch = getchar();
    //}

    //putchar(ch);// 과연 이 expression이 필요한가?



    //char ch;

    //while ((ch = getchar()) != '\n')
    //{
    //    putchar(ch);
    //}

    ////putchar(ch); 여기서도 이 줄의 코딩은 필요없음



    //char ch;

    //while ((ch = getchar()) != '\n')
    //{
    //    if (ch == 'f') 
    //    {
    //        ch = 'x'; 
    //    }
    //    putchar(ch);
    //               
    //}        
    //  //putchar(ch);



   /* char ch;

    while ((ch = getchar()) != '\n')
    {
        if (ch == 'f')
        {
            ch = 'x';
        }
        else if (ch == 'F')
        {
            ch = 'X';
        }
        putchar(ch);

    }*/


    /*char ch;

    while ((ch = getchar()) != '\n')
    {
        if (ch == 'f' || ch = 'F')
        {
            ch = 'X';
        }

        putchar(ch);

    }*/


    //char ch;

    //while ((ch = getchar()) != '\n')
    //{
    //    for (int i = '0'; i <= '9'; ++i)// '' 안에 숫자를 넣은 것이 중요 !!!, ** < '10' 은 결국 1 & 0 이라서 9까지 설정해 주어야 함 
    //    {
    //        if (ch == i) 
    //        {
    //            ch = '*';
    //        }                                 
    //    }        
    //    
    //    putchar(ch);

    //}

//    char ch;
//
//    while ((ch = getchar()) != '\n')
//    {
//        if (ch >= '0' && ch <= '9')
//        {
//            ch = '&';
//        }
//
//        putchar(ch);
//
//    }
//    return 0;
//}
//





//  *** Chapeter 7_3 About Ctype.h     
   
//int main()
//{
//    char ch;
//
//    while ((ch = getchar()) != '\n')
//    {
//        if (islower(ch))
//            ch = toupper(ch);
//        else if (isupper(ch))
//            ch = tolower(ch);
//        putchar(ch);
//    }
//    return 0;
//}
       



//  * Chapeter 7_4  Else If    
// TAX calculation

//#define BASE1  12000000.0
//#define BASE2  46000000.0
//#define BASE3  88000000.0
//#define BASE4 150000000.0
//#define BASE5 300000000.0
//#define BASE6 500000000.0
//
//#define RATE1 (6.0/100.0)
//#define RATE2 (15.0/100.0)
//#define RATE3 (24.0/100.0)
//#define RATE4 (35.0/100.0)
//#define RATE5 (38.0/100.0)
//#define RATE6 (40.0/100.0)
//#define RATE7 (42.0/100.0)
//
//#define BASIC_DEDUCTION 1500000
//
//int main()
//{
//    double income = 0.0;
//    double CIT = 0.0;
//
//    printf("Please input your income:");
//
//    while (scanf("%lf", &income) == 1)
//    {
//        income -= BASIC_DEDUCTION;
//
//        if (income < BASE1)
//        {
//            CIT = income * RATE1;
//        }
//
//        else if (income <= BASE2) // BASE1 < income <= BASE2 is not needed
//        {
//            CIT = BASE1 * RATE1;
//            CIT += (income - BASE1) * RATE2;
//        }
//
//        else if (income <= BASE3)
//        {
//            CIT = BASE1 * RATE1;
//            CIT += (BASE2 - BASE1) * RATE2;
//            CIT += (income - BASE2) * RATE3;
//        }
//
//
//        else if (income <= BASE4)
//        {
//            CIT = BASE1 * RATE1;
//            CIT += (BASE2 - BASE1) * RATE2;
//            CIT += (BASE3 - BASE2) * RATE3;
//            CIT += (income - BASE3) * RATE4;
//        }
//
//        else if (income <= BASE5)
//        {
//            CIT = BASE1 * RATE1;
//            CIT += (BASE2 - BASE1) * RATE2;
//            CIT += (BASE3 - BASE2) * RATE3;
//            CIT += (BASE4 - BASE3) * RATE4;
//            CIT += (income - BASE4) * RATE5;
//        }
//
//        else if (income <= BASE6)
//        {
//            CIT = BASE1 * RATE1;
//            CIT += (BASE2 - BASE1) * RATE2;
//            CIT += (BASE3 - BASE2) * RATE3;
//            CIT += (BASE4 - BASE3) * RATE4;
//            CIT += (BASE5 - BASE4) * RATE5;
//            CIT += (income - BASE5) * RATE6;
//        }
//
//
//        else if (income > BASE6)
//        {
//            CIT = BASE1 * RATE1;
//            CIT += (BASE2 - BASE1) * RATE2;
//            CIT += (BASE3 - BASE2) * RATE3;
//            CIT += (BASE4 - BASE3) * RATE4;
//            CIT += (BASE5 - BASE4) * RATE5;
//            CIT += (BASE6 - BASE5) * RATE6;
//            CIT += (income - BASE6) * RATE7;
//        }
//
//        printf(" Your comprehensive income tax is %lf\n", CIT);
//
//        printf("Please input your income:");
//    }  
//
//    return 0;
//}

    
//  * Chapter 7_5 Else와 if 짝짓기

//int main()
//{
//    int number;
//    scanf("%d", &number);
//
//    if (number > 5)
//    {
//        if (number < 10)
//        {
//            printf("Larger than 5 smaller than10\n");
//        }
//        else // else는 가까이 있는 if에 붙는 특성이 있다
//            printf("Lager than 10\n");
//    }
//    else
//    {
//        printf("Smaller than 5\n");
//    }
//
//    return 0;
//}


// * Chapter 7_6 소수판단예제

// 내가 한 코딩
//int main()
//{
//    unsigned num = 0;
//    int isPrime = 0; // flag, try bool type
//
//    printf("숫자를 입력해 주세요:");
//
//    while (scanf("%u", &num) == 1)
//    {
//        if (num <= 2)
//        {
//            printf("%u is a prime number\n", num);
//        }
//
//        else
//        {
//            for (int i = 2; i < num; ++i)
//            {
//                isPrime = num % i;
//
//                if (isPrime == 0)
//                {
//                    printf("%u is not a prime number\n", num);
//                }
//                else
//                {
//                    printf("%u is a prime number\n", num);
//                }
//            }           
//        }
//        printf("숫자를 입력해 주세요:");
//    }               
//    return 0;
//}

// 강의 코드 스타일
int main()
{
    unsigned num,i;
    bool isPrime = true; 

    printf("숫자를 입력해 주세요:");

    while (scanf("%u", &num) == 1)
    {
        if (num <= 2)
        {
            printf("%u is a prime number\n", num);
        }

        else
        {
            for ( i = 2; (i*i) <= num; ++i)
            {
                if (num % i == 0)
                {
                    isPrime = false;

                    if (num == i * i)
                        printf("%u is divisible by %u.\n", num, i);
                    else
                        printf("%u is divisible by %u and %u.\n", num, i, num/i);
                }
            }

            if (isPrime)
                printf("%u is a prime number.\n", num);
            else
                printf("%u is not a prime number.\n", num);
        } 

        printf("숫자를 입력해 주세요:");
    }
    return 0;
}
