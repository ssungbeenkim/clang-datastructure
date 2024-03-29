#include <stdio.h> // 헤더파일을 포함한다.
/* 
#: preprocessor 
include: 헤더파일을 포함한다. 
studio.h: io 관련된 함수들이 있는 헤더파일
*/

int main(void) 
{
	printf("Hello World!\n"); // 줄바꿈
  printf("Nice Day!\t"); // tap

  int grade = 3; // int:정수형 grade:변수 // 4byte
  char Letter = 'Y'; // 문자 '' 따옴표를 넣어야 한다. // 1byte 8bit 문자열은 ""
  double cost = 34.567;// 실수 // 8byte
  // int는 4byte, char는 1byte, double은 8byte


  printf("\n"); 
  // 서식문자 %d: 정수형, %c: 문자형, %f: 실수형, %g: 실수형
  // %f와 %g의 차이는 소숫점 이하 자리수가 다르다. %f는 6자리, %g는 6자리 이하로 표현한다.
  printf("구구단은 %d 학년 때 외워요.\n",grade); // %d(decimal. 정수형 출력)에 3이 들어감 
  printf("알파벳은 %c입니다.\n",Letter);
  printf("용돈은 달러로 %5.2f입니다.\n",cost); // 용돈은 달러로 34.57입니다. 5자리, 소숫점 이하 2자리이하 반올림
  printf("용돈은 달러로 %10.3f입니다.\n",cost); //용돈은 달러로      34.567입니다.

  int score = 30;

  if (score >= 95) {
    printf("A+입니다.\n");
  } // 세미콜론을 넣지 않는다. 
  else if (score >=90)
    printf("A입니다.\n"); // * 실행 코드가 한줄이면 생략이 가능 but 중괄호 쓰는 습관을 들이는게 좋음
  else 
    printf("B입니다.\n");

  int num = 5; // = 대입연산자 

  if(num == 10){ // == 비교연산자
    printf("당첨입니다\n"); // if문에 해당하는 것은 중괄호 쓰지 않으면 바로 아래 한줄만 해당하게 된다. 
    printf("10입니다\n");
  }
  else printf("꽝입니다.");

  if(num == 10) // == 비교연산자
    printf("당첨입니다\n"); // if문에 해당하는 것은 중괄호 쓰지 않으면 바로 아래 한줄만 해당하게 된다. 
    printf("10입니다\n");
  
  return 0; // 프로그램 종료. 
}
