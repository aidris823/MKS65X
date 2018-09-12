#include <stdio.h>
#include <stdlib.h>

int main(){
  int ans = 0;
  int i;
  for (i = 0; i < 1000; i++){
    if ((i % 3 == 0) || (i % 5 == 0)){
      ans += i;
    }
  }
  printf("Sum of multiples: %d \n",ans);
}
