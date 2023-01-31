// C 언어 _ 01 복습 소스코드

// 입력 및 출력, 전처리 명령어 사용
/*
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

int main()
{
	int num;
	char name[10];

	printf("학번 입력 : ");
	scanf("%d", &num);

	printf("이름 입력 : ");
	scanf("%s", name); // 배열 자체는 입력 받을 때 '&' 사용X

	printf("%d학번 %s님. 환영합니다!\n", num, name);
}
*/

// 윤년 계산하기 (if-else 문)
/*
int main()
{
	int year;

	printf("연도 입력 : ");
	scanf("%d", year);

	if (year % 400 == 0)
		printf("%d년은 윤년\n", year);
	else if (year % 4 == 0 && year % 100 != 0)
		printf("%d년은 윤년\n", year);
	else if (year % 4 == 0)
		printf("%d년은 윤년\n", year);
	else
		printf("%d년은 윤년이 아님\n", year);
}
*/

// 간단한 계산기 만들기 (+,-,*,/,% 연산자)
/*
int main()
{
	int num1, num2;
	char oper;

	printf("수식 입력 : ");
	scanf("%d %c %d", &num2, &oper, &num2);

	switch (oper)
	{
	case '+':
		printf("%d %c %d = %f\n", num1, oper, num2, (float)num1 + num2); // 실수형 변환 키워드 쓰기
		break;
	case '-':
		printf("%d %c %d = %f\n", num1, oper, num2, (float)num1 - num2);
		break;
	case '*':
		printf("%d %c %d = %f\n", num1, oper, num2, (float)num1 * num2);
		break;

	case '/':
		if (num2 == 0)
			printf("0으로는 나눌 수 없음\n"); // 나누기인 경우 분모 부분이 0인 경우 따로 체크
		else
			printf("%d %c %d = %f\n", num1, oper, num2, (float)num1 / num2);
		break;
	case '%':
		if (num2 == 0)
			printf("0으로는 나눌 수 없음\n"); // 나머지를 구하는 경우 또한 분모 부분이 0인 경우 따로 체크
		else
			printf("%d %c %d = %f\n", num1, oper, num2, (float)num1 % num2);
		break;
	default:
		printf("잘못 입력함\n");
	}
}
*/

// 소수 판별하기 (while 문) 
// 소수 : 1과 자기자신으로만 나뉘는 수 (1은 소수 X)
/*
#include <stdio.h>
int main()
{
	int i = 2, cnt = 0;
	int is_prime;

	printf("숫자 입력 : ");
	scanf_s("%d", &is_prime);

	while (i < is_prime) // 입력받은 수가 2이상이면 계속 반복
	{
		if (is_prime % i == 0) 
			cnt++;
		i++;
	}

	if (cnt == 0)
		printf("%d는 소수\n", is_prime);
	else
		printf("%d는 소수 아님\n", is_prime);
}
*/

// 다양한 모양 만들기 (for 문)
// 가로 세로 크기 같은 사각형
/*
int main()
{
	int i, j, size;
	printf("크기 입력 : ");
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

// 높이가 size인 직각 삼각형 (1~size)
/*
int main()
{
	int i, j, size;
	printf("크기 입력 : ");
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

// 높이가 size인 직각 삼각형 (size~1)
/*
int main()
{
	int i, j, size;
	printf("크기 입력 : ");
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

// 공백부터 시작하는 높이가 size인 직각삼각형
/*
int main()
{
	int i, j, size;
	printf("크기 입력 : ");
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

// 2차원 배열의 연산
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

	printf("배열 A\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("[%2d]", arr1[i][j]);
		printf("\n");
	}

	printf("배열 B\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("[%2d]", arr2[i][j]);
		printf("\n");
	}

	printf("배열 A+B\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("[%2d]", arr1[i][j]+arr2[i][j]);
		printf("\n");
	}
}
*/

// n개 소수 출력하기 ( 어려움 )
/*
#include <stdio.h>
int main()
{
	int i = 2, cnt = 0;
	int prime = 2, number, number_cnt = 0;

	printf("소수 개수 : ");
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
			printf("%d번째 소수 : %d\n", number_cnt, prime);
		}

		if (number_cnt == number)
			break;

		i = 2;
		cnt = 0;
		prime++;
	}
}
*/

// 피라미드 모양 만들기
/*
#include <stdio.h>
int main()
{
	int i, j, size;
	printf("크기 입력 : ");
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

// 배열과 반복문의 응용
/*
#include <stdio.h>
int main()
{
	int i, max, min, sum = 0;
	int arr[5];

	printf("5개 자연수 입력 : ");
	for (i = 0; i < 5; i++)
		scanf_s("%d", &arr[i]); // 한 줄에 다섯개 써도 되고, 한 줄에 하나씩 다섯줄 써도 됨

	// 최대값
	max = arr[0];
	for (i = 1; i < 5; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}

	// 최소값
	min = arr[0];
	for (i = 1; i < 5; i++)
	{
		if (min > arr[i])
			min = arr[i];
	}

	// 최대, 최소 아닌 나머지 수의 합
	for (i = 0; i < 5; i++)
	{
		if (arr[i] != max && arr[i] != min)
			sum += arr[i];
	}

	printf("최대값 : %d, 최소값 : %d\n", max, min);
	printf("최대/최소값 제외한 나머지 숫자의 합 : %d\n", sum);
}
*/

// 지뢰찾기
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
					printf("■");
				else if (show_map[i][j] == 8)
					printf("□");
				else {
					printf("※");
					flag = 1;
				}
			}
			printf("\n");
		}

		if (flag == 1)
		{
			printf("지뢰 찾음\n");
			break;
		}

		printf("좌표 입력 (0 0 같이) : ");
		scanf_s("%d %d", &x, &y);

		if (real_map[x][y] == 0)
			show_map[x][y] = 8;
		else if (real_map[x][y] == 1)
			show_map[x][y] = 7;

		printf("\n");
	} while (1);
}
*/