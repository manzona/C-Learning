#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

// * Chapger 8_5
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