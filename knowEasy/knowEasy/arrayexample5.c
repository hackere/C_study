#include <stdio.h>
#define SIZE 12

int main()
{
	int i, n, max = 0;
	int num[12] = { 0 };

	printf("0에서 9까지의 정수를 입력하시오.\n");
	for (i = 0; i<12; i++)
	{

		printf("score[%d] = ", i + 1);
		scanf("%d", &n);
		if (n>10 || n<1)
		{
			printf("1~10사이의 숫자가 아닙니다. 다시 입력하세요!!\n");
			i--;
			continue;
		}

		num[n]++;
	}


	printf("\n\n");
	printf("빈도수 출력\n");
	for (i = 0; i<12; i++)
	{
		printf("%d --> %d번\n", i, num[i]);
		if (num[i] > num[max])
			max = i;
		else
			max = max;
		
		// x = (num[i]>num[max]) ? i : max;  향상된 if문

	}


	printf("\n0 ~ 9 중 가장 많이 나온 수는 %d이고, %d번 나왔습니다.\n", max, num[max]);

	return 0;
}