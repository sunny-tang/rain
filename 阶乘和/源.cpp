#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
long fac(int x)
{
	long y;
	for (y = 1; x > 0; x--)
		y = y*x;
	return y;
}
int main()
{
	long s, i;
    for (i = 1, s = 0; i <= 10; i++)
	s = s + fac(i);
	printf("s=%d\n", s);
	system("pause");
	return 0;
}






//long fac(int n)
//{
//	if (n < 0) { printf("n<0,data error"); return 0; }
//	else if(n == 0 || n == 1)  return 1;
//	else return(fac(n - 1)*n);
//}
//int main()
//{
//	int i, n, s;
//	printf("input a number:\n");
//	scanf("%d", &n);
//	if (n < 0)  printf("n<0,data error\n");
//	else if (n == 0 || n == 1)  printf("s=%d\n", 1);
//	else
//	{
//		for (i = 1, s = 0; i <= n; i++)
//			s = s + fac(i);
//		printf("s=%d\n", s);
//     }
//	
//	system("pause");
//	return 0;
//}
