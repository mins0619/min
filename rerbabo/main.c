#include <stdio.h>
#include <string.h>



int main()
{
	int arr[300], freq[300];
	int size, i, j, count;

	/* 배열 크기 입력 */
	printf("몇번 화장실에 갔나요(대충 장부양식 보시고 계산기 돌려보십셔): ");
	scanf_s("%d", &size);

	/* 배열에 번호 입력 */
	printf("여기부터 번호 입력합시다. \n");
	for (i = 0; i < size; i++)
	{


		printf("[%d번째]1 - 394 숫자를 입력하세요: ", i + 1);
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
	printf("\n 화장실 이동횟수 : \n");
	for (i = 0; i < size; i++)
	{


		if (freq[i] != 0)
		{
			printf("%d 번이 %d 번 화장실에 갔습니다. \n\n", arr[i], freq[i]);
		}
	}

	return 0;
}


// 요일별정리 가능한지 저장할 수 있는지 몇번 이상시 출력 되도록 할 수 있는지 찾아보자 300줄 ;