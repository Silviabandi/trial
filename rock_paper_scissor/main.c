/*Rock Paper Scissor game in C programming*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	time_t t1; //time variable

	int player;

	//number of turns
	int i=0;
	//computer score initially 0
	int c=0;
	//player score initially 0
	int p=0;

    printf("\t *Welcome to Rock Paper Scissor*\n");
	//Loop used for 5 Rounds of the game
    while(i<5)
	{
	printf("\t----------------------------------\t\n");
      printf("\t\t Entering Round %d !!\n\n",i+1);
      printf("\t\t---------------------\t\t\n");
	printf("\t\t Enter the option   \t\t\n");
	printf("\t\t*********************\t\t\n");
	printf("\t\t 0 - For Rock! \n \t\t 1 - For Paper! \n \t\t 2 - For Scissor! \n");

    //selection by user
    printf("\n\t\t");
	scanf("%d",&player);

	//switch begin
	//depending upon the option player choosen
	switch(player)
	{
        case 0: printf("\t\tPlayer - Rock\n");
	            break;
	    case 1: printf("\t\tPlayer - Paper\n");
	            break;
	    case 2: printf("\t\tPlayer - Scissor\n");
	            break;
        default:
                printf("\t\tInvalid case!!\n");
	}
	//switch ended

	//computer choice
	srand((unsigned)time(&t1));
	int compturn= (rand()%100)%3;
	//switch begin
	//depending upon the option computer choosen
	switch (compturn)
	{
    case 0: printf("\t\tComputer - Stone\n");
	        break;
	case 1: printf("\t\tComputer - Paper\n");
	        break;
	case 2: printf("\t\tComputer - Scissor\n");
	        break;
	}
	//switch end

//Decision making started for the results
	// 0=rock 1=paper 2=Scissor

	if(player==0 && compturn==1)
	{
	    printf("\t\tComputer Wins Round %d!!\n\n",i+1);
	    c++;         // this is done to count the no. of wins
                    //by computer
	}
	else if(player==1 && compturn==0)
	{
        printf("\t\tPlayer Wins Round %d!!\n\n",i+1);
	    p++;         // this is done to count the no. of wins
                    //by player
	}
    else if(player==0 && compturn==2)
	{
	    printf("\t\tPlayer Win	s Round %d!!\n\n",i+1);
	    p++; //player wins score incremented
	}
	else if(player==2 && compturn==0)
	{
	    printf("\t\tComputer Wins Round %d!!\n\n",i+1);
	    c++; //computer wins score incremented
	}
	else if(player==2 && compturn==1)
	{
	    printf("\t\tPlayer Wins Round %d!!\n\n",i+1);
        p++; //player wins score incremented
	}
	else if(player==1 && compturn==2)
	{
	    printf("\t\tComputer Wins Round %d!!\n\n",i+1);
	    c++; //computer wins score incremented
	}
	else
		printf("\t\tIts a Draw Nobody Wins in Round %d!!\n\n",i+1);
	    i++; //since its a draw.
	         //incrementing the chance
	}
	//while loop ends

	//final score estimation
	printf("\t\t -----------------\n");
    printf("\t\t|   Final Score   |\n");
    printf("\t\t-----------------\n");
    printf("\t\t|  You | Computer |\n");
    printf("\t\t|------|----------|\n");
    printf("\t\t|   %d |    %d     |\n",p,c);
    printf("\t\t -----------------\n\n");

    //declaring the winner
	if(c>p)
	{
		 printf("\n\"Winner--> Computer!!\" \n Score %d-%d",p,c);
	}
	else if(c<p)
	{
		 printf("\n\"Winner--> Player!!\" \n Score %d-%d ",p,c);
	}
	else
	{
		 printf("\nDraw!!");
	}
return 0;
}
