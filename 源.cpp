#include<stdio.h>

int sum(int n);

int sum(int n)//形参
{
	int sum = 0;

	do
	{
		sum += n;
	}
	while (n-- > 0);//只要（n-1）的值>0，即为真，就要执行do。先就要执行一次哈

	return sum;

}
int main()
{
	int n;

	printf("请输入n的值:");
	scanf_s("%d", &n);
    printf("1+2+3+...+(n-1)+n的结果是:%d\n", sum(n));//实参

}