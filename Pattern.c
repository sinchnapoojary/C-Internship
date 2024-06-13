#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
int main(){
system ("COLOR B");//text color light aqua
int i,j,k=1;
for(i=0;i<5;i++)
{
    for(k=1;k<=1;k++)
    printf(" ");
for(j=0;j<5;j++)
{
if(i==0 || i==2 || i==4 || (i==1&&j==0) || (i==3&&j==4)) //logic to print S
            printf("*");
         else
            printf(" ");
}
_sleep(75);
for(k=1;k<=2;k++)//space b/w S & I
    printf(" ");
for(j=0;j<5;j++)
{
if(i==0|| i==4 || j==2)//logic to print I
printf("*");
         else
            printf(" ");
}
for(k=1;k<=2;k++)//space b/w I & N
    printf(" ");
for(j=0;j<5;j++)
{
if(j==0|| j==4 || i==j)//logic to print N
            printf("*");
         else
            printf(" ");
}
for(k=1;k<=2;k++)//space b/w N & C
    printf(" ");
for(j=0;j<5;j++)
{
if(j==0 ||i==0||i==4)//logic to print C
printf("*");
         else
            printf(" ");
}
for(k=1;k<=2;k++)//space b/w C & H
    printf(" ");
for(j=0;j<5;j++)
{
if(j==0|| j==4 || i==2)//logic to print H
            printf("*");
         else
            printf(" ");
}
for(k=1;k<=2;k++)//space b/w H & A
    printf(" ");
for(j=0;j<5;j++)
{
if( j==0|| j==4  || i==2 || i==0 )//logic to print A
            printf("*");
         else
            printf(" ");
}
for(k=1;k<=2;k++)//space b/w A & N
    printf(" ");
for(j=0;j<5;j++)
{
if(j==0|| j==4 || i==j)//logic to print N
            printf("*");
         else
            printf(" ");
}
for(k=1;k<=2;k++)//space b/w N & A
    printf(" ");
for(j=0;j<5;j++)
{
if( j==0|| j==4  || i==2 || i==0 )//logic to print A
            printf("*");
         else
            printf(" ");
}
printf("\n");//next line
}
printf("\n");


for(i=0;i<5;i++)
{
for(k=1;k<=4;k++)
    printf(" ");
_sleep(25);
for(j=0;j<5;j++)
{
if(j==0 || i==0 ||i==2 || j==4 && i==1 )//logic to print P
            printf("*");
         else
            printf(" ");
}
for(k=1;k<=2;k++)//space b/w P & O
    printf(" ");
for(j=0;j<5;j++)
{
 if(j==0 || i==0 || i==4 || j==4)//logic to print O
            printf("*");
         else
            printf(" ");
}
for(k=1;k<=2;k++)//space b/w O & O
    printf(" ");
for(j=0;j<5;j++)
{
 if(j==0 || i==0 || i==4 || j==4)//logic to print O
            printf("*");
         else
            printf(" ");
}
for(k=1;k<=2;k++)//space b/w O & J
    printf(" ");
for(j=0;j<5;j++)
{
if(j==3 || i==4 && j==2 || i==3 && j==1 || i==0 )//logic to print J
            printf("*");
         else
            printf(" ");
}
for(k=1;k<=2;k++)//space b/w J & A
    printf(" ");
for(j=0;j<5;j++)
{
if( j==0|| j==4  || i==2 || i==0 )//logic to print A
            printf("*");
         else
            printf(" ");
}
for(k=1;k<=2;k++)//space b/w A & R
    printf(" ");
for(j=0;j<5;j++)
{
if(j==0 || i==0 ||i==2 || j==4 && i==1 || i==3 && j==2 || i==4 && j==4 )//logic to print R
            printf("*");
         else
            printf(" ");
}
for(k=1;k<=2;k++)//space b/w R & Y
    printf(" ");
for(j=0;j<5;j++)
{
if(i==2&&j==2 || i==3&&j==2 || i==4&&j==2 || i==0&&j==0 || i==1&&j==1 || i==1&&j==3 || i==0&&j==4 )//logic to print Y
            printf("*");
         else
            printf(" ");
}
_sleep(75);
printf("\n");
}
}
