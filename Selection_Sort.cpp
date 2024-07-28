//SELECTION_SORT
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
void Selection_Sort(int a[max],int n)
{
	int i,j,p=1,min,stored_index;
	for(int i=0;i<n-1;i++)
	{ 
	          min=a[i];
		for(int j=p;j<n;j++)
		{
			if(min>a[j])
			{
				min = a[j];
				stored_index = j;
				a[stored_index]=a[i];
		        a[i]=min;
			}
			printArray(a,n);
		printf("\n\n");
		}
		
		
		p++;
	}
}
int main()
{
	int a[max];
	int n;
    printf("Enter The Numbers of Elements : \n");
    scanf("%d",&n);
    inputArray(a,n);    //ENTER THE ELEMENTS IN AN ARRAY
    Selection_Sort(a,n);
    printf("THE SORTED ARRAY: \n");
    printArray(a,n);
}
