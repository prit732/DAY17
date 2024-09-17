#include<stdio.h>
int main(){
    
  int size,i;
  float sum=0, avg=0;
  
  printf("Enter arr size: ");
  scanf("%d",&size);
  int arr[size];
  printf("Enter the arr: \n");
  for( int i = 0 ; i < size; i++)
  {
    printf("a[%d] = ",i);
    scanf("%d",&arr[i]);
    sum = sum + arr[i];
  }
  avg = sum/size;
  printf("Average of Arr: %.1f\n",avg);

}