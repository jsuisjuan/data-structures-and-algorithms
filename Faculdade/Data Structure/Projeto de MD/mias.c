#include <stdio.h>
long int func(long int x){
  long int val = x;
  if(val > 50)
    val = val - 10;
  else
    val = val + 30;
  return val;
}


long int main() {
    long int n = 50;
    long int fodase = func(n);
    printf("%ld" ,fodase);
    return 0;
}