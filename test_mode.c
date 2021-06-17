#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

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

int main(void) {
  int x[] = {4, 9,5,6,5,10,0,2,-3, -3,4, 4};
  assert ((mode(x, 12) == 4));

  int y[] = {5};
  assert (mode(y, 1) == 5);
  printf("Mode: passed\n");
  }
