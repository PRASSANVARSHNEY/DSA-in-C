//BUBBLE_SORTING
#include<stdio.h>
#define max 50
void inputArray(int a[max],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void printArray(int a[max],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
	}
}
void Bubble_Sort(int a[max],int n)
{
	int i,j,temp;
	int pass = n-1;
	for(i=0;i<pass;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
			printArray(a,n);
			printf("\n");
		
		}
		
		printf("\n\n");
	}
	
}
int main()
{
	int a[max];
	int n;
    printf("Enter The Numbers of Elements : \n");
    scanf("%d",&n);
    inputArray(a,n);    //ENTER THE ELEMENTS IN AN ARRAY
    Bubble_Sort(a,n);
    printf("THE SORTED ARRAY: \n");
    printArray(a,n);
}
