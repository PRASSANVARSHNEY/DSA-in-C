//Insertion sort
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define max 10
void inputarray(int a[max],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void outputarray(int a[max],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
void insertionsort(int a[max],int n)
{
	int i, element, j;
    for (i = 1; i < n; i++) {
        element = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > element) {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = element;
    }
}
void bubblesort(int a[max],int n)
{
	int i, j,temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                   a[j] = a[j+1];
                   a[j+1] = temp;
            }
        }
    }
	
}
void selectionsort(int a[],int n)
{
int mini,min, temp, i,j;
for(i=0;i<n-1;i++)
{
	min = a[i];
	mini=i;
	for(j=i+1;j<=n-1;j++)
	{
		if(min>a[j])
		{
			min = a[j];
			mini = j;
		}
	}
	if(i!=mini)
	{
		temp = a[i];
		a[i] = a[mini];
		a[mini] = temp;
	}
	}	
}
int main()
{
	int a[max];
	int ch;
	int n;
	while(1)
	{
		system("cls");
		printf("\t\t\tUSING INSERTION SORT \n");
		printf("\t\t\tUSING BUBBLE SORT\n");
		printf("\t\t\tUSING SELECTION SORT\n");
		printf("\t\tEXIT\n");
		printf("\tENTER YOUR CHOICE:\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				{
					//INSERTION SORT
					printf("ENTER THE NO. of ELEMENTS\n");
	                scanf("%d",&n);
	                inputarray(a,n);
	                insertionsort(a,n);
	                outputarray(a,n);
	                break;
				}
			case 2:
				{
					//INSERTION SORT
					printf("ENTER THE NO OF ELEMENTS\n");
					scanf("%d",&n);
					inputarray(a,n);
					bubblesort(a,n);
					outputarray(a,n);
					break;
					
				}
			case 3:
			   {
			   	    //selection sort
                    printf("ENTER THE NO OF ELEMENTS\n");
					scanf("%d",&n);
					inputarray(a,n);
					selectionsort(a,n);
					outputarray(a,n);
					break;
			   	
				   }
			case 4:
				{
					exit(1);
				}
		    default :
			{  
			   printf("PLEASE CHOOSE THE INVALID OPTION.");
				break;
				}
				getch();	
		}
		getch();
	}
	
	
}

