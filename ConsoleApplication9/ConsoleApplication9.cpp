#include <iostream>

using namespace std;

void Insert(int array[], int n)
{
	int x;
	int i;
	int j;

	for (i = 1; i < n; i++)
	{
		x = array[i];
		for (j = i - 1; j >= 0 && array[j] > x; j--)
		{
			array[j + 1] = array[j];
		}
		array[j + 1] = x;
	}


}

int main()
{
	/*
	  O(n^2) -> 거품 정렬 < 선택 정렬 < 삽입 정렬
	  시간 복잡도 순서와 효율성

	*/
	/*
	int array[] = { 99,23,94,45,38 };
	int n = sizeof(array) / sizeof(array[0]);

	Insert(array, n);

	for (int i = 0; i < n; i++)
	{
		printf("%d\n", array[i]);
	}
	*/

	/*
	거꾸로 읽는 문자열 비교

	  입력 A와 입력B를 설정

	  A에게 <- 3ㅐ의 숫자만 입력
	  B에ㅔ <- 3개의 숫자만 입력

	  A가 159 <- 951
	  B가 734 <- 437

	  A와 B의 값알 비교
	  A가 크면 A가 입력한 숫자의 거꾸로 된 숫자를 출력
	  B가 크면 B가 입력한 숫자의 거꾸로 된 숫자를 출력

	*/

	string value_1;
	string value_2;

	cin >> value_1 >> value_2;

	string temp;

	for (int i = value_1.length() - 1; i >= 0; i--)
	{
		if (value_1[i] > value_2[i])
		{
			temp = value_1;
			break;
		}
		else if (value_1[i] < value_2[i])
		{
			temp = value_2;
			break;
		}
	}


	for (int i = value_1.length() - 1; i >= 0; i--)
	{
		cout << temp[i];
	}
}