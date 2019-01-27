#include<stdio.h>

int binary(int n)
{
	int r, count=0;
	while(n>0)
	{
	r = n%2;
	if(r==1)
	count++;
	n = n/2;
	}
return count;
}

int main()
{
int item,z,i,flag=0,n;
printf("enter n :");
scanf("%d",&n);
item = n;
for(i=n-1;i>=1;i--)
{
	z = binary(i);
	if(item == (z+i))
	{
		flag = 1;
		break;
	}
}
if(flag == 1)
	printf("supported number\n");
else
	printf("blick number\n");
return 0;
}

