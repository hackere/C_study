#include <stdio.h>
#define SIZE 12

int main()
{
	int i, n, max = 0;
	int num[12] = { 0 };

	printf("0���� 9������ ������ �Է��Ͻÿ�.\n");
	for (i = 0; i<12; i++)
	{

		printf("score[%d] = ", i + 1);
		scanf("%d", &n);
		if (n>10 || n<1)
		{
			printf("1~10������ ���ڰ� �ƴմϴ�. �ٽ� �Է��ϼ���!!\n");
			i--;
			continue;
		}

		num[n]++;
	}


	printf("\n\n");
	printf("�󵵼� ���\n");
	for (i = 0; i<12; i++)
	{
		printf("%d --> %d��\n", i, num[i]);
		if (num[i] > num[max])
			max = i;
		else
			max = max;
		
		// x = (num[i]>num[max]) ? i : max;  ���� if��

	}


	printf("\n0 ~ 9 �� ���� ���� ���� ���� %d�̰�, %d�� ���Խ��ϴ�.\n", max, num[max]);

	return 0;
}