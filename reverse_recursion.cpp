#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
char strings(char s[100],int a,int start) 
{    
    
    if(a==start)
    {   
        s[a]='\0';
    	return s[a];
	}
	else
	{    
	    printf("%c",s[a-1]);
//	    a--;
		return strings(s,a-1,start);
		
	}
}
int main()
{     
     char s[100];
	 scanf("%[^\n]s",s);
	 int a;
	 a = strlen(s);
//	 strrev(s);
	 int start=0;
	 strings(s,a,start);
	 
	 
//	 printf("%d",a);
//	 printf("%s",s);
}
