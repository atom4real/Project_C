#include<bits/stdc++.h>
using namespace std;

//##############################################################################################################################################
void delay( int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock() );
}

//##############################################################################################################################################
//##############################################################################################################################################
void Intro()
{
	
	printf("++========================================================================++\n");
    printf("||                                                                        ||\n");
    printf("||                     **** What you want to know? ****                   ||\n");
    printf("||                                                                        ||\n");
    printf("||    1.) Factorial calculator                                            ||\n");
    printf("||    2.) SI Prefixes                                                     ||\n");                                                
    printf("||    3.) Calculator                                                      ||\n");
    printf("||    4.) Calculating Area                                                ||\n");
    printf("||    5.) Value of Min , Max and average                                  ||\n");
    printf("||                                                                        ||\n");
    printf("||                                                                        ||\n");
	printf("++========================================================================++\n");
	printf("\n");
	printf("\n");

	
}
//##############################################################################################################################################
int factorial()
{
	system("cls");
	printf("*=====================================*\n");
	printf("       Factorial calculator\n");
	printf("*=====================================*\n");
	printf("\n");
printf("Definition : The factorial function (symbol: !) \nsays to multiply all whole numbers from our chosen number down to 1.\n");
    printf("\n");

   int i,n;
   int fac=1;
   printf("Enter Number : ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
   	fac=fac*i;
   }
   printf("Result : %d",fac);
   
  
}
//##############################################################################################################################################
int SI_Prefixes()
{
system("cls");
	printf("                                   *=====================================*\n");
	printf("                                                SI Prefixes\n");
	printf("                                   *=====================================*\n");
	printf("\n");  
    printf("\n");
	printf("\n");
	
	printf("++===============================================================================================================++\n");
	printf("||          |              |              |                                           |                          ||\n");
    printf("||  Factor  |    prefiX    |    Symbol    |                 Decimal                   |       English word       ||\n");
    printf("||          |              |              |                                           |                          ||\n");
    printf("++===============================================================================================================++\n");
    printf("||  10^24   |    yotta     |      Y       |    1 000 000 000 000 000 000 000 000      |        septillion        ||\n");
    printf("||  10^21   |    zetta     |      Z       |      1 000 000 000 000 000 000 000        |        sextillion        ||\n");
    printf("||  10^18   |     exa      |      E       |        1 000 000 000 000 000 000          |        quintillion       ||\n");
    printf("||  10^15   |     peta     |      P       |          1 000 000 000 000 000            |        quadrillion       ||\n");
    printf("||  10^12   |     tera     |      T       |            1 000 000 000 000              |         trillion         ||\n");
    printf("||  10^9    |     giga     |      G       |              1 000 000 000                |         billion          ||\n");
    printf("||  10^6    |     mega     |      M       |                1 000 000                  |         million          ||\n");
    printf("||  10^3    |     kilo     |      k       |                  1 000                    |         thousand         ||\n");
    printf("||  10^2    |    hecto     |      h       |                    100                    |         hundred          ||\n");
    printf("||  10^1    |     deca     |     da       |                     10                    |           ten            ||\n");
    printf("||          |              |              |                                           |           one            ||\n");
    printf("||  10^-1   |     deci     |      d       |                     0.1                   |          tenth           ||\n");
    printf("||  10^-2   |    centi     |      c       |                    0.01                   |         hundredth        ||\n");
    printf("||  10^-3   |    milli     |      m       |                   0.001                   |        thousandth        ||\n");
    printf("||  10^-6   |    micro     |     mu       |                  0.000001                 |         millionth        ||\n");
    printf("||  10^-9   |     nano     |      n       |                 0.000000001               |         billionth        ||\n");
    printf("||  10^-12  |     pico     |      p       |                0.000000000001             |        trillionth        ||\n");
    printf("||  10^-15  |    femto     |      f       |               0.000000000000001           |       quadrillionth      ||\n");
    printf("||  10^-18  |     atto     |      a       |              0.000000000000000001         |       quintillionth      ||\n");
    printf("||  10^-21  |    zepto     |      z       |             0.000000000000000000001       |        sextillionth      ||\n");
    printf("||  10^-24  |    yocto     |      y       |            0.000000000000000000000001     |        septillionth      ||\n");
    printf("++===============================================================================================================++\n");



}

//##############################################################################################################################################
int Calculator(){
	int x,y;
	int a[x];
	int sum=0;
	int sum1=1;
	int sum2=1;
	
	system("cls");
	printf("*=====================================*\n");
	printf("            The Calculator\n");
	printf("*=====================================*\n");
	printf("\n");
	printf("***This is a simple calculator\n");
	printf("\n");
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("1.)Addition.\n2.)Subtraction.\n3.)Multiplication.\n4.)Division.\n");
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("\n");
	printf("Please select the options : ");
	int choiceC;
	scanf("%d",&choiceC);
	
	switch (choiceC)
	{
		case 1 :{
		         printf("You selected option 1 : Addition!\n");
		         delay(1000);
		         printf("Please wait a second!\n");
		         delay(1000);
		         printf("Loading...\n");
		         delay(1000);
		         system("cls");
		         printf("The Addition!\n");
		         printf("Please Enter Quantity of Number : ");
		         scanf("%d",&x);
		         printf("Enter Numbers : ");
		         for(int i=0 ; i<x ; i++){
		         	
		         	scanf("%d",&a[i]);
		         	sum = sum+a[i];
					 
				 }
		         
		         printf("Result : %d",sum);
		         
			break;
	    } 
				 
                
	case 2 : {
		         printf("You selected option 2 : Subtraction!\n");
		         delay(1000);
		         printf("Please wait a second!\n");
		         delay(1000);
		         printf("Loading...\n");
		         delay(1000);
		         system("cls");
		         printf("The Subtraction!\n");
		       printf("Enter Number : ");
		         scanf("%d%d",&x,&y);
		         printf("Result : %d",x-y);
		         
			break;
	    }			
				
	case 3 : {
		      printf("You selected option 1 : Multiplication!\n");
		         delay(1000);
		         printf("Please wait a second!\n");
		         delay(1000);
		         printf("Loading...\n");
		         delay(1000);
		         system("cls");
		         printf("The Multiplication!\n");
		         printf("Please Enter Quantity of Number : ");
		         scanf("%d",&x);
		         printf("Enter Numbers : ");
		         for(int i=0 ; i<x ; i++){
		         	
		         	scanf("%d",&a[i]);
		         	sum1 = sum1*a[i];
					 
				 }
		         
		         printf("Result : %d",sum1);
		
	 	    break;
	    }			
	
	
	case 4 :{
		     printf("You selected option 1 : Division!\n");
		         delay(1000);
		         printf("Please wait a second!\n");
		         delay(1000);
		         printf("Loading...\n");
		         delay(1000);
		         system("cls");
		         printf("The Division!\n");
		         printf("Enter Number : ");
		         scanf("%d%d",&x,&y);
		         printf("Result : %d",x/y);
		
		    break;
	    }
		
    }
				}
			


//##############################################################################################################################################
int Calculating_Area (){
	system("cls");
	int choiceShape;
	float w;
	float h;
	float z;
	printf("*=====================================*\n");
	printf("         Calculating Area\n");
	printf("*=====================================*\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("+############+\n");
	printf("#            #\n");
	printf("#            #\n");
	printf("#   SQUARE   #\n");     
	printf("#    (1)     #\n");
	printf("#            #\n");
	printf("+############+\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("+####################+\n");
	printf("#                    #\n");
	printf("#                    #\n");
	printf("#      RECTANGLE     #\n");
	printf("#         (2)        #\n");
	printf("#                    #\n");
	printf("+####################+\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("      +##############+\n");
	printf("     #              #\n");
	printf("    #              #\n");
	printf("   #    RHOMBUS   #\n");
	printf("  #      (3)     #\n");
	printf(" #              #\n");
	printf("+##############+\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("         +\n");
	printf("        ##\n");
	printf("       #  #\n");
	printf("      #    #\n");
	printf("     #      #\n");
	printf("    #        #\n");
	printf("   #   (4)    #\n");
	printf("  #  TRIANGLE  #\n");
	printf(" #              #\n");
	printf("+################+\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("      +##################+\n");
	printf("     #                   #\n");
	printf("    #                     #\n");
	printf("   #      Trapezoid        #\n");
	printf("  #          (5)           #\n");
	printf(" #                          #\n");
	printf("+###########################+\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("Please choose the number of shape\n");
	printf("Enter choice : ");
	scanf("%d",&choiceShape);
	
	switch (choiceShape)
	{
		case 1 :
		{
			printf("**You selected The \"SQUARE!\"\n");
			delay(1000);
		    printf("Please wait a second!\n");
		    delay(1000);
	        printf("Loading...\n");
            delay(500);
		    system("cls");
		    printf("+++++++SQUARE+++++++\n");
		    printf("\n");
		    printf("\n");
        	printf("+############+\n");
        	printf("#            #\n");
        	printf("#            #\n");
        	printf("#   SQUARE   #\n");     
        	printf("#            #\n");
        	printf("#            #\n");
        	printf("+############+\n");
        	printf("\n");
		    printf("Formula Area : width * height\n");
		    printf("Enter Width : ");
		    scanf("%f",&w);
		    printf("Enter Height : ");
		    scanf("%f",&h);
		    printf("Result : %.2f",w*h);
		    
		    
			break;
		}
		
		case 2 :
		{
		    printf("**You selected The \"RECTANGLE!\"\n");
			delay(1000);
		    printf("Please wait a second!\n");
		    delay(1000);
	        printf("Loading...\n");
            delay(500);
		    system("cls");
		    printf("+++++++RECTANGLE+++++++\n");
		    printf("\n");
		    printf("\n");
        	printf("+####################+\n");
        	printf("#                    #\n");
        	printf("#                    #\n");
        	printf("#      RECTANGLE     #\n");
        	printf("#                    #\n");
	        printf("#                    #\n");
	        printf("+####################+\n");
        	printf("\n");
		    printf("Formula Area : width * height\n");
		    printf("Enter Width : ");
		    scanf("%f",&w);
		    printf("Enter Height : ");
		    scanf("%f",&h);
		    printf("Result : %.2f",w*h);
			
			break;
		}
		
		case 3 :
		{
			printf("**You selected The \"RHOMBUS!\"\n");
			delay(1000);
		    printf("Please wait a second!\n");
		    delay(1000);
	        printf("Loading...\n");
            delay(500);
		    system("cls");
		    printf("+++++++RHOMBUS+++++++\n");
		    printf("\n");
		    printf("\n");
        	printf("      +##############+\n");
        	printf("     #              #\n");
        	printf("    #              #\n");
        	printf("   #    RHOMBUS   #\n");
        	printf("  #              #\n");
        	printf(" #              #\n");
        	printf("+##############+\n");
        	printf("\n");
		    printf("Formula Area : 1/2 * The_Product_Of_The_Diagonal By Multiplication\n");
		    printf("Enter Product of Diagonal : ");
		    scanf("%f",&h);
		    z=(0.5)*h;
		    printf("Result : %.2f",z);
		    
			break;
		}
		
		case 4 : 
		{
			printf("**You selected The \"TRIANGLE!\"\n");
			delay(1000);
		    printf("Please wait a second!\n");
		    delay(1000);
	        printf("Loading...\n");
            delay(500);
		    system("cls");
		    printf("+++++++TRIANGLE+++++++\n");
		    printf("\n");
		    printf("\n");
        	printf("         +\n");
        	printf("        ##\n");
        	printf("       #  #\n");
        	printf("      #    #\n");
        	printf("     #      #\n");
        	printf("    #        #\n");
        	printf("   #          #\n");
        	printf("  #  TRIANGLE  #\n");
        	printf(" #              #\n");
        	printf("+################+\n");
        	printf("\n");
		    printf("Formula Area : 1/2 * Base * height\n");
		    printf("Enter Base : ");
		    scanf("%f",&w);
		    printf("Enter Height : ");
		    scanf("%f",&h);
		    printf("Result : %.2f",w*h*0.5);
		    
			break;
		}
		
		case 5 :
		{
			printf("**You selected The \"PARALLELOGRAM!\"\n");
			delay(1000);
		    printf("Please wait a second!\n");
		    delay(1000);
	        printf("Loading...\n");
            delay(500);
		    system("cls");
		    printf("+++++++PARALLELOGRAM+++++++\n");
		    printf("\n");
		    printf("\n");
        	printf("      +##################+\n");
	        printf("     #                   #\n");
	        printf("    #                     #\n");
        	printf("   #      Trapezoid        #\n");
        	printf("  #          (5)           #\n");
        	printf(" #                          #\n");
        	printf("+###########################+\n");
        	printf("\n");
		    printf("Formula Area : 1/2 * Sum_of_base * Height\n");
		    printf("Enter Sum_of_base : ");
		    scanf("%f",&h);
		    printf("Enter Height : ");
		    scanf("%f",&w);
		    z=(0.5)*h*w;
		    printf("Result : %.2f",z);
			
			break;
		}
		
	}
	
		
}
//##############################################################################################################################################
int MinMaxAver(){
 
 system("cls");
 	printf("*==================================================*\n");
	printf("          Value of Min , Max and average\n");
	printf("*==================================================*\n");
	printf("\n");
	printf("\n");
 float sum = 0;
 int b; // n of num  
 float z;
 int min = 2000000000;
 int max = -2000000000;

printf("quantity of Number : ");
scanf("%d",&b);
     
     int a[b]; //XXXXXXXXXXX only this position
     
    for (int i = 1 ; i <= b ; i++) 
	{

        printf("Enter number %d : ",i);
        scanf("%d", &a[i]);
  
        sum = sum + a[i];
     
	    
        if (a[i] > max ) 
		{
            max = a[i] ;
        }

        if (a[i] < min ) 
		{
            min = a[i] ;
        }

     
    
    }
    z=sum/b;
    
    printf("\n******************************************\n\n");
    
    printf("Sum is : %.1f\n",sum);

    printf("Min is : %d \n", min);

    printf("Max is : %d\n", max);

    printf("average is : %.2f\n",z);


}

//##############################################################################################################################################
int main(){
	
	Intro();
	
//Variable	
	    int choice;
	    	  	
		
printf("Enter the choice : ");
scanf("%d",&choice);

	switch(choice)
	{
	
		
		case 1 : factorial();
		         break;
		case 2 : SI_Prefixes();
		         break;
	    case 3 : Calculator();
	             break;
	    case 4 : Calculating_Area();
	             break;
	    case 5 : MinMaxAver();
	             break;
    }
		
	

	
	return 0;
}
