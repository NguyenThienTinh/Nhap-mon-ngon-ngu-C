//Khoi khai bao
#include <stdio.h>
int sum (int a, int b, int c);




//Khoi ham main
int main() {
  int x = 2 , y = 3 , z = 4;
  int tong = sum(x, y, z);
  printf("Tong la: %d ", tong);

  return 0;
}

//Khoi dinh nghia
int sum (int a, int b, int c){
  int e = a + b + c;
  return e;
}
