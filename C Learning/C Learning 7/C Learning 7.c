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
    //while (ch != '\n')// Use '\n' to find the end of sequence, �������ڸ� �Է��ϸ� Buffer�� �����ߴ� �Ѳ����� �����ش� ?
    //{
    //    putchar(ch);

    //    ch = getchar();
    //}

    //putchar(ch);// ���� �� expression�� �ʿ��Ѱ�?



    //char ch;

    //while ((ch = getchar()) != '\n')
    //{
    //    putchar(ch);
    //}

    ////putchar(ch); ���⼭�� �� ���� �ڵ��� �ʿ����



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
    //    for (int i = '0'; i <= '9'; ++i)// '' �ȿ� ���ڸ� ���� ���� �߿� !!!, ** < '10' �� �ᱹ 1 & 0 �̶� 9���� ������ �־�� �� 
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

    
//  * Chapter 7_5 Else�� if ¦����

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
//        else // else�� ������ �ִ� if�� �ٴ� Ư���� �ִ�
//            printf("Lager than 10\n");
//    }
//    else
//    {
//        printf("Smaller than 5\n");
//    }
//
//    return 0;
//}


// * Chapter 7_6 �Ҽ��Ǵܿ���

// ���� �� �ڵ�
//int main()
//{
//    unsigned num = 0;
//    int isPrime = 0; // flag, try bool type
//
//    printf("���ڸ� �Է��� �ּ���:");
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
//        printf("���ڸ� �Է��� �ּ���:");
//    }               
//    return 0;
//}

// ���� �ڵ� ��Ÿ��
int main()
{
    unsigned num,i;
    bool isPrime = true; 

    printf("���ڸ� �Է��� �ּ���:");

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

        printf("���ڸ� �Է��� �ּ���:");
    }
    return 0;
}
