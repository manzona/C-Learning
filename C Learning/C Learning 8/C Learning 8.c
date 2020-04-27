#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>

// * Chapter 8_5
// ���ڿ� ���ڸ� ��� �Է��� ���� �� getchar & scanf�� ����ؼ� �ϴ� ���

void display(char cr, int lines, int width);

int main()
{
	char c;
	int rows, cols;

	//while (1)
	//{
	//	scanf("%c %d %d", &c, &rows, &cols);
	//	
	//	while (getchar() != '\n') // \n�� ���Ե��� �ʰ� �ϴ� expression
	//		continue; 

	//	display(c, rows, cols);
	//	if (c == '\n')
	//		break;// dose not work well, due to scanf needs input of all %c %d %d
	//}

	printf("Input one character and two intigers:\n");

	while ((c = getchar()) != '\n')
	{
		scanf("%d %d", &rows, &cols);

		while (getchar() != '\n') 
			continue;

		display(c, rows, cols);

		printf("Input another character and tow intigers:\n");
		printf("Press Enter to quit.\n");
	}
	return 0;
}

void display(char cr, int lines, int width)
{
	int row, col;

	for (row = 1; row <= lines; row++)
	{
		for (col = 1; col <= width; col++)
			putchar(cr);
		putchar('\n');
	}
}


// * Chapter 8_6 �Է� Ȯ���ϱ� 

long get_long(void);

int main()
{
	printf("Please input a integer between 1 and 100.\n");
		
	long number;

	while (1)
	{
		number = get_long();

		if (number > 1 && number < 100)
		{
			printf("OK, Thank you!\n");
			break;
		}		

		else
			printf("Wrong input ! Please try again\n");
	}
	
	printf("Your input %ld is between 1 and 100. Thank you!\n", number);

	return 0;
}

long get_long(void)
{
	printf("Please input an integer and press enter.\n");

	long input;
	char c;

	while (scanf("%ld", &input) != 1)
	{
		printf("Your input -");

		while ((c = getchar()) != '\n')
			putchar(c);
		printf(" - is not an integer. Please try again.\n");
	}

	printf("Your input %ld is an integer. Thank you!\n", input);

	return input;

}


// * Chapter 8_8 �޴������ ����

// ���� ���� ��
int main()
{
	char letter;
	int number;
	
	printf("Enter the letter of your choice:\n");
	printf("a. avengers\tb. beep\n");
	printf("c. count\tq. quit\n");

	scanf("%c", &letter);

	while (1)
	{
		if (letter == 'a')
		{
			printf("Avengers Assemble!\n");
			//continue;
		}		

		else if (letter == 'b')
		{
			printf("\a\n");
			//continue;
		}
			
		else if (letter == 'c')
		{				
			printf("Input your number:\n");
			scanf("%d", &number);

			for (int i = 1; i <= number; i++)
			{
				printf("%d", i);
			}
			
			//continue;
		}
		else if (letter == 'q')
			break;

		printf("Enter the letter of your choice:\n");
		printf("a. avengers\tb. beep\n");
		printf("c. count\tq. quit\n");

		scanf("%c", &letter);
	}		

	return 0;
}

// * ���ǿ��� ���� ����
char get_choice(void);
char get_first_char(void);
int get_integer(void);
void count(void);

int main()
{
	int user_choice;

	while ((user_choice = get_choice()) != 'q')
	{
		switch (user_choice)
		{
		case 'a':
			printf("Avengers assemble!\n");
			break;
		case 'b':
			putchar('\a');
			break;
		case 'c':
			count();
			break;
		default:
			printf("Error with %d.\n", user_choice);
			exit(1);
			break;
		}
	}

	return 0;
}

char get_choice(void)
{
	int user_input;

	printf("Enter the letter of your choice:\n");
	printf("a. avengers\tb. beep\n");
	printf("c. count\tq. quit\n");

	user_input = get_first_char();

	while ((user_input < 'a' || user_input > 'c') && user_input != 'q')
	{
		printf("Please try again.\n");
		user_input = get_first_char();
	}

	return user_input;
}

char get_first_char(void)
{
	int ch;

	ch = getchar();

	while (getchar() != '\n')
		continue;

	return ch;
}

int get_integer(void)// ������ �޾Ƶ��̴� �Լ�
{
	int input;
	char c;

	while (scanf("%d", &input) != 1)
	{
		while ((c = getchar()) != '\n')
			putchar(c);
		printf(" is not an integer.\nPlease try again!");
	}

	return input;
}

void count(void)
{
	int n, i;

	printf("Enter an integer:\n");

	n = get_integer();

	for (i = 1; i <= n; ++i)
		printf("%d\n", i);

	while (getchar() != '\n')
		continue;
}


// ****** For about getchar & putchar

int main()
{
	char ch;

	ch = getchar();// ���ۿ� �������ڿ��� ���� ���� ����
	//putchar(ch);   

	while (ch != '\n')// while���� �ϳ��� �����鼭 ����� �غ��ϴٰ� \n �� ������ �Ѳ����� ����Ѵ�
	{
		putchar(ch);

		ch = getchar();
	}
		
	// putchar(ch);// ��� ���� ����� ���´�

	// ���� �ܼ��ϰ� �ϸ�
	/*while ((ch = getchar()) != '\n')
		putchar(ch);*/


	 // continue as a placeholer
	/*while (getchar() != '\n')
		continue;*/

	return 0;
}
