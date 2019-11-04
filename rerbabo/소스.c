#include <stdio.h>

int main()
{
	int arr[300], freq[300];
	int size, i, j, count;
	int input_array[10] = { 0,0,0,0,0,0,0,0,0,0 };

	/* �迭 ũ�� �Է� */
	printf("��� ȭ��ǿ� ������(���� ��ξ�� ���ð� ���� �������ʼ�): ");
	scanf_s("%d", &size);

	/* �迭�� ��ȣ �Է� */
	printf("������� ��ȣ �Է��սô�. \n");
	for (i = 0; i < size;)
	{


		printf("[%d��°]1 - 394 ���ڸ� �Է��ϼ���: ", i + 1);
		scanf_s("%d", &arr[i]);


		if (arr[i] >= 1 && arr[i] <= 394) // �Է¹��� ���ڰ� 0 - 9 �������� �˻�
		{
			input_array[arr[i]]++;
			i++;
		}
		else
		{
			printf("���ڸ� �߸� �Է��ϼ̽��ϴ�.\n");
		}



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
