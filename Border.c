#include"INTRO.h"
#include<stdio.h>
int main(){
	char t = 't';
	for(int i=1;i<=25;i++)
	{
		
		
		for(int j=1;j<=100;j++)
		{
			
			if(i==1||i==25||j==1||j==100)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
			
		}
	
		printf("\n");
		
	}
	
	
	
	
	
	
	
}
