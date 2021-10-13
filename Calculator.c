#include <stdio.h>

int main(void) {
  int n1,n2;
  char op;
  printf("Enter two numbers:\n");
  scanf("%d %d",&n1,&n2);
  printf("Enter operator:\n");
  scanf(" %c", &op);

  switch(op)
  {
    case '+':
    printf("%d + %d = %d \n",n1,n2,n1+n2);
    break;

    case '-':
    printf("%d - %d = %d \n",n1,n2,n1-n2);
    break;
        
    case '*':
    printf("%d * %d = %d \n",n1,n2,n1*n2);
    break;
        
    case '/':
    printf("%d / %d = %d \n",n1,n2,n1/n2);
    break;
        
    default:
    printf("Enter valid operator");
    }
    return 0;
}