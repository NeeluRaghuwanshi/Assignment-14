//calculate the sum of all even numbers and sum of all odd
//numbers, which are stored in an array of size 10. Take array values from the user.
#include<stdio.h>
int main()
   {
     int a[10],i,se=0,so=0;
     printf("Enter 10 numbers\n");
     for(i=0;i<=9;i++)
       scanf("%d",&a[i]);
     for(i=0;i<=9;i++)
       {
         if(a[i]%2==0)
         se=se+a[i];
         else
         so=so+a[i];
       }
     printf("Sum of even numbers is %d\n",se);
     printf("Sum of odd numbers is %d",so);

     return 0;
   }
