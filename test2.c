#include <stdio.h>

int main(){
  int x;
  int y;
  
  for(x= 2; x<3; x++){
    for(y=1; y<5; y++){
      printf("%d * %d = %d \n",x,y,x*y);
    }
  }

  return 0;
}
