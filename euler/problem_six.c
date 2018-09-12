#include <stdio.h>
#include <stdlib.h>

int main(){
  int square = 0;
  int i;
  for (i = 1; i <= 1000; i++){
    square += (i * i);
  }
  int sum = 0;
  for (int i = 1; i <= 1000; i++){
    sum += i;
  }
  sum *= sum;
  int ans = sum - square;
  printf("Sum Square: %d \n",ans);
}
  
