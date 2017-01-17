/*
���� : �� ���� int�� ������ max, min�� ���̰� 5�� int�� �迭�� ������ ����, �� 5���� ������ ����ڷκ��� �Է¹޴´�.
�׸��� ���� �� ���� �����Ϳ� �迭�� �Լ� MaxMin�� ���ڷ� �����Ѵ�.
�Լ� ȣ���� �Ϸ�ǰ� ���� max�� min�� �迭�� �ִ밪�� �ּҰ��� ����Ű�� �־�� �Ѵ�.
�̷��� ����� ���ϴ� �Լ� MaxMin�� �����ϰ�,
�̿� ������ main �Լ��� ������ ����. main �Լ��� ������������ ������ max�� min�� ����Ű�� �޸𸮰� ���ϰ� �ִ� ���� ����ϱ�� ����.
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
	printf("�ִ밪 : %d �ּҰ� %d\n", *max, *min);
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
