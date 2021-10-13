#include <stdio.h>
#include <math.h>

int prime(int n)
{
  if (n <= 1)
        return 1;
 
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
 
    return 1;
}

void prime_list(int start,int end)
{
  for(int i = start; i <= end ; i++)
  {
    if(prime(i))
      printf("%d ",i);
  }
}

int main(void) {
  int start,end;
  printf("Enter start and end numbers: ");
  scanf("%d %d",&start,&end);
  prime_list(start,end);
  return 0;
}