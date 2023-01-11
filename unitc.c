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
     printf("1.miliMeter to other\n2.Centimeter to others\n3.Inch to others\n4.Feet to others\n5.Meter to others\n6.Kilometer to others\n7.Mile to others\n8.Exit\n");
     while(1)
     {
 printf("enter your choice form the list\n");
  scanf("%d",&ch);
switch(ch){
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
break;
default:
printf("enter the correct choice\n");
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
           printf("1.miligram to others\n 2.gram to others\n3.kilogram to others\n4.pound to others\n5.tonne to others\n6.exit\n");
 printf("enter your choice form the list\n");
  scanf("%d",&ch);
switch(ch){
case 1:
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
printf("\n\n");
printf("enter mass in gram\n");
scanf("%lf",&gram);
printf("given gram: %lf\n",gram);
printf("Miligram: %lf\n",mili=(gram*1000));
printf("Kilogram: %lf\n",kilo=(gram/1000));
printf("pound: %lf\n",pound=(kilo/0.454));
printf("tonne: %lf\n",tonne=(kilo/1000));
printf("\n\n");
break;
case 3:
printf("\n\n");
printf("enter mass in Kilogram\n");
scanf("%lf",&kilo);
printf("given kilogram: %lf\n",kilo);
printf("Gram: %lf\n",gram=(kilo*1000));
printf("Miligram: %lf\n",mili=(gram*1000));
printf("pound: %lf\n",pound=(kilo/0.454));
printf("tonne: %lf\n",tonne=(kilo/1000));
printf("\n\n");
break;
case 4:
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
printf("\n\n");
printf("enter mass in Tonne\n");
scanf("%lf",&tonne);
printf("given tonne: %lf\n",tonne);
printf("Kilogram: %lf\n",kilo=(tonne*1000));
printf("pound: %lf\n",pound=(kilo/0.454));
printf("Gram: %lf\n",gram=(kilo*1000));
printf("Miligram: %lf\n",mili=(gram*1000));
printf("\n\n");
break;
default:
printf("enter the correct choice\n");
}
if(ch==6)
{
     break;
}}}
void unit()
{
    int ch;
     printf("\n\n");
     while(1)
     {
          printf("\n\n");
      printf("enter your choice\n 1.Waight\n2.Lenght\n3.exit\n");
      scanf("%d",&ch);
      switch(ch)
      {
          case 1:
         mass();
         break;
         case 2:
     length();
     break;
      case 3:
         break;
     default:printf("enter a Valid choice\n");
     }
     if(ch==3)
     {
          break;
     }}
}
int main()
{
     unit();

return 0;
}