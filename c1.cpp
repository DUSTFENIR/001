#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int a=1;
	int b=5;
	int c=6;
	double x1; 
	double x2;
	double d;
	d=b*b-4*a*c;
	if (d>0)
	{
		x1=(-b+sqrt(d))/2*a;
		x2=(-b-sqrt(d))/2*a;
		printf("x1=%f,x2=%f\n",x1,x2);
	}
	else if(d==0)
	{
		x1=(-b)/2*a;
		x2=x1;
		printf("x1=x2=%f",x1) ;
	} 
	else
	{
		printf("wujie") ;
	} 
	return 0;
}

