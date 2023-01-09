#include<stdio.h>

int berechne_ggT(int n, int m) {
  if (n == m) {
      return 1;
  } if else (n > m) {
      return ggT(n-m, m);
  } else {
      return ggT(n, m-n)
    }
}

int main() {
  
  int n, m, ggT;
  
    printf("Zahl 1: \n");
    scanf("%i", &n);
    printf("Zahl 2: \n");
    scanf("%i", &m);
  
    ggT = berechne_ggT(n, m);
  
    printf("der ggT lautet: %d\n", ggT);
  
    return 0;
  
}
  
    
  
  
