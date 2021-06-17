#include <stdio.h>
#include <assert.h>


int mode(int arr[], int n ){
boolean flag = true;
  int mode = arr[0];
  int max_count = 1;
  
  for(int i = 0;i < n;i++){
  for(int j = i-1;j>= 0;j--)
  {
  if(arr[i] == arr[j])
  {
  flag = false;
  break; 
  }
  }
    int search = i+1;
    int count = 1;
    while(flag)
    {
    if(arr[i] == arr[search]) count++;
    if(search == (n-1))
    {
      break;
    }
    search++;
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
