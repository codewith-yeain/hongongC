#include <stdio.h>

// 매개변수가 없는 함수
int get_num(void);


int main(void)
{
	
	int result;

	result = get_num();
	printf("반환값 : %d\n", result);


	return 0;
}

int get_num(void)
{
	int num;

	printf("양수 입력 : ");
	scanf_s("%d", &num);
	
	while (num <= 0)
	{
		printf("양수를 입력하세요!\n");
		printf("양수 입력 : ");
		scanf_s("%d", &num);
	}

	return num;
}