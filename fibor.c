#include<stdio.h>

int faktor(int n){
  if(n == 0) {
      return 1;
  }else{
      return n * faktor(n-1);
  }
}

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
  
    for(i = 0;i<n;i++) {
    printf("%d ", fib(i));
    }
  
    printf("\n");
  
    return 0;
  
}
