/*STUDENT NAME: SINCHANA POOJARY
  COLLEGE NAME: BITM
  STREAM: CSE*/
#include<stdio.h>
void printS(int i,FILE *fptr)
{
    int j;
        printf("\t");
        for(j=0;j<5;j++)
        {
            if(i==0 || i==2 || i==4 || ( i==1&&j==0) || (i==3&&j==4))
                fprintf(fptr,"*");
            else
                fprintf(fptr,"  ");
        }
}
void printI(int i,FILE *fptr)
{
    int j;
 for(j=0;j<5;j++)
        {
            if(i==0|| i==4 || j==2)
                fprintf(fptr,"*");
            else
                fprintf(fptr,"  ");
        }
}
void printN(int i,FILE *fptr)
{
    int j;
 for(j=0;j<5;j++)
        {
            if(j==0|| j==4 || i==j)
                fprintf(fptr,"*");
            else
                fprintf(fptr,"  ");
        }
}
void printC(int i,FILE *fptr)
{
    int j;
  for(j=0;j<5;j++)
        {
            if(j==0 ||i==0||i==4)
                fprintf(fptr,"*");
            else
                fprintf(fptr,"  ");
        }
}
void printH(int i,FILE *fptr)
{
    int j;
  for(j=0;j<5;j++)
        {
            if(j==0|| j==4 || i==2)
                fprintf(fptr,"*");
            else
                fprintf(fptr,"  ");
        }
}
void printA(int i,FILE *fptr)
{
    int j;
  for(j=0;j<5;j++)
        {
            if( j==0|| j==4  || i==2 || i==0 )
                fprintf(fptr,"*");
            else
                fprintf(fptr,"  ");
        }
}
void printP(int i,FILE *fptr)
{
    int j;
  for(j=0;j<5;j++)
        {
            if(j==0 || i==0 ||i==2 || j==4 && i==1 )
                fprintf(fptr,"*");
            else
                fprintf(fptr,"  ");
        }
}
void printO(int i,FILE *fptr)
{
    int j;
  for(j=0;j<5;j++)
        {
            if(j==0 || i==0 || i==4 || j==4)
                fprintf(fptr,"*");
            else
                fprintf(fptr,"  ");
        }
}
void printJ(int i,FILE *fptr)
{
    int j;
  for(j=0;j<5;j++)
        {
            if(j==3 || i==4 && j==2 || i==3 && j==1 || i==0 )
                fprintf(fptr,"*");
            else
                fprintf(fptr,"  ");
        }
}
void printR(int i,FILE *fptr)
{
    int j;
  for(j=0;j<5;j++)
        {
            if(j==0 || i==0 ||i==2 || j==4 && i==1 || i==3 && j==2 || i==4 && j==4 )
                fprintf(fptr,"*");
            else
                fprintf(fptr,"  ");
        }
}
void printY(int i,FILE *fptr)
{
    int j;
  for(j=0;j<5;j++)
        {
            if(i==2&&j==2 || i==3&&j==2 || i==4&&j==2 || i==0&&j==0 || i==1&&j==1 || i==1&&j==3 || i==0&&j==4 )
                fprintf(fptr,"*");
            else
                fprintf(fptr,"  ");
        }
}
void main()
{
    FILE *fptr;
    fptr=fopen("projectsinchana.txt","w");
    if(fptr==NULL){
    printf("File not found!");}
    else{
    printf("File Open Successfully! \n");
    {
    int i;
    for(i=0;i<5;i++)
    {
     fprintf(fptr,"\t");
     printS(i,fptr);
     fprintf(fptr,"\t");
     printI(i,fptr);
     fprintf(fptr,"\t");
     printN(i,fptr);
     fprintf(fptr,"\t");
     printC(i,fptr);
     fprintf(fptr,"\t");
     printH(i,fptr);
     fprintf(fptr,"\t");
     printA(i,fptr);
     fprintf(fptr,"\t");
     printN(i,fptr);
     fprintf(fptr,"\t");
     printA(i,fptr);
     fprintf(fptr,"\t\t");
     printP(i,fptr);
     fprintf(fptr,"\t");
     printO(i,fptr);
     fprintf(fptr,"\t");
     printO(i,fptr);
     fprintf(fptr,"\t");
     printJ(i,fptr);
     fprintf(fptr,"\t");
     printA(i,fptr);
     fprintf(fptr,"\t");
     printR(i,fptr);
     fprintf(fptr,"\t");
     printY(i,fptr);
     fprintf(fptr,"\t");
     fprintf(fptr,"\n");
    }
    }
}
}
