#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	scanf("%d",&n);
	int num[n];
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&num[i]);
	int *nPtr=num;
	for(i=0;i<n;i++)
		printf("%d ",nPtr[(n-1)-i]);
	puts("");
	system("pause");
	return 0;
}
