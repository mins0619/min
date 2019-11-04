#include <stdio.h>
#include <string.h>



int main()
{
	int arr[300], freq[300];
	int size, i, j, count;

	/* �迭 ũ�� �Է� */
	printf("��� ȭ��ǿ� ������(���� ��ξ�� ���ð� ���� �������ʼ�): ");
	scanf_s("%d", &size);

	/* �迭�� ��ȣ �Է� */
	printf("������� ��ȣ �Է��սô�. \n");
	for (i = 0; i < size; i++)
	{


		printf("[%d��°]1 - 394 ���ڸ� �Է��ϼ���: ", i + 1);
		scanf_s("%d", &arr[i]);

		/* Initially initialize frequencies to -1 */
		freq[i] = -1;
	}


	for (i = 0; i < size; i++)
	{
		count = 1;
		for (j = i + 1; j < size; j++)
		{
			/* If duplicate element is found */
			if (arr[i] == arr[j])
			{
				count++;

				/* Make sure not to count frequency of same element again */
				freq[j] = 0;
			}
		}

		/* If frequency of current element is not counted */
		if (freq[i] != 0)
		{
			freq[i] = count;
		}
	}

	/*
	 * Print frequency of each element
	 */
	printf("\n ȭ��� �̵�Ƚ�� : \n");
	for (i = 0; i < size; i++)
	{


		if (freq[i] != 0)
		{
			printf("%d ���� %d �� ȭ��ǿ� �����ϴ�. \n\n", arr[i], freq[i]);
		}
	}

	return 0;
}


// ���Ϻ����� �������� ������ �� �ִ��� ��� �̻�� ��� �ǵ��� �� �� �ִ��� ã�ƺ��� 300�� ;