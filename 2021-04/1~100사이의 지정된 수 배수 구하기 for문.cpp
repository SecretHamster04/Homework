#include <stdio.h>
int main() // 1부터 100사이의 지정된 숫자의 값의 배수를 출력하는 프로그램
{
	int a,sum; // 정수형 변수 2개 지정
	sum=0; // sum 변수의 값을 0으로 변경

	for (a=1;a<=100;a++) // a의 숫자가 100이 될때까지 더하기 (반복)
	{
	if (a%3==0) // 만약 a 나누기 3 = 0이라면 sum에다가 a를 더하기
		   sum = sum + a;
	}
	printf("1부터 100사이의 3의 배수의 합은 %d 입니다.",sum); // 결과 출력
	return 0;
}


