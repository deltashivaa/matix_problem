#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Row,Col,i,j;
    printf("Enter the Row and Col: ");
    scanf("%d%d",&Row,&Col);
    int Arr[Row][Col];
    printf("Enter the Value in Array: ");
    for(i=0;i<Row;i++)
    {
     for(j=0;j<Col;j++)
      {
         scanf("%d",&Arr[i][j]);
      }
    }
    SnakeMat(Row,Col,Arr);
    return EXIT_SUCCESS;
}

void SnakeMat(int a,int b,int c[a][b])
{
    int i,j;

    for(i=0;i<a;i++)
    {
        if(i%2==0)
        {
            for(j=0;j<b;j++)
            printf("%d ",c[i][j]);
        }
        else
        {
            for(j=b-1;j>=0;j--)
            printf("%d ",c[i][j]);
        }
    }
}

