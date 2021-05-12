#include<stdio.h>
void main()
{
  int arr[20][20],row,column,i,j,sum;
  float rowave[20],columnave[20],avg;
  printf("enter the number of rows and columns:  ");
  scanf("%d%d",&row,&column);
  printf("enter the array values: \n ");
  for(i=0;i<row;i++)  //parallely taking input and calculating row average.
  {
    sum=0;
    for(j=0;j<column;j++)
    {
      scanf("%d",&arr[i][j]);
      sum=sum+arr[i][j];
    }
    avg=(float)sum/column;
    rowave[i]=avg;
  }
  //next using two for loops for calculating column average.
  for(j=0;j<column;j++)
  {
    sum=0;
    for(i=0;i<row;i++)
    {
      sum=sum+arr[i][j];
    }
    avg=(float)sum/row;
    columnave[j]=avg;
  }
  //printing two dimensional array and rowave array values
  printf("\n row wise and column wise averages of a matrix is: \n");
  for(i=0;i<row;i++)
  {
    for(j=0;j<column;j++)
    {
      printf("%6d",arr[i][j]);
    }
    printf(" | %6.2f",rowave[i]);
    printf("\n");
  }
  //printing columnave array values
  printf("---------------------------\n");
  for(i=0;i<column;i++)    
    printf("%6.2f",columnave[i]);
}