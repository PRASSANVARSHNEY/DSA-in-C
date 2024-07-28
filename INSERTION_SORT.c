//INSERTION_SORT
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
void Insertion_Sort(int a[max],int n)
{
	int i,j,key;
    for(i=1;i<n;i++)
    {
    	key=a[i];
    	j=i-1;
    	while(j>-1 && a[j]>key)
    	{
    		a[j+1]=a[j];
    		j=j-1;
		}
		a[j+1]=key;
		printf("\n");
		printArray(a,n);
	}
}
int main()
{
	int a[max];
	int n;
	printf("ENTER THE NUMBER OF ELEMENTS:\n");
	scanf("%d",&n);
	inputArray(a,n);
	Insertion_Sort(a,n);
	printArray(a,n);
	return 0;
}
