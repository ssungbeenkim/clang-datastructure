#include <stdio.h>

int main() {
  int arr[2][3][4];  // 3차원 배열 선언
  int i, j, k, value = 1;
  // 3중 for문을 이용하여 3차원 배열에 값 대입하고 바로 출력
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++) {
      for (k = 0; k < 4; k++) {
        arr[i][j][k] = value;
        printf("\n arr[%d][%d][%d] = %d", i, j, k, arr[i][j][k]);
        value++;
      }
    }
  }

  return 0;
}