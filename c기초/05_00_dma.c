#include <stdio.h>
#include <stdlib.h>  // malloc계열과 free 함수가 선언된 헤더 파일을 포함해준다.

int main(void) {
  int *pi;  // pointer intiger
  pi = (int *)malloc(sizeof(int));
  // 동적 메모리를 할당하고 int type으로 형변환해준 뒤 그
  // 메모리 주소의 첫번째 값이 pi의 값으로 저장된다.

  // malloc: 동적 메모리를 할당.
  // (int *): 형변환. 반환형이 void type 메모리를 int type 메모리로 변환해준다.
  // 실재로 malloc은 할당된 동적메모리의 첫번째 주소를 반환하는데, 이 주소를
  // 우리는 int 포인터로 쓴다. 그렇다면 (int **)는 int*형 동적메모리를 할당하고
  // 그 주소를 int**형 포인터로 저장한다는 뜻으로 볼 수 있을것이다.
  if (pi == NULL) {
    printf("동적 메모리 할당에 실패했습니다.\n");
    exit(1);
  }
  *pi = 100;  // 포인터 pi에 저장된 주소로 가서 100을 값으로 저장.
  printf("%d\n", *pi);  // 100
  printf("%d\n", pi[0]);  // 100 => c언어에서의 배열은 이런식으로 포인터로
                          // 만들어짐을 알 수 있다.
  free(pi);
  // 동적 메모리 사용 후에는 반드시 free 함수를 사용하여 메모리를 해제해야 한다.
  /*
  동적(dynamic)으로 생성한 메모리공간은 프로그램이 종료된다 해도 자동으로 해제가
  되지 않는다. 결국 수동으로 해줘야 하는데, 만약 프로그램이 종료되기 전까지
  해제하지 않는다면 이 메모리는 다른곳에서 계속 사용할 수 없게 된다. PC를
  종료할때까지 메모리를 점유하고 있는 것이다. 이러한 메모리를 메모리 누수(memory
  leak)라고 한다. 메모리 누수는 프로그램의 성능을 저하시키고, 결국에는
  프로그램이 비정상적으로 종료되는 원인이 된다."
   */
  return 0;
}

/*
동적 메모리는 포인터를 활용해서 메모리를 유연하고 효율적으로 관리할 수 있게
해준다.

* void* https://blog.naver.com/sharonichoya/220475194193
* 잘 정리된 블로그 : https://blog.naver.com/sharonichoya/220501158281
 */