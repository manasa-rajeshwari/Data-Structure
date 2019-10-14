#include <stdio.h>
#include <stdlib.h>

void maxHeapify(int A[],int i,int n)
{
  int l,r,temp,largest = i;
  l = 2*i + 1;
  r = 2*i + 2;
  if((l < n && A[l] > A[i]) == 1)
  {
    largest = l;
  }
  else if((r < n && A[r] > A[i]) == 1)
  {
    largest = r;
  }
  else
  {
    largest = i;
  }
  if(largest != i)
  {
    temp = A[i];
    A[i] = A[largest];
    A[largest] = temp;
    maxHeapify(A,largest,n);
  }
}
void printArray(int A[],int n)
{
  int i;
  for(i = 0;i < n;i++)
  {
    printf("%d ",A[i]);
  }
  printf("\n");
}
int main()
{
  int n,i,j;
  printf("Enter no. of elements = ");
  scanf("%d",&n);
  int A[n];
  for(i = 0;i < n;i++)
  {
    printf("Enter [%d] = ",i);
    scanf("%d",&A[i]);
  }
    maxHeapify(A,0,n);
   maxHeapify(A,1,n);
   maxHeapify(A,2,n);
  printf("\n");
  printArray(A,n);
}
  
