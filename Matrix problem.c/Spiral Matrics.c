#include<stdio.h>
#include<stdlib.h>
//void SpiralMat(int a,b,c[n][n]);

void SpiralMat(int a,int b,int c[a][b])
{
    int i,Top=0,Bottom=a-1;
    int Left=0,Right=b-1;

    while(Top<=Bottom && Left<=Right)
    {
        for(i=Left;i<=Right;i++)
            printf("%d ",c[Top][i]);
        Top++;

        for(i=Top;i<=Bottom;i++)
            printf("%d ",c[i][Right]);
        Right--;

        //if(Top<=Bottom)
        for(i=Right;i>=Left;i--)
            printf("%d ",c[Bottom][i]);
        Bottom--;

        //if(Left<=Right)
        for(i=Bottom;i>=Top;i--)
            printf("%d ",c[i][Left]);
        Left++;
    }

}

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
    SpiralMat(Row,Col,Arr);
    return EXIT_SUCCESS;
}



