#include<stdio.h>
int main()
{
    int row,col;
    int A[10][10],B[10][10],C[10][10],i,j;

    printf("Enter size of row and column : ");
    scanf("%d %d",&row,&col);


    //getting input of A matrix
    printf("...Enter A matrix row and col...\n");

    for (i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("row %d col %d: ",i,j);
            scanf("%d",&A[i][j]);
        }
       // printf("\n");

    }

    // getting input B matrix

     printf("\n\nEnter B matrix row and col: \n");


     for (i=0; i<row; i++)
     {
         for(j=0; j<col; j++)
         {
             printf("row %d col %d: ",i,j);
             scanf("%d",&B[i][j]);
         }
        // printf("\n");

     }

    // display output A matrix

    printf("\nA = ");
    for (i=0; i<row; i++)
    {
        printf("\t");

        for(j=0; j<col; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    // display output B matrix
     printf("\nB = ");
     for (i=0; i<row; i++)
     {
         printf("\t");
         for(j=0; j<col; j++)
             printf("%d ",B[i][j]);
         printf("\n");
     }

     // some of A and B matrix
     printf("\nSome Of A And B Matrix = ");

     for(i=0; i<row; i++)
     {
         for(j=0; j<col; j++)
         {
             C[i][j]=A[i][j]+B[i][j];
         }

     }

     // display output C matrix Sum of A & B matrix
     printf("\nC = ");
     for (i=0; i<row; i++)
     {
         printf("\t");
         for(j=0; j<col; j++)
             printf("%d ",C[i][j]);
         printf("\n");
     }


    return 0;

}
