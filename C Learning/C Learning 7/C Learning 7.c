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
       





    

