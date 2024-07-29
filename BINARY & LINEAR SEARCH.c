//LINEAR SEARCH
//BINARY SEARCH
#include<stdio.h>
#include<stdlib.h>
#define max 50
void inputArray(int a[max],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void Linear_Search(int a[max],int n)
{
	int target_value;
	printf("ENTER THE VALUE TO BE SEARCH :\n");
	scanf("%d",&target_value);
	int i;
	for(i=0;i<n;i++)
	{
		if(target_value==a[i])
		{
			printf("THE VALUE IS AT INDEX : %d",i);
			return ;
		}
	}
	printf("\nTHE VALUE IS NOT FOUND!\n");
}
void Bin_Search(int a[max],int n)
{
	int target_value;
	int l=0;
	int h=n-1;
	int mid = (l+h)/2;
	printf("ENTER THE VALUE TO BE SEARCH :\n");
	scanf("%d",&target_value);
	if(target_value==a[mid])
	{
		printf("THE VALUE IS AT INDEX : %d\n",mid);
		return ;
	}
	if(target_value<a[mid])
	{
		while(mid!=-1)
		{
			mid--;
			if(a[mid]==target_value)
			{
				printf("THE VALUE IS AT INDEX : %d",mid);
				break;
			}
		}
		printf("\nTHE VALUE IS NOT FOUND!\n");
	}
	if(target_value>a[mid])
	{
		while(mid!=n)
		{
			mid++;
			if(a[mid]==target_value)
			{
				printf("THE VALUE IS AT INDEX : %d",mid);
				break;
			}
		}
		printf("\nTHE VALUE IS NOT FOUND!\n");
	}
}
int main()
{
	int a[max];
	int n;  //no. of elements
	printf("ENTER THE NO. OF ELEMENTS :\n");
	    scanf("%d",&n);
	    printf("\nENTER THE ELEMENTS IN AN ARRAY :");
	    inputArray(a,n);
	int choice;

	while(1)
	{
		printf("\t\tMENU\n");
		printf("\t1.BINARY SEARCH\n");
		printf("\t2.LINEAR SEARCH\n");
		printf("\t3.EXIT\n");
		
	    printf("ENTER THE CHOICE WHICH YOU WANT\n");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
				{
					Bin_Search(a,n);
					break;
				}
			case 2:
				{
					Linear_Search(a,n);
					break;
				}
			case 3:
				{
					exit(1);
				}
			default:{
				printf("PLEASE CHOOSE A VALID OPERATION!\n");
				break;
			}
		}
		
	}

}
