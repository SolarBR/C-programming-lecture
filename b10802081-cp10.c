#include <stdio.h>
#define SIZE 100

void read_array(int a[], int n) {
  for (int i = 0; i < n; i++) scanf("%d", &a[i]);	
}
void print_array(int a[], int n) {
  for (int i = 0; i < n; i++) printf("%d ", a[i]);	
  puts("");
}
/*
 * a[0]/0! + a[1]/1! + a[2]/2! + .. + a[n]/n!
 */
double sum(int a[], int n) {
  double sum = 0;
  for(int i = 0; i < n; ++i) sum += (double)a[i]/factorial(i);
  return sum;
} 

int factorial(int n){
	int result = 1;
	if(n == 0) return result;
	for(int i = 1; i <= n; ++i) result *= i;
	return result;
}
int main(void) {
  int a[SIZE], n;
  printf("Enter n: ");
  scanf("%d", &n);
  printf("Enter %d numbers: ", n);
  read_array(a, n);
  print_array(a, n);
  printf("sum = %f\n", sum(a, n));
}
