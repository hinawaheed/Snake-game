#include<Stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
void body();

void beginner();
void modertae();
void expert();
void delay();
void snake();
void random();
void over();
void loading();
void display(void);
void name();
int steps=0;

char b[25][120];
char i;
int r1[10],c1[10];
char names[100];
void welcome();
void snake();
void miss();
int r,c,y=4,z=4;
int life=3;
int score=0;
int missed=0;
char m;
void position(int row,int col);
int main()

{
	srand(time(NULL));
	print();
	
	welcome();
	
	char k[30];
	loading();
		
	snake();
	
	}
	void welcome()
	
	
	
	{
		
	printf("\t\t\t\tWELCOME TO SNAKE GAME\n\n1. You have to use the up, down, right or left arrows to move the snake.\n\n" 
"	 \n2.Foods are provided at the several co-ordinates of the screen for the snake to eat.Every time the snake eats the food, its length will by increased by one element along with the score"
"\n\n\n3.You can play 3 modes in  this game\n"
"i. Press b to selcect Beginner Mode\n\nii.Press m to select  Moderate Mode \n\niii.Press e to select Expert Mode\n\n"
"\n4. If you toched the border and if you miss the food three times you will loss\n \n\n5.You have three lifes if you touch the obstacle or missed food chunk or snake touched  it self you will lose one life .\n\n\n 6 If you touched the border you will lose game directly ");
printf("\n\n\nType the letter(lower case) and press Enter to select the mode:");
	scanf("%c",&m);
	system("cls");
	if(m=='b')
	{
	
	printf("\t\t\tWelcome to BEGINNING mode\n");
	
}
if(m=='e')
{
	printf("\t\t\tWeclcome to EXPERT Mode\n");
}
if(m=='m')
{
	printf("\t\t\tWelcome TO MODERATE Mode\n");
}
	printf("\t\tEnter your name:");
	
	scanf("%s",names);
	
	

}
		
		   void position(int row,int col)
		   {int i=0;
		   		
		   		
		   		if(m=='b')
		   		{
				beginner();
			   if(row==6 &&col==8 || row==12 && col==20 || row==18 && col==50 || row==22 && col==80)
				{
					life--;
				
					if(life==0)
					{
					
					over();
					exit(1);
				}}
			}
				if(m=='m')
				{
					moderate();
					if(row==7 &&col==20 || row==9 && col==50 || row==3 && col==35 || row==11 && col==61|| row==13 && col==40|| row==6 && col==20|| row==4 && col==61)
		
				{
				
	life--;
				
					if(life==0)
					{
					
					over();
					exit(1);
				}				
				}
			}
			int h;
				if(m=='e')
				{
					expert();
			if(row==3 &&col==20 || row==8 && col==19 || row==5 && col==35 || row==9 && col==39|| row==4 && col==30|| row==1 && col==20|| row==4 && col==27)
{
		life--;
				
					if(life==0)
					{
					
					over();
					exit(1);
				}
}
					
				}
				
		   
					while(r1[i]!=0)
					{
						
							if(row==0 || row==24 || col==0 || col==119 ||row==10||col==40 ||row==14||col==69)
						{
				
					life--;
					for(h=0; h<10000; h++);
				if(life==0)
				{
				over();
				exit(1);
				
				
				}
				
				
				}
			
						
						if(row==r1[i+1]&&col==c1[i+1]) 
						{
						
							
						life--;
								
				
			if(life==0)
			{
			
					over();
					
					exit(1);
					}				}
					
					
							i++;
					}
				
					i=0;
				if(row==y && col==z)
				{
					while(r1[i]!=0)
				{
						i++;
					}
					while(i!=0)
					{
						
						r1[i]=r1[i-1];
						c1[i]=c1[i-1];
						i--;
					}
			r1[0]=r;
            c1[0]=c;
           
           for(i=0; i<100; i++);
           random();
					
					
		
			}
				else
	{
		
					while(r1[i+1]!=0)
			{
			
						i++;
					}
					while(r1[i]!=0)
					{
						
						r1[i]=r1[i-1];
						c1[i]=c1[i-1];
						i--;
					}
						
			r1[0]=r;
            c1[0]=c;
			}
			for(i=0;r1[i]!=0;i++)
               
               {
			   
            
				   b[r1[i]][c1[i]]='*';
				   
			}
	if(m=='b')
	{

	
		b[6][8]='&';
		
		b[12][20]='&';
		b[18][50]='&';
		b[22][80]='&';
		}
		
			if(m=='m')
{
	
	b[7][20]='&';
	b[9][50]='&';
	b[3][35]='&';
	b[11][61]='&';
	b[13][40]='&';
	b[6][20]='&';
	b[4][61]='&';
}	
if(m=='e')
{
	
	b[3][20]='&';
	b[8][19]='&';
	b[5][35]='&';
	b[9][39]='&';
	b[4][30]='&';
	b[1][20]='&';
	b[4][27]='&';
}




		
		display();
		miss();	
	   }

	
	void snake()
	{
		
			if(m=='b')
	{
beginner();
}
if(m=='m')
{
	moderate();

}
if(m=='e')
{
	expert();
}
		r=6; c=6;
		b[6][6]='*';
		b[6][7]='*';

	if(m=='b')
	{
	
		b[6][8]='&';
		
		b[12][20]='&';
		b[18][50]='&';
		b[22][80]='&';
}
if(m=='m')
{
	
	b[7][20]='&';
	b[9][50]='&';
	b[3][35]='&';
	b[11][61]='&';
	b[13][40]='&';
	b[6][20]='&';
	b[4][61]='&';
}
if(m=='e')
{
	
	b[3][20]='&';
	b[8][19]='&';
	b[5][35]='&';
	b[9][39]='&';
	b[4][30]='&';
	b[1][20]='&';
	b[4][27]='&';
}

		r1[0]=r;
		c1[0]=c;
		r1[1]=r;
		c1[1]=c+1;
	
		display();
		char i;
	
		
			while(1)
			{
	int i=getch();
	
				switch(i)
				{
				
			case 75:  //LEFT
			{
				
				
				if(c-1!=c1[1])
				{
					c--;
					steps++;
					position(r,c);
					
				}
				break;
	}
				case 77:
				{		//RIGHT
				if(c+1!=c1[1])
				{
					c++;
					steps++;
					position(r,c);
				}
				break;
			}
				case 72 :
					{
					
				if(r-1!=r1[1])	//UP
				{
					r--;
					steps++;
				position(r,c);
				}
					break;
				}
				case 80 :
					{
					
				if(r+1!=r1[1])	//DOWN
				{
					r++;
					steps++;
					position(r,c);
				}	
					break;
			
		}
	}
}
}
void random()
{

	if(m=='b')
	{
		
	y=rand()%24+1,z=rand()%119+1;
		score++;


}
if(m=='m')
{
	y=rand()%14+1,z=rand()%69+1;
	score++;
	}	
	
	
	if(m=='e')
{
	y=rand()%9+1,z=rand()%39+1;
	score++;
	}	
	}    
int count=0,h;
void display(void)
{
	int i,j;
	system("cls");
		
		
	for(i=0;i<25;i++)
     {
     for(j=0;j<120;j++)
     {
     
		
     	printf("%c",b[i][j]);
     
}

printf("\n");

}
printf("\nScore=%d",score);
	printf("\n Life=%d",life);
	printf("\nMissed=%d",missed);
}

void delay()
{
	int q;
	for(q=0; q<100000000000; q++);
}





void loading()

{
	system("cls");
	int l;
	
	printf("\n\n\n\n\n\n\n\n\t\t\t\t\t Loading ");
	
	for(i=0; i<20; i++)

	{
	printf("!");
	for(l=0; l<100000000; l++);
	{
		
	}

}

	system("cls");
	

}

void name()
{
	printf(" :%s",names);
}
void over()
{
	system("cls");
	printf("Your score is %d\n",score);
	printf("You played well \n");
	
	printf("Better luck next time :  ");
	
	name();
	
	printf("\nCreated By: \t AVINASH SAHANI \n\n\t HINA WAHEED \n\n\t Ajaz Ali\n");
	
	printf("Press any key to exit game.....");
	getch();
}
void beginner()
{
	int i,j,k;
		
     for(i=0;i<25;i++)
     {
     	
     for(j=0;j<120;j++)
     {
     if(i==0||j==0||i==24||j==119)
     {
               b[i][j]='*';
 					
     }
 

     else if(y==i&&z==j)
             {
             	b[i][j]='F';
				  }
				       
else 
{
	b[i][j]=' ';
}

		   
		   }}
		   
	
	
}
moderate()
{
	
int i,j,k;
		
     for(i=0;i<15;i++)
     {
     for(j=0;j<70;j++)
     {
     if(i==0||j==0||i==14||j==69)
     {
               b[i][j]='*';
 					
     }
 
 
     else if(y==i&&z==j)
             {
             	b[i][j]='F';
				  }     
else 
{
	b[i][j]=' ';
}

		   
		   }}}
		   

void expert()
{

	
int  i,j,k;
		
     for(i=0;i<=10;i++)
     {
     for(j=0;j<=40;j++)
     {
     if(i==0||j==0||i==10||j==40)
     {
               b[i][j]='*';
 					
     }
 
 
     else if(y==i&&z==j)
             {
             	b[i][j]='F';
				  }     
else 
{
	b[i][j]=' ';
}

		   
		   }}}
	
void mode()
{
		if(m=='b')
	{
	
	system("cls");
	delay();


}
	if(m=='m')
	{
	



	printf("Welcome to Moderate Mode");}
		if(m=='e')
		
	{
	


		printf("Welcome to Expert Mode");
	}
	

}
print()
{

	
		printf("\n\n\n\n\n\n");
	printf("\t\t\t        #       #          #        #         #   #     # # # # #   \n");
	printf("\t\t\t       #        # #        #       # #        #  #      #           \n");
	printf("\t\t\t      #         #   #      #      #   #       # #       #           \n");
	printf("\t\t\t        #       #     #    #     #     #      ##        # # # # #   \n");
	printf("\t\t\t          #     #       #  #    #########     #  #      #           \n");
	printf("\t\t\t         #      #        # #    #        #    #   #     #           \n");
	printf("\t\t\t      #         #          #   #          #   #     #   # # # # #   \n");
	
	printf("\n\n\n");

	
	
	printf("\t\t\t   ############           #         #                    #       #########  \n");
	printf("\t\t\t   #                    #  #        #  #             #   #       #          \n");
	printf("\t\t\t   #                   #     #      #   #           #    #       #########  \n");
	printf("\t\t\t   #       #######     #######      #      #    #        #       #                 \n");
	printf("\t\t\t   #           #     #         #    #     #     #        #       #          \n");
	printf("\t\t\t   #############    #           #   #       # #          #       #########  \n");	

	
	
	
	
	
	
	printf("Press any key to continue");
	getch();
	
	system("cls");
	
	
	
}
		   
void miss()
 {
if(steps==60)
{
	missed++;
	life--;
	steps=0;
	random();
	score--;
	
	if(life==0 || missed==3)
	{
		printf("You Lose\nYou missed three food chunks\n");
			over();
		exit(1);
	
	}
	 } 	
 }

