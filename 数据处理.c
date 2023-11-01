#include <stdio.h>
#include <math.h>
int main()
{
	int i = 0;
	int len = 10;
	float sum = 0;
	//float a[5] = { 30.26,30.30,30.30,30.24,30.30 };  //游标
	float data[10] = { 0.010699999999999932, 0.011440000000000339, 0.00986000000000331, 0.010739999999998417, 0.009650000000000603, 0.010690000000003863, 0.009569999999996526, 0.010199999999997544, 0.009599999999998943, 0.010410000000000252 };
	for (i = 0; i < len; i++)
	{
		sum += data[i];
	}
	double p = sum / len;
	printf("平均%f\n", p);
	sum = 0;
	for(i = 0; i < 5; i++)
	{
		sum += pow((data[i] - p), 2);
	}
	int n = len;
	float s = pow(sum / (float)(n * (n - 1)), 0.5);
	printf("A：%f\n", s);


	double b = pow(3, 0.5);
	b = 0.01 / b;
	printf("B：%lf\n", b);
	double U = pow(s, 2) + pow(b, 2);
	U = pow(U, 0.5);


	printf("U：%lf\n", U);
	printf("E:%lf", U / p);
	return 0;
}
