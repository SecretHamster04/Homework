#include <stdio.h>
int main()
{
	int a,sum; // 변수 a , sum 지정
	a = 0; // 변수 a = 1
	sum = 0; // 변수 sum = 0

	while(a<100) // 반복문 (while문) 작동 만약 a가 100보다 작거나 같으면 if문 실행
	{
	if ( (a%3) == 0 ) // 반복문 변수 a 나누기 3 = 0을 실행
		  sum = sum +a; // sum에다가 a의 값 추가하기
		    a++; // a에다가 1을 추가한 후 다시 while 문 돌리기
	}
	printf("1부터 100사이의 3의 배수의 합은 %d 입니다",sum); // 결과출
	return 0;
}

