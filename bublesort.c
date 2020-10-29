#include<stdio.h>
void bubsort(int *,int);
int main()
{
	int i,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	bubsort(a,n);
	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}
}
void bubsort(int *arr,int n)
{
	int i,j,count=0;

	for(i=0;i<n;i++)
	{
		count++;
		for(j=i;j<n-1;j++)
		{
			count++;
			if(arr[i] > arr[j+1])
			{
				count++;
				int temp;
				temp=arr[i];
				arr[i]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("%d\n",count);
	
 } 