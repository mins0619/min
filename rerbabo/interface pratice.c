#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>



int menu_display(void);
void a(void);
void b(void);
void presskey(void);
int main(void)
{
	int c;
	while ((c = menu_display()) != 3)
	{
		
		switch (c)
		
		{
		case 1: a();
			Sleep(50000);
			break;
		
		case 2: b();
			
			break;
		
		default: break;
		}
	}
	return 0;
}
int menu_display(void)
{
	int select;
	system("cls");
	printf(" 바자관 화장실 장부 정리!!!!!!1 뚜뚠뚠 뚜둔\n\n");
	printf("1. 바자관 장부 입력\n");
	printf("2. 2번이상인 친구들만 출력 해볼까 ? \n");
	printf("3. 프로그램 종료\n\n");
	printf("메뉴번호 입력후 Enter>");
	scanf_s("%d", &select);
	return select;
}
void a(void)
{

		int arr[300], freq[300];
		int size, i, j, count;
		int input_array[10] = { 0,0,0,0,0,0,0,0,0,0 };

		/* 배열 크기 입력 */
		printf("몇번 화장실에 갔나요(대충 장부양식 보시고 계산기 돌려보십셔): ");
		scanf_s("%d", &size);

		/* 배열에 번호 입력 */
		printf("여기부터 번호 입력합시다. \n");
		for (i = 0; i < size;)
		{


			printf("[%d번째]1 - 394 숫자를 입력하세요: ", i + 1);
			scanf_s("%d", &arr[i]);


			if (arr[i] >= 1 && arr[i] <= 394) // 입력받은 숫자가 0 - 9 사이인지 검사
			{
				input_array[arr[i]]++;
				i++;
			}
			else
			{
				printf("숫자를 잘못 입력하셨습니다.\n");
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
void b(void)
{
	printf(" 제작자 주말 오후 조교 ");
}
void presskey(void)
{
	char c;
	fflush(stdin);
	printf("\n\n");
	printf("Enter를 누르면 메인 메뉴로...");
	scanf_s("%c", &c);
}
