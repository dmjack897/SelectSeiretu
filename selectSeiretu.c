//선택정렬
#include<stdio.h>

int main()
{
	int arr[5]={3,1,5,4,2};
	int temp;
	int i,j;

	for(i=0;i<5;i++)
	{
		printf("%d  ",arr[i]);
	}
	printf("\n");
	printf("====================================\n");
	for(i=0;i<5;i++)   
	{
		for(j=i+1;j<5;j++) 
		{
			if(arr[i]>arr[j])
			{
				temp =arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		printf("%d  ",arr[i]);
	}
	return 0;
}