#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

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
   
int main()
{
    char ch;

    while ((ch = getchar()) != '\n')
    {
        if (islower(ch))
            ch = toupper(ch);
        else if (isupper(ch))
            ch = tolower(ch);
        putchar(ch);
    }
    return 0;
}
       





    

