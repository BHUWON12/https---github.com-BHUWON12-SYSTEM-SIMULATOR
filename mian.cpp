#include<iostream>
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<windows.h>
#include<pthread.h>
#include<string.h>
#include<math.h>
using namespace std;
int c;
void file()
{
    system("start http://localhost/pst/");
}
//gmail open link
void mail(){
system("start https://mail.google.com/");}
//web whatsapp open link
void whatsapp()
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
void Gchrome()
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
    char user[50],pass[50],i,c=5;
    while(1)
    {
        green();
        printf("\nENTER SYSTEM USERNAME:- \n");
        scanf("%s",&user);
        printf("ENTER YOUR PASSWORD :- ");
        scanf("%s",&pass);
        if(!strcmp (pass,"acharya@123"))
        {
            if(!strcmp(user,"acharya"))
            { 
                printf("\n\tACCESS GRANTED [DONE]\n",Beep(4000,1200));
                blue(); 
                for(i=0;i<4;i++)
                {
                    blue(); 
                    printf("LOADING MENU->->\n");
                    sleep(1); 
                    system("cls");      
                    reset();
                }
                break;
            }
        }
        else
        {
            red();
            Beep(800,1200);
            printf("DATA INVALID\n TRY AGAIN!!\n");reset(); 
            purple();
            printf("\nYou have only:%d chance to login \n",c=c-1);reset();
        }
        if(c==0)   
        {
            red();
            Beep(100,1000);
            printf("!!!!!..SYSTEM FALIOUR..!!!!!\n",Beep(5000,200)); // for exiting from the system
            reset();
            exit(1);
        }
    }
}

void notebook() {
    FILE *fp;
    char text,fn[50];
    int ch,i;
    green();
    printf("\n\n\n\tNOTEPAD\n");
    reset();
    purple();
    printf("\n\n\n\n Enter file name:");
    scanf("%s",&fn);
    reset();
    while(1) 
    {
        blue();
        printf("\n\n\n Enter your choice that you want to perform \n1.write in file\n2.reading from file\n 3.Add more things on file\n4.exit\n");
        scanf("%d",&ch);
        reset();
        switch(ch)
        {
            case 1:
                fp=fopen(fn,"w");
                red();
                printf("\n\n\n\t\tWRITING MODE IS RUNNING ON\n");
                reset();
                printf("for saving the file press CTRL+Z\n");
                while((text=getchar())!=EOF)
                {
                    putc(text,fp);
                }
                fclose(fp);
                break;
            case 2:
                fp=fopen(fn,"r");
                red();
                    printf("\n\n\n\t\tREADING MODE IS RUNNING ON\n");
                reset();
                while((text=getc(fp))!=EOF)
                {
                    printf("%c",text);
                }
                fclose(fp);
                break;
            case 3:
                fp=fopen(fn,"a");
                red();
                printf("\n\n\n ADDING MODE\n");
                reset();
                printf("for saving the file press CTRL+Z\n");
                while((text=getchar())!=EOF)
                {
                    putc(text,fp);
                }
                fclose(fp);
                break;
             case 4:    
                break;
        
        }
    if (ch==4)
        break;
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




//program to make an unit converter
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//Meter = km * 1000
//Feet = km * 3280.84
//Inches = km * 39370.1
//Centimeter = km * 100000
void mm_to_other()
{
     double mm,cm,inch,feet,meter,km,mile;
     printf("enter milimeter\n");
     scanf("%lf",&mm);
     cm=mm/10;
     inch=cm/2.54;
     feet=inch/12;
     meter=feet/3.28084;
     km=meter/(1000);
     mile=km/1.609;
     printf("given MM is: %lf\n Centimeter: %lf\nInch: %lf\n Feet: %lf\nMeter: %lf\nKilometer: %lf\nMile: %lf\n",mm,cm,inch,feet,meter,km,mile);
}
void cm_to_other()
{
     double mm,cm,inch,feet,meter,km,mile;
     printf("enter centimeter\n");
     scanf("%lf",&cm);
     mm=cm*10;
     inch=cm/2.54;
     feet=inch/12;
     meter=feet/3.28084;
     km=meter/(1000);
     mile=km/1.609;
     printf("given CM is: %lf\n Milimeter: %lf\nInch: %lf\n Feet: %lf\nMeter: %lf\nKilometer: %lf\nMile: %lf\n",cm,mm,inch,feet,meter,km,mile);
}

void inch_to_other()
{
     double mm,cm,inch,feet,meter,km,mile;
     printf("enter inch\n");
     scanf("%lf",&inch);
     cm=inch*2.54;
      mm=cm*10;
     feet=inch/12;
     meter=feet/3.28084;
     km=meter/(1000);
     mile=km/1.609;
     printf("given inches: %lf\n milimeter: %lf\nCentimeter: %lf\nFeet: %lf\nMeter: %lf\nKilometer: %lf\nMile: %lf\n",inch,mm,cm,feet,meter,km,mile);

}
void feet_to_other()
{
         double mm,cm,inch,feet,meter,km,mile;
     printf("enter feet\n");
     scanf("%lf",&feet);
    inch=feet*12;
     cm=inch*2.54;
      mm=cm*10;
     meter=feet/3.28084;
     km=meter/(1000);
     mile=km/1.609;
     printf("given feet: %lf\n milimeter: %lf\nCentimeter: %lf\nInch: %lf\nMeter: %lf\nKilometer: %lf\nMile: %lf\n",feet,mm,cm,inch,meter,km,mile);     
}
void meter_to_other()
{
         double mm,cm,inch,feet,meter,km,mile;
     printf("enter meter\n");
     scanf("%lf",&meter);
    feet=meter*3.28084;
    inch=feet*12;
     cm=inch*2.54;
      mm=cm*10;
     km=meter/(1000);
     mile=km/1.609;
     printf("given Meter: %lf\n milimeter: %lf\nCentimeter: %lf\nInch: %lf\nfeet: %lf\nKilometer: %lf\nMile: %lf\n",meter,mm,cm,inch,feet,km,mile);     
}
void KM_to_other()
{
         double mm,cm,inch,feet,meter,km,mile;
     printf("enter likometer\n");
     scanf("%lf",&km);
     meter=km*1000;
    feet=meter*3.28084;
    inch=feet*12;
     cm=inch*2.54;
      mm=cm*10;
     mile=km/1.609;
     printf("given KM: %lf\n milimeter: %lf\nCentimeter: %lf\nInch: %lf\nfeet: %lf\nMeter: %lf\nMile: %lf\n",km,mm,cm,inch,feet,meter,mile);     
}
void mile_to_other()
{
         double mm,cm,inch,feet,meter,km,mile;
     printf("enter mile\n");
     scanf("%lf",&mile);
     km=mile*1.609;
     meter=km*1000;
    feet=meter*3.28084;
    inch=feet*12;
     cm=inch*2.54;
      mm=cm*10;
     mile=km/1.609;
     printf("given mile: %lf\n milimeter: %lf\nCentimeter: %lf\nInch: %lf\nfeet: %lf\nMeter: %lf\nKilometer: %lf\n",mile,mm,cm,inch,feet,meter,km);     
}
void length()//for the converting length
{
     int ch;
     while(1)
     {
    yellow();
     printf("1.miliMeter to other\n2.Centimeter to others\n3.Inch to others\n4.Feet to others\n5.Meter to others\n6.Kilometer to others\n7.Mile to others\n8.Exit\n");
    reset();
 printf("enter your choice form the list\n");
  scanf("%d",&ch);
switch(ch){
    blue();
case 1:
mm_to_other();
break;
case 2:
cm_to_other();
break;
case 3:
inch_to_other();
break;
case 4:
feet_to_other();
break;
case 5:
meter_to_other();
break;
case 6:
KM_to_other();
break;
case 7:
mile_to_other();
break;
case 8:
system("cls");
break;
default:
reset();
red();
printf("enter the correct choice\n");reset();
}
if(ch==8)
{
     break;
}}}

void mass()
{
      int ch;
      double mili,gram,kilo,pound,tonne;
     while(1)
     {
        purple();
           printf("1.miligram to others\n 2.gram to others\n3.kilogram to others\n4.pound to others\n5.tonne to others\n6.exit\n");reset();
 printf("enter your choice form the list\n");
  scanf("%d",&ch);
switch(ch){
   
case 1:
 green();
printf("\n\n");
printf("enter milogram\n");
scanf("%lf",&mili);
printf("given milogram: %lf\n",mili);
printf("Gram: %lf\n",gram=(mili/1000));
printf("Kilogram: %lf\n",kilo=(gram/1000));
printf("pound: %lf\n",pound=(kilo/0.454));
printf("tonne: %lf\n",tonne=(kilo/1000));
printf("\n\n");
break;
case 2:
 green();
printf("\n\n");
printf("enter gram\n");
scanf("%lf",&gram);
printf("given gram: %lf\n",gram);
printf("Miligram: %lf\n",mili=(gram*1000));
printf("Kilogram: %lf\n",kilo=(gram/1000));
printf("pound: %lf\n",pound=(kilo/0.454));
printf("tonne: %lf\n",tonne=(kilo/1000));
printf("\n\n");
break;
case 3:
 green();
printf("\n\n");
printf("enter Kilogram\n");
scanf("%lf",&kilo);
printf("given kilogram: %lf\n",kilo);
printf("Gram: %lf\n",gram=(kilo*1000));
printf("Miligram: %lf\n",mili=(gram*1000));
printf("pound: %lf\n",pound=(kilo/0.454));
printf("tonne: %lf\n",tonne=(kilo/1000));
printf("\n\n");
break;
case 4:
 green();
printf("\n\n");
printf("enter mass in pound\n");
scanf("%lf",&pound);
printf("given Pound: %lf\n",pound);
printf("kilogram: %lf\n",kilo=(pound*0.454));
printf("Gram: %lf\n",gram=(kilo*1000));
printf("Miligram: %lf\n",mili=(gram*1000));
printf("tonne: %lf\n",tonne=(kilo/1000));
printf("\n\n");
break;
case 5:
 green();
printf("\n\n");
printf("enter mass in Tonne\n");
scanf("%lf",&tonne);
printf("given tonne: %lf\n",tonne);
printf("Kilogram: %lf\n",kilo=(tonne*1000));
printf("pound: %lf\n",pound=(kilo/0.454));
printf("Gram: %lf\n",gram=(kilo*1000));
printf("Miligram: %lf\n",mili=(gram*1000));
printf("\n\n");reset();
break;
case 6:
break;
system("cls");
default:
red();
printf("enter the correct choice\n"); reset();
}
if(ch==6)
{
     break;
     system("cls");
}}}
void unit()//program to calculate the units converter
{
    int ch;
     printf("\n\n");
     while(1)
     {system("cls");
          printf("\n\n");
          green();
      printf("enter your choice\n 1.Waight\n2.Lenght\n3.exit\n");reset();
      scanf("%d",&ch);
      switch(ch)
      {
          case 1:
          system("cls");
         mass();
         break;
         case 2:
         system("cls");
     length();
     break;
      case 3:
      system("cls");
         break;
     default:
     red();
     printf("enter a Valid choice\n");reset();sleep(3);
     }
     if(ch==3)
     {
          break;
     }}
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
    printf("\n 7.Google chrome \t");
    reset();
    yellow();
    printf(" 8.Timer Watch \t");
    reset();
    green();
    printf("\t9.Gmail\t");
     printf("\n");
    reset();
   purple();
    printf("\n");
     printf("\n");
    printf("10.Notepad\t");
    reset();
    yellow();
    printf(" \t11.PST \t");
     reset();
     purple();
      printf(" \t12.Unit-Converter \n");reset();
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

    printf("13.Shutdown System\n");reset();
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
    notebook(); break;
    case 11:
    file(); break;
    case 12:
    system("cls");
    unit();
    break;
    case 13:
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
    
    exit(0); break;
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

