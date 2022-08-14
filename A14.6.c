//sort elements of an array of size 10.
#include <stdio.h>
int main()
     {
        int a[10],i,j,temp;
        printf("Enter ten numbers\n");
        for (i=0;i<=9;i++)
          scanf("%d", &a[i]);
        for (i=0;i<=9;i++)
        {
            for (j=i+1;j<=9;j++)
            {
                if (a[i]>a[j])
                {
                    temp=a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }

            }

        }

        printf("The numbers arranged in ascending order are\n");
        for(i=0;i<=9;i++)
            printf("%d ", a[i]);

    }
