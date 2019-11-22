#include <stdio.h>
#define SIZE 100

void read_array(int [], unsigned int);
void bubble_sort(int [], unsigned int);
void print_array(int [], unsigned int);

int main(void)
{
	unsigned int n = 0;
	int na[SIZE] = {0};
	printf("Enter the number of numbers you would like to sort: ");
	scanf("%u", &n);
	read_array(na, n);
	bubble_sort(na, n);
	print_array(na, n);
}

void read_array(int na[], unsigned int n)
{
	printf("Enter %u numbers: ", n);
	for(int i = 0; i < n; ++i) scanf("%d", &na[i]);
}

void bubble_sort(int na[], unsigned int n)
{
	for(int i = 0; i < n; --n)
		for(int i = 0; i < n-1; ++i)
			if(na[i] > na[i+1]){
				int temp = na[i];
				na[i] = na[i+1];
				na[i+1] = temp;
			}
}

void print_array(int na[], unsigned int n)
{
	for(int i = 0; i < n; ++i) printf("%d ", na[i]);
	puts("");
}
