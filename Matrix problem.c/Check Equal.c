#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<stdbool.h>
//\n
int main()
{
    int Mat1[10][10],Mat2[10][10],i,j,k=0,Row1,Col1,Row2,Col2;
    bool flag=true;

    printf("Enter the Row1 and Col1: ");
    scanf("%d%d",&Row1,&Col1);

    printf("Enter the Matrix1 Values: ");
    for(i=0;i<Row1;i++)
    {
        for(j=0;j<Col1;j++)
        {
            scanf("%d",&Mat1[i][j]);
        }
    }

    printf("Enter the Row2 & Col2: ");
    scanf("%d%d",&Row2,&Col2);

     if(Row1 != Row2 || Col1 != Col2)
    {
        printf("Not be Compared! ");
        exit(0);
    }

    printf("Enter the Matrix2 Values: ");
    for(i=0;i<Row2;i++)
    {
        for(j=0;j<Col2;j++)
        {
            scanf("%d",&Mat2[i][j]);
        }
    }


    printf("Your Matrix-1: \n");

    for(i=0;i<Row1;i++)
    {
        for(j=0;j<Col1;j++)
        {
            printf("%d ",Mat1[i][j]);
        }
        printf("\n");
    }


    printf("Your Matrix-2: \n");

    for(i=0;i<Row2;i++)
    {
        for(j=0;j<Col2;j++)
        {
            printf("%d ",Mat2[i][j]);
        }
        printf("\n");
    }


    for(i=0;i<Row2;i++)
    {
        for(j=0;j<Col2;j++)
        {
            if(Mat1[i][j] != Mat2[i][j])
            {
                flag=false;
                break;
            }
        }
    }

    if(flag)
    {
        printf("Eual");
    }
    else
    {
        printf("Not Eual");

    }
    getch();
    return EXIT_SUCCESS;
}



