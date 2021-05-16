#include <stdio.h>
void main()
{
  int i,n,choice,arr[30];
  
  printf("Enter 1 for inserting an element in array \n");
  printf("Enter 2 for deleting an element in array \n");
  printf("Enter 3 for searching an element in array \n");
  printf("Enter 4 for sorting elements of array in ascending order \n");
  printf("Enter 5 for sorting elements of array in descending order\n");
  
  printf("Enter your choice now :");
  scanf("%d",&choice);
  
  if(choice <= 5 && choice >=1)
  {
  printf("Enter the size of an array :");
  scanf("%d",&n);
  printf("Enter those array values :");
  for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
  }
 
  switch(choice) 
  {
    case 1:
     {
  int pos,val,i;    
  printf("Enter the value of element to insert in array :");
  scanf("%d",&val);
  printf("Enter the position to insert that value :");
  scanf("%d",&pos);
  for(i=n-1;i>=pos;i--)
    arr[i+1]=arr[i];
  arr[pos]=val;
  n++;
  printf("The elements of array after inserting new value are :");
  for(i=0;i<n;i++)
  printf("%d\t",arr[i]);
     }
   break;
   
   
   case 2:
     {
  int i,pos;
  printf("Enter the position of array to delete an element :");
  scanf("%d",&pos);
  for(i=pos;i<n-1;i++)
    arr[i]=arr[i+1];
  n--;
  printf("The elements of array after deletion : ");
  for(i=0;i<n;i++)
  printf("%d\t",arr[i]);
     }
  break ;
  
  
  case 3 :
    {
  int i,num,count;
  printf("Enter an element to search : ");
  scanf("%d",&num);
  for(i=0;i<n;i++)
  {
    if(arr[i]==num)
    {
      count++;
      printf("The element %d is found at index %d\n",num,i);
    }
  }
  if(count=0)
  printf("The %d element not found",num);
    }
  break ;
  
  
  case 4:
    {
  int i,j,temp;    
 for(i=0;i<n-1;i++)
  {
   for(j=0;j<n-i-1;j++)
     {
       if(arr[j]>arr[j+1])
       {
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
       }
     }
  }
  printf("Elements of array after sorting in ascending order are :");
 for(i=0;i<n;i++)
   printf("%d\t",arr[i]);
    }
  break ;
  
  
  case 5:
    {
  int i,j,temp;
 for(i=0;i<n-1;i++)
  {
   for(j=0;j<n-i-1;j++)
     {
       if(arr[j]<arr[j+1])
       {
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
       }
     }
  }
  printf("Elements of array after sorting in descending order are :");
 for(i=0;i<n;i++)
    printf("%d\t",arr[i]);
    }
 break ;  
 
 default :
 printf(" You have to enter your choice correctly ");
    
  }  
}
