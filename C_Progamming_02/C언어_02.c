// C ��� _ 01 ���� �ҽ��ڵ�

// �Է� �� ���, ��ó�� ��ɾ� ���
/*
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

int main()
{
	int num;
	char name[10];

	printf("�й� �Է� : ");
	scanf("%d", &num);

	printf("�̸� �Է� : ");
	scanf("%s", name); // �迭 ��ü�� �Է� ���� �� '&' ���X

	printf("%d�й� %s��. ȯ���մϴ�!\n", num, name);
}
*/

// ���� ����ϱ� (if-else ��)
/*
int main()
{
	int year;

	printf("���� �Է� : ");
	scanf("%d", year);

	if (year % 400 == 0)
		printf("%d���� ����\n", year);
	else if (year % 4 == 0 && year % 100 != 0)
		printf("%d���� ����\n", year);
	else if (year % 4 == 0)
		printf("%d���� ����\n", year);
	else
		printf("%d���� ������ �ƴ�\n", year);
}
*/

// ������ ���� ����� (+,-,*,/,% ������)
/*
int main()
{
	int num1, num2;
	char oper;

	printf("���� �Է� : ");
	scanf("%d %c %d", &num2, &oper, &num2);

	switch (oper)
	{
	case '+':
		printf("%d %c %d = %f\n", num1, oper, num2, (float)num1 + num2); // �Ǽ��� ��ȯ Ű���� ����
		break;
	case '-':
		printf("%d %c %d = %f\n", num1, oper, num2, (float)num1 - num2);
		break;
	case '*':
		printf("%d %c %d = %f\n", num1, oper, num2, (float)num1 * num2);
		break;

	case '/':
		if (num2 == 0)
			printf("0���δ� ���� �� ����\n"); // �������� ��� �и� �κ��� 0�� ��� ���� üũ
		else
			printf("%d %c %d = %f\n", num1, oper, num2, (float)num1 / num2);
		break;
	case '%':
		if (num2 == 0)
			printf("0���δ� ���� �� ����\n"); // �������� ���ϴ� ��� ���� �и� �κ��� 0�� ��� ���� üũ
		else
			printf("%d %c %d = %f\n", num1, oper, num2, (float)num1 % num2);
		break;
	default:
		printf("�߸� �Է���\n");
	}
}
*/

// �Ҽ� �Ǻ��ϱ� (while ��) 
// �Ҽ� : 1�� �ڱ��ڽ����θ� ������ �� (1�� �Ҽ� X)
/*
#include <stdio.h>
int main()
{
	int i = 2, cnt = 0;
	int is_prime;

	printf("���� �Է� : ");
	scanf_s("%d", &is_prime);

	while (i < is_prime) // �Է¹��� ���� 2�̻��̸� ��� �ݺ�
	{
		if (is_prime % i == 0) 
			cnt++;
		i++;
	}

	if (cnt == 0)
		printf("%d�� �Ҽ�\n", is_prime);
	else
		printf("%d�� �Ҽ� �ƴ�\n", is_prime);
}
*/

// �پ��� ��� ����� (for ��)
// ���� ���� ũ�� ���� �簢��
/*
int main()
{
	int i, j, size;
	printf("ũ�� �Է� : ");
	scanf("%d", &size);

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
*/

// ���̰� size�� ���� �ﰢ�� (1~size)
/*
int main()
{
	int i, j, size;
	printf("ũ�� �Է� : ");
	scanf("%d", &size);

	for (i = 0; i < size; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
*/

// ���̰� size�� ���� �ﰢ�� (size~1)
/*
int main()
{
	int i, j, size;
	printf("ũ�� �Է� : ");
	scanf("%d", &size);

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size-i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
*/

// ������� �����ϴ� ���̰� size�� �����ﰢ��
/*
int main()
{
	int i, j, size;
	printf("ũ�� �Է� : ");
	scanf("%d", &size);

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
			printf(" ");
		for (j = 0; j < size - i - 1; j++)
			printf("*");
		printf("\n");
	}
}
*/

// 2���� �迭�� ����
/*
int main()
{
	int i, j;
	int arr1[3][3] = {
		{1,2,3},
		{2,3,4},
		{3,4,5}
	};
	int arr2[3][3] = {
		{7,8,9},
		{10,11,12},
		{13,14,15}
	};

	printf("�迭 A\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("[%2d]", arr1[i][j]);
		printf("\n");
	}

	printf("�迭 B\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("[%2d]", arr2[i][j]);
		printf("\n");
	}

	printf("�迭 A+B\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("[%2d]", arr1[i][j]+arr2[i][j]);
		printf("\n");
	}
}
*/

// n�� �Ҽ� ����ϱ� ( ����� )
/*
#include <stdio.h>
int main()
{
	int i = 2, cnt = 0;
	int prime = 2, number, number_cnt = 0;

	printf("�Ҽ� ���� : ");
	scanf_s("%d", &number);

	while (1)
	{
		while (i <= prime)
		{
			if (prime % i == 0)
				cnt++;
			i++;
		}
		if (cnt == 1)
		{
			number_cnt++;
			printf("%d��° �Ҽ� : %d\n", number_cnt, prime);
		}

		if (number_cnt == number)
			break;

		i = 2;
		cnt = 0;
		prime++;
	}
}
*/

// �Ƕ�̵� ��� �����
/*
#include <stdio.h>
int main()
{
	int i, j, size;
	printf("ũ�� �Է� : ");
	scanf_s("%d", &size);

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++) 
			printf(" ");
		for (j = 0; j <= 2 * i; j++)
			printf("*");
		printf("\n");
	}
}
*/

// �迭�� �ݺ����� ����
/*
#include <stdio.h>
int main()
{
	int i, max, min, sum = 0;
	int arr[5];

	printf("5�� �ڿ��� �Է� : ");
	for (i = 0; i < 5; i++)
		scanf_s("%d", &arr[i]); // �� �ٿ� �ټ��� �ᵵ �ǰ�, �� �ٿ� �ϳ��� �ټ��� �ᵵ ��

	// �ִ밪
	max = arr[0];
	for (i = 1; i < 5; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}

	// �ּҰ�
	min = arr[0];
	for (i = 1; i < 5; i++)
	{
		if (min > arr[i])
			min = arr[i];
	}

	// �ִ�, �ּ� �ƴ� ������ ���� ��
	for (i = 0; i < 5; i++)
	{
		if (arr[i] != max && arr[i] != min)
			sum += arr[i];
	}

	printf("�ִ밪 : %d, �ּҰ� : %d\n", max, min);
	printf("�ִ�/�ּҰ� ������ ������ ������ �� : %d\n", sum);
}
*/

// ����ã��
/*
int main()
{
	int real_map[5][5] = {
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,1,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0}
	};

	int show_map[5][5] = {
		{9,9,9,9,9},
		{9,9,9,9,9},
		{9,9,9,9,9},
		{9,9,9,9,9},
		{9,9,9,9,9}
	};

	int i, j, x, y, flag = 0;
	int input;

	do {
		for (i = 0; i < 5; i++)
		{
			for (j = 0; j < 5; j++) {
				if (show_map[i][j] == 9)
					printf("��");
				else if (show_map[i][j] == 8)
					printf("��");
				else {
					printf("��");
					flag = 1;
				}
			}
			printf("\n");
		}

		if (flag == 1)
		{
			printf("���� ã��\n");
			break;
		}

		printf("��ǥ �Է� (0 0 ����) : ");
		scanf_s("%d %d", &x, &y);

		if (real_map[x][y] == 0)
			show_map[x][y] = 8;
		else if (real_map[x][y] == 1)
			show_map[x][y] = 7;

		printf("\n");
	} while (1);
}
*/