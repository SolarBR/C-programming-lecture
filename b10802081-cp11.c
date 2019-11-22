#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SIZE 100
double dist(double, double);
void bubble_sort(double [SIZE][2], double [SIZE], int);

int main(void)
{
  int n;
  double p[SIZE][2]; // �ŧi�I(x, y)�}�C�A��[i][0]:x�y�СA��[i][1]:y�y��
  printf("Enter numbers of points: "); // ���ܿ�Jn 
  scanf("%d", &n); // Ū�Jn 
  printf("Enter %d points: ", n); // ���ܿ�Jn���I 
  // Ū�Jn���I 
  for (int i = 0; i < n; i++) scanf("%lf%lf", &p[i][0], &p[i][1]);
  printf("The points are: ");
  // �C�Ln���I 
  for (int i = 0; i < n; i++) printf("(%lf, %lf) ", p[i][0], p[i][1]);
  puts("");
  
  // Question: Find the point farthest and nearest from the original point (0, 0).
  double d[SIZE] = {0};
  for (int i = 0; i < n; i++) d[i] = dist(p[i][0], p[i][1]);
  for (int i = 0; i < n; i++) printf("%f ", dist(p[i][0], p[i][1]));
  puts("");
  bubble_sort(p, d, n);
  printf("Nearet point: (%f , %f)\nFarest point: (%f , %f)", p[0][0], p[0][1], p[n-1][0], p[n-1][1]);
}

void bubble_sort(double p[SIZE][2], double d[SIZE], int n)
{
	for(int i=0; i<n; --n)
		for(int j=0; j<n-1; ++j)
			if(d[j]>d[j+1]){
				double tempx=p[j][0], tempy=p[j][1], tempd=d[j];
				p[j][0] = p[j+1][0]; p[j][1] = p[j+1][1]; d[j]=d[j+1];
				p[j+1][0] = tempx; p[j+1][1] = tempy; d[j+1]=tempd;
			}
}

double dist(double x, double y) {
  return sqrt(x * x + y * y);
}
