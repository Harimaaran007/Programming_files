#include<stdio.h>
void comple(int,int,int,int);
void main()
{
   int x1,x2,y1,y2;
   printf("enter real and imarinery part of c1");
   scanf("%d%d",&x1,&y1);
   printf("enter the real and imaginery parts of c2");
   scanf("%d%d",&x2,&y2);
   comple(x1,x2,y1,y2);
}
void comple(int a,int b,int c,int d)
{
   int e,f;
   e=a+b;
   f=c+d;
   printf("the addition value is %d+i%d",e,f);
}

