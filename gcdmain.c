#include <stdio.h>
#include <stdlib.h>
extern int gcd(int dividend, int divisor);

int main(int argc, char *argv[]){
  int dividend, divisor;
  if (argc != 3)
    fprintf(stderr, "Error: Must provide exactly 2 arguments.");
  if (atoi(argv[1]) < 0 || atoi(argv[2]) < 0)
    fprintf(stderr, "Error: both arguments must be positive.");
  if (argv[1] >= argv[2]){
    dividend = atoi(argv[1]);
    divisor = atoi(argv[2]);
  }
  else{
    dividend = atoi(argv[2]);
    divisor = atoi(argv[1]);
  }
  printf("The GCD is: %d\n", gcd(dividend, divisor));
  return 0;
}
