#include <stdio.h>
#include <assert.h>
#include <math.h>
#include <stdbool.h>

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

int main(void) {
  int ret[100] = {0};
  int count = factors(180, ret);
  assert (count == 5);
  assert (ret[0] == 2);
  assert (ret[1] == 2);
  assert (ret[2] == 3);
  assert (ret[3] == 3);
  assert (ret[4] == 5);


  count = factors(143, ret);
  assert (count == 2);
  assert (ret[0] == 11);
  assert (ret[1] == 13);
 
 printf("Factors: passed\n");
}
