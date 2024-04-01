#include<stdio.h>
#include<stdlib.h>
//\n
int main()
{
    int Mat[10][10],TransMat[10][10],i,j,k=0,Row,Col;

    printf("Enter the Row and Col: ");
    scanf("%d%d",&Row,&Col);
    printf("Enter the Matrix: ");
    for(i=0;i<Row;i++)
    {
        for(j=0;j<Col;j++)
        {
            scanf("%d",&Mat[i][j]);
        }
    }
    printf("Your Matrix: \n");

    for(i=0;i<Row;i++)
    {
        for(j=0;j<Col;j++)
        {
            printf("%d ",Mat[i][j]);
        }
        printf("\n");
    }


    for(i=0;i<Row;i++)
    {
        for(j=0;j<Col;j++)
        {
            TransMat[j][i]=Mat[i][j];
        }
    }


     printf("Tranpose Matrix: \n");

     for(i=0;i<Col;i++)
    {
        for(j=0;j<Row;j++)
        {
            printf("%d ",TransMat[i][j]);
        }
        printf("\n");
    }

    return EXIT_SUCCESS;
}
