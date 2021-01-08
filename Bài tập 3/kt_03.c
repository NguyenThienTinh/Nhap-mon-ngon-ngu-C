
#include <stdio.h>

int main(void){
  for (int i = 1; i <= 10;i = i + 2){
  if((i == 5) || (i == 11) ||(i ==15 ))
  continue;


  printf("%d", i);

}
return 0;
}
