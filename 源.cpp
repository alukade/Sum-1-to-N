#include<stdio.h>

int sum(int n);

int sum(int n)//�β�
{
	int sum = 0;

	do
	{
		sum += n;
	}
	while (n-- > 0);//ֻҪ��n-1����ֵ>0����Ϊ�棬��Ҫִ��do���Ⱦ�Ҫִ��һ�ι�

	return sum;

}
int main()
{
	int n;

	printf("������n��ֵ:");
	scanf_s("%d", &n);
    printf("1+2+3+...+(n-1)+n�Ľ����:%d\n", sum(n));//ʵ��

}