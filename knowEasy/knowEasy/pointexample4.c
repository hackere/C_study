/*
문제 : 두 개의 int형 포인터 max, min과 길이가 5인 int형 배열을 선언한 다음, 총 5개의 정수를 사용자로부터 입력받는다.
그리고 나서 두 개의 포인터와 배열을 함수 MaxMin의 인자로 전달한다.
함수 호출이 완료되고 나면 max와 min은 배열의 최대값과 최소값을 가리키고 있어야 한다.
이러한 기능을 지니는 함수 MaxMin을 정의하고,
이에 적절한 main 함수도 구현해 보자. main 함수의 마지막에서는 포인터 max와 min이 가리키는 메모리가 지니고 있는 값을 출력하기로 하자.
*/
#include <stdio.h>

void MaxMin(int **max, int **min, int arry[]);

int main()
{
	int *max,*min;
	int arry[5] = { 10, 20, 30, 40, 50 };

	MaxMin(&max, &min, arry);

	//printf("MAX = %d\n", *max);
	//printf("MIN = %d\n", *min);
	printf("최대값 : %d 최소값 %d\n", *max, *min);
	return 0;
}

void MaxMin(int ** max, int **min, int arry[])
{
	int *MAX = arry;
	int *MIN = arry;

	for (int i = 1; i < 5; i++)
	{
		if (*MAX < arry[i])
		{
			MAX = &arry[i];
		}
		else if (*MIN > arry[i])
		{
			MIN = &arry[i];
		}
	}
	*max = MAX;
	*min = MIN;
}
