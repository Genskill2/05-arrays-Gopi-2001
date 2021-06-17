/* Enter your solutions in this file */
#include <stdio.h>
#include <stdbool.h>
#include <math.h> 


int max(int arr[], int n){
int max = arr[0];
  for(int i = 1 ; i < n;i++){
  if(max < arr[i]) max =arr[i];
  }
  return max;
}

int min(int arr[], int n)
{
int min  = arr[0];
  for(int i = 1;i < n;i++){
  if(min > arr[i]) min = arr[i];
    
  }
  return min;

}

float average(int arr[], int n)
{
float sum = 0;
  for(int i = 0;i< n ;i++)
  {
  sum = sum +arr[i];
  }
  float average = sum/((float)n);
  return average;

}

int mode(int arr[], int n ){

  int mode = arr[0];
  int max_count = 1;
  
  for(int i = 0;i < n;i++){
      bool flag = false;
  for(int j = i-1;j>= 0;j--)
  {
  if(arr[i] == arr[j])
  {
  flag = true;
  break; 
  }
  }
    int search = i+1;
    int count = 1;
    for(int j = i+1; j < n ;j++)
    {
        if(flag == false){
    if(arr[i] == arr[j]) count++;
        }
    }
    if(max_count < count)
    {
    max_count = count;
    mode = arr[i];
    }
  }
 return mode;
}

int factors(int n, int arr[]){
int sq_root = n/2;
  int count  = 0;
  for(int i = 2; i <= sq_root; i++){
  bool flag = true;
    if(n == 1){
    break;
    }
    
    for(int j = 2 ;j < i;j++)
    {
    if((i %j )==0)
    {
      flag =false;
      break;
    }
    } 
    if(flag)
    {
    while( n%i == 0)
    {
    arr[count] = i;
    count++;
    n = n/i;
    }
    }
  }
return (count);

}
