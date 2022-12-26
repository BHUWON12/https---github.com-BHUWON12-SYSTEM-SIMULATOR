#include<iostream>
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<windows.h>
#include<pthread.h>
#include<graphics.h>
#include<math.h>
using namespace std;
int c;
file()
{
    system("start http://localhost/pst/");
}
//gmail open link
mail(){
system("start https://mail.google.com/");}
//web whatsapp open link
whatsapp()
{
system("start https://web.whatsapp.com/");
}
//twitter open link
void twitter()
{
system("start https://twitter.com/");
}
//facebook open link
void facebook()
{
system("start https://www.facebook.com/");
}
//instagram open link
void insta()
{
system("start https://www.instagram.com/");
}
//google chrome open link
Gchrome()
{
    system("start https://www.google.com/"); 
}

 void reset()// for  switching the text color white from any color  
 {
    printf("\033[0m");
 }

void red()// red color code
{
    printf("\033[1;31m");
    
}
void purple()//purple color code
{
    printf("\033[1;35m");
}


void green()//green color code
{
    printf("\033[1;32m");
   
}

void blue()// blue color code
{
    printf("\033[1;34m");
}

void yellow()// yellow color code
{
    printf("\033[1;33m");
}

int load()// to show the loading of the system
{
    int i;
while(1)
{
    green();
    printf("\n");
    printf("\n");
    printf("\t");  
    printf("\t");  
    printf("\t");
printf("LOADING\t");
reset();
for(i=0;i<3;i++)
{
    blue();
     Beep(1000,500);
    
      printf(">>>\t");

     Beep(4000,500); reset();
}
system("cls");// to clear the screen
break;
}} 
int login()// to make a login password system 
{
    int pass,i,a=5;
    while(1)
    {
        green();
      printf("\nENTER SYSTEM 4 DIGIT PIN:- ");
      scanf("%d",&pass);
      if(pass==2812)
      {
        printf("\n\tACCESS GRANTED [DONE]\n",Beep(4000,1200));
      blue(); 
      
      for(i=0;i<4;i++)
        {
        blue();
     printf("LOADING");
     sleep(1); 

        system("cls"); }
             
        reset();
      break;
      }
      else{ 
        c++;
        red();
        printf("\tPASSWORD WRONG  !!",Beep(800,1200));reset();
        
        purple();
        printf("\nYou have only:%d chance to login \n",a=a-1);reset();
      }
      if (c==5)
    {
        red();
        Beep(100,1000);
        printf("!!!!!..SYSTEM FALIOUR..!!!!!",Beep(5000,200)); // for exiting from the system
        reset();

        exit(1);
    }
        }
    
   }


int time()// to get time and date from the system
{
  time_t t;   // not a primitive datatype
    time(&t);
    
    printf("\nDate&Time: %s",ctime(&t));
}
int timebatt()// for calling the time function  and another sub-main for getting battery status from the system
{
     printf("\t");
     printf("\t");
     printf("\t");
     
    time();
    
    SYSTEM_POWER_STATUS spsPwr;
    if( GetSystemPowerStatus(&spsPwr) ) {
        cout << "\nAC Status : " << static_cast<double>(spsPwr.ACLineStatus)
             << "\nBattery Life % : " << static_cast<double>(spsPwr.BatteryLifePercent)
             << endl;
             printf("\n");
     printf("\n");
        return 0;
    } else 
    return 1;}


void timerr()// for timer watch
{
int seconds=0,minutes=0;
while(1)
{
    seconds++;
    if(seconds>=59)
    {
        minutes++;
        seconds=0;
    }
   /* if(hours>23)
    {
        hours=0;
        minutes=0;
        seconds=0;
    }*/
    green();
    printf("TIMER:-  %d:%d\n Max 2min limit",minutes,seconds);
    reset();
     sleep(1);
     system("cls");
     if(minutes>=2)
        exit(1);
}}

int calculator()  
{  
    // declaration of local variable op;  
    int op, n1, n2,i;  
    float res;  
    char ch;  
    do  
    {  
        // displays the multiple operations of the C Calculator 
        purple(); 
        printf (" Select an operation to perform the calculation in C Calculator: ");  
        printf (" \n 1 Addition  \t \t 2 Subtraction \n 3 Multiplication \t 4 Division \n 5 Square \t \t 6 Square Root \n 7 Exit \n \n Please, Make a choice ");      
          reset();
        scanf ("%d", &op); // accepts a numeric input to choose the operation  
      
      
    // use switch statement to call an operation  
    switch (op)  
    {  green();
        case 1:  
            // Add two numbers 
            green(); 
            printf (" You chose: Addition");  
            printf ("\n Enter First Number: ");  
            scanf (" %d", &n1);  
            printf (" Enter Second Number: ");  
            scanf (" %d", &n2);  
            res = n1 + n2; // Add two numbers  
            printf (" Addition of two numbers is: %.2f", res);  
            break; // break the function  
            reset();
              
        case 2:  
            // Subtract two numbers
            green();  
            printf (" You chose: Subtraction");  
            printf ("\n Enter First Number: ");  
            scanf (" %d", &n1);  
            printf (" Enter Second Number: ");  
            scanf (" %d", &n2);  
            res = n1 - n2; // subtract two numbers  
            printf (" Subtraction of two numbers is: %.2f", res);  
            break; // break the function  
              reset();
        case 3:  
            // Multiplication of the numbers  
            green();
            printf (" You chose: Multiplication");  
            printf ("\n Enter First Number: ");  
            scanf (" %d", &n1);  
            printf (" Enter Second Number: ");  
            scanf (" %d", &n2);  
            res = n1 * n2; // multiply two numbers  
            printf (" Multiplication of two numbers is: %.2f", res);  reset();
            break; // break the function  
              
        case 4:  
            // Division of the numbers  
            green();
            printf (" You chose: Division");  
            printf ("\n Enter First Number: ");  
            scanf (" %d", &n1);  
            printf (" Enter Second Number: ");  
            scanf (" %d", &n2);  
            if (n2 == 0)  
                {  reset();
                red();
                    printf (" \n Divisor cannot be zero. Please enter another value ");  reset();
                    scanf ("%d", &n2);        
                }  
            res = n1 / n2; // divide two numbers  
            printf (" Division of two numbers is: %.2f", res);  
            break; // break the function  
              
        case 5:  
            // getting square of a number  
            green();
            printf (" You chose: Square");  
            printf ("\n Enter First Number: ");  
            
            scanf (" %d", &n1);  
  
            res = n1 * n1; // get square of a number  
            printf (" Square of %d number is: %.2f", n1, res);  reset();
            break; // break the function  
              
        case 6:  
            // getting the square root of the number  
            printf (" You chose: Square Root");  
            printf ("\n Enter First Number: ");  
            scanf (" %d", &n1);  
              
            res = sqrt(n1); // use sqrt() function to find the Square Root   
            printf (" Square Root of %d numbers is: %.2f", n1, res);  
            break; // break the function  
              
        case 7:  
        red();
        for(i=0;i<3;i++)
        {
            printf (" Exiting -> from -> calculator"); 
            sleep(1); 
            system("cls");}   
            break; // break the function  
              
        default:  
        red();
            printf(" enter from the listed choices!! ");reset();  
            break;                        
    }  
    blue();
    printf (" \n \n ************************************************************************************** \n ");  reset();
    } while (op != 7);  
  
    return 0;        
} 

int main ()
{
    int ch,i,s=0;
    load();
    login();
    while(1)
    {
        printf("\n");
        printf("\n");
        green();
    printf(".............................................................\n");reset();
       printf("\t"); 
        green();
    printf("Enter your choice from bellow list\n");reset();// to make the list of cases
    purple();
    printf(".............................................................");reset();
    printf("\n");                                               
     printf("\n");
     purple();
    printf("\n 1.[Check time and battery]\t2.calculator\t");
    red();
    printf("3.instagram\t");
    reset();
    blue();
     printf("\n");
     printf("\n");
    printf(" \n 4.facebook \t 5.twitter");
    reset();
    green();
    printf("\t6.whatsapp\n");
     printf("\n");
     printf("\n");
    printf("\n 7.Google chrome \t");
    reset();
    yellow();
    printf(" 8.Timer Watch \t");
    reset();
    green();
    printf("\t9.Gmail\t");
     printf("\n");
     printf("\n");
    reset();
    yellow();
     printf("\n");
     printf("\n");
    printf(" 10.PST \n");
     reset();
    printf("\n");
    green();
    printf("-------------------------------------------------------------");reset();
     printf("\n");
     printf("\n");
     printf("\t"); 
      printf("\t");
        printf("\t"); 
      printf("\t");
      red();

    printf("11.Shutdown System\n");reset();
    printf("\n");
     green();
    printf("-------------------------------------------------------------\n");
    reset();
    blue();
    printf("Enter your choice:-> to open the APP ---->>  ");reset();
          scanf("%d",&ch);
switch(ch)
{
    case 1:
    printf("\n");
    printf("\n");
    purple();
    printf("..............................................................\n");reset();
    green();
    timebatt();
    reset();
     break;
    case 2:
    calculator(); break;
    case 3:
    insta(); break;
    case 4:
    facebook();break;
    case 5:
    twitter(); break;
    case 6:
    whatsapp();break;
    case 7:
    Gchrome();break;
    case 8:
    timerr(); break;
    case 9:
    mail();break;
    case 10:
    file(); break;

    case 11:
    green();
    printf("\t");  
    printf("\t");  
    printf("\t");  
    printf("SYSTEM SHUTING-DOWN\n");
    printf("\n");
    for(i=0;i<3;i++){
    printf("<<<\n");
    Beep(600+s,1000);
    s=s+1500;}
    sleep(2);
    reset();
    
    exit(1); break;
    default:
    red();
    printf("\n");
    printf("\n");
    printf("\t");  
    printf("\t");  
    printf("\t");
    Beep(1000,600);
    printf("The system is under development mode,Listed features are only there!!\n"); 
    sleep(3);
    system("CLS");
    reset();
    sleep(1);
     printf("\n");
    printf("\n");
   red();
}

}
    
return 0;
}

