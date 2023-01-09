#include<stdio.h>

int fib(int n){
  
  if (n == 0 || n == 1) {
      return n;
    
  } else {
      return fib(n-1)+fib(n-2);
  }
}

int main() {
  
    int n;
    int i;
  
    printf("Geben sie n ein: \n");
    scanf("%d", &n);
  
    for(i = n;i>=0;i--) {
    printf("%d ", fib(i));
    }
  
    printf("\n");
  
    return 0;
}
