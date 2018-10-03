#include<stdio.h>
void main()
{
    int c;//Assign a variable
    scanf("%d",&c);//Input the variable
    for (int i=0;i<=c;i++)
    {
        for (int j=0;j<=c-i;j++)
        {
            printf(" ");
        }
        for (int k=i;k>=0;k--)
        {
            printf("#");
        }
        printf(" ");
        for (int h=0;h<=i;h++)
        {
            printf("#");
        }
        printf("\n");//Last print
    }
}
