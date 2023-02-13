#include"INTRO.h"

	void colorit(int col)
	{                  
		HANDLE hstdout;
		hstdout = GetStdHandle( STD_OUTPUT_HANDLE );
		                                //12=red, 15=white---------------->this.colorit(12);  this.colorit(15);
        SetConsoleTextAttribute( hstdout, col );
    }

	void showmenu()
	{
		
    	int index=1;
    	int key=0;
        
        system("cls");
        while(key!=13){
        gotoxy(3,3);
        colorit(15);
        printf("\t\t\t\t\tTYPING TUTOR");//cout<<key<<"---"<<index;
        gotoxy(3,4);
        printf("\t\t\t\t\t==============");
        gotoxy(3,6);
        colorit(15);
        if(index==1){colorit(12);}
        printf("\t\t\t\t\tStart GAME");
        gotoxy(3,8);
        colorit(15);
        if(index==2){colorit(12);}
        printf("\t\t\t\t\tRESUME GAME");
        gotoxy(3,10);
        colorit(15);
        if(index==3){colorit(12);}
        printf("\t\t\t\t\tHIGH SCORE");
        gotoxy(3,12);
        colorit(15);
        if(index==4){colorit(12);}
        printf("\t\t\t\t\tDIFFICULTY LEVEL");
        gotoxy(3,14);
        colorit(15);
        if(index==5){colorit(12);}
        printf("\t\t\t\t\tEXIT");
        /////////////UP=224/72 Down=224/80 Enter=13
        key=getch();
        if(key==80){index++;}
        else if(key==72){index--;}
        if(index==6){index=1;}
        if(index==0){index=5;}
        }
        
		if(index==1)
		{
			system("cls");
            printf("\n\n\n\nPRESS ANY KEY TO GO BACK TO MAIN MENU...");
			getch();
            showmenu();
		}
        
		else if (index==2)
		{
          	system("cls");
        	printf("\n\n\n\nPRESS ANY KEY TO GO BACK TO MAIN MENU...");
			getch();
            showmenu();
        }
        
		else if (index==3)
		{
			system("cls");
            printf("\n\n\n\nPRESS ANY KEY TO GO BACK TO MAIN MENU...");
			getch();
            showmenu();
			               
        }
        
		else if (index==4)
		{
			system("cls");
            printf("\n\n\n\nPRESS ANY KEY TO GO BACK TO MAIN MENU...");
			getch();
            showmenu();
        }
        
		else if (index==5)
		{
           system("taskkill/IM ConsolePauser.exe");
        }
    }

         
int main()
{
	Intro();	
    showmenu();

}
