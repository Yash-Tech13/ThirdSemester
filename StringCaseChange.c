#include <stdio.h>
#include <string.h>
void case_change(char str[])
{
  for(int i=0;i<strlen(str);i++)
  {
    if(str[i]>=97 && str[i]<=122)
      str[i] -= 32;
    else if(str[i]>=65 && str[i]<=90)
      str[i] += 32;
  }
}

int main(void) {
  char string[100];
  printf("Enter the string: ");
  fgets(string,100,stdin);

  case_change(string);

  printf("New string: %s",string);

  return 0;
}
