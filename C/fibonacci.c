#include <stdio.h>

int main() {
  long int a,b,c;
  int n,cont;
  double r;

  printf("Enter how many terms of the Fibonacci sequence you want: \n");
  scanf("%d", &n);

  if (n <= 1) {
    printf("Error\n");
  }
  else {
    
    a = 1;
    b = 1;
    cont = 2;
    printf("\n\n1\n1\n");

    while(cont < n) {
      c = a + b;
      r = c;
      r = r/b;
      printf("%ld %.15lf\n", c, r);
      a = b;
      b = c;
      cont = cont + 1;
    }
  }

  return(0);
}