#include<stdio.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void L()
{
int i,j,k;
for(i=0;i<=11;i++)
{
for(j=0;j<2;j++)
{
printf("*");
}
for(k=1;k<=5;k++)
{
if(i>9&&i<=11)
{
printf("**");
}
else
{
printf("  ");//one space
}
}
printf("\n");
}
}
void O()
{
int i,j,k;
for(i=0;i<=11;i++)
{
for(j=0;j<=2;j++)
{
if(i==0&&j<2||i==1&&j<2||i==11&&j<2||i==10&&j<1)
{
printf(" ");
}
else
{
printf("*");
}
}
for(k=1;k<=6;k++)
{
if(i>=0&&i<2||i>9&&i<=11)
{
printf("**");
}
else
{
printf("  ");
}
}
for(j=0;j<=2;j++)
{
if(i==0&&j>0||i==1&&j>1||i==11&&j>0||i==10&&j>1)
{
printf(" ");
}
else
{
printf("*");
}
}
printf("\n");
}
}
void A( )    //main function
{
int i,j,k,l;
 //clear screen
for(i=0;i<=11;i++)
{
for(j=10;j>=i;j--)
{
printf(" ");   //print one space
}
for(k=0;k<=2;k++)
{
printf("*");  //print one star
 }
for(l=1;l<=i;l++)
{
if(i>4&&i<7)
{
printf("**");  //print two stars
}
else
{
printf("  ");  //print two spaces
}
}
for(k=0;k<=2;k++)
{
printf("*");
}
for(j=10;j>=i;j--)
{
printf(" ");  //print one space
}
printf("\n");
}
}
void D( )
{ 
int i,j,k; 
for(i=0;i<=11;i++) 
{ 
for(j=0;j<2;j++) 
{ 
printf("*"); 
} 
for(k=1;k<=5;k++) 
{ 
if(i>=0&&i<2||i>9&&i<=11||k==5) 
{ 
printf("**"); 
} 
else 
{ 
printf("  ");//print two spaces 
} 
} 
for(j=0;j<2;j++) 
{ 
if(i>=0&&i<2||i>9&&i<=11) 
{ 
printf(" "); 
} 
else 
{ 
printf("*"); 
} 
} 
printf("\n"); 
}
}
void N()
{
 int i,j,k,l,m;
 system("color 0c");
 for(i=0;i<=11;i++)
 {
  for(j=0;j<=2;j++)
  {
   printf("*");
  }
  for(k=1;k<=i;k++)
    {
    printf(" ");
 }
 for(j=0;j<=2;j++)
  {
   printf("*");
  }
     for(l=10;l>=i;l--)
     {
      printf(" ");
  }
  for(j=0;j<=2;j++)
  {
   printf("*");
  }
 
 printf("\n");
 }
}
void G( )
{
int i,j,k;
for(i=0 ; i<=11 ; i++)
{
for(j=0 ; j<2 ; j++)
{
printf("*");
}
for(k=1 ; k<=5 ; k++)
{
if( i>0 && i<2 || i>4 && i<7 && k>=3 && k<=5 || i>=6 && i<=9 && k==5 || i>9 && i<=11)
{
printf("**");
}
else
{
printf("  ");  // Two Space
}
}
printf("\n");
}
}
int main(){
L();
printf("\t");
O();
printf("\t");
A();
printf("\t");
D();
printf("\t");
N();
printf("\t");
G();
printf("\t");
return 0;
}
