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
  
    printf("Geben sie n ein: \n");
    scanf("%d", &n);
  
    printf("Ergebnis von %i ist %i\n", n, fib(n));
  
    return 0;
  
}
