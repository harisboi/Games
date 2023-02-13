#include<stdio.h>
#include <time.h>
#include <conio.h>
#include <windows.h>
int score=0;
int lives;
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main(){
//	static int score=0;
	char t = 't';
	char playerInput;
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
		
		
	for(;;){
	char x_cord=rand()%70;
	for(int i=1;i<=25;)
	{
		;	
		srand(time(NULL));
        gotoxy(x_cord,i);
        putch(t);
        
		Sleep(100);
	//	system("cls");
		gotoxy(x_cord,i);
        putch(' ');	
        if(kbhit()){
        	playerInput=getch();
        	if(playerInput==t){
        		t = 'a' + rand()%26;
        		putch(' ');
        		//i= 0;
        		//continue;
        		score++;
        		break;
        		
			}
		}
		gotoxy(2,2);
        printf("%d",score);
//		if(i == 20)
//		{
//			system("cls");
//			printf("GAME OVER");
//			break;
//		}  
	   i++;
	}
}			
	
}
