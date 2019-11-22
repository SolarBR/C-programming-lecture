#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a,r,n;
	printf("Enter a, r, and n\na=");
	scanf("%d",&a);
	printf("r=");
	scanf("%d",&r);
	printf("n=");
	scanf("%d",&n);
	
	int counter=1;
	int sum=0;
	int an=a;
	
	while(counter<=n+1){
		sum += an;
		an*=r;
		counter++;
	}
	
	printf("Sum is %d",sum);
	system("pause");
}
