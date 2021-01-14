#include <stdio.h>
 
int main()
{
    // Khai bao mang a gom 4 so 
    int a[4] = {3,5,7,2};
    int s = 0;
    
    // Dung vong lap for
    for(int i=0; i<4; i++)
    {
   // Hien thi cac so trong mang a 
        printf("%d\n", a[i]);
        s +=a[i];
    }
 	      printf ("tong =%d\n",s);
  // Xuat ket qua
    return 0;
}
