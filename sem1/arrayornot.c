#include<stdio.h>
int main()
{
   int a[10],n,i,j,o;
   int k,t;
   printf("enter limit");
   scanf("%d",&n);
   printf(&quot;enter elements of array&quot;);
   for(i=0;i&lt;n;i++)
   {
      scanf(&quot;%d&quot;,&amp;a[i]);
   }
   printf(&quot;enter option: 1 - searching number ; 2 - occurence of number&quot;);
   scanf(&quot;%d&quot;,&amp;o);
   switch(o)
   {
      case 1:
         printf(&quot;enter number to search&quot;);
         scanf(&quot;%d&quot;,&amp;k);
         for(i=0;i&lt;n;i++)
         {
            if(a[i]==k)
            {
               t=1;
               break;
            }
         }
         if(t==1)
         {
            printf(&quot;element is found&quot;);
         }
         else
         {
            printf(&quot;element is not found&quot;);
            break;
            case 2:
            printf(&quot;enter number&quot;);
            scanf(&quot;%d&quot;,&amp;k);
            for(i=0;i&lt;n;i++)
            {
               if(a[i]==k)
               {
                  t+=1;
               }
               printf(&quot;occurence of %d is %d&quot;,k,t);
               break;
               default:
               printf(&quot;invalid choice&quot;);
               break;
            }
         }
   }
   return 0;
