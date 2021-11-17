/*
Represent sets using one-dimensional arrays and implement functions to perform
i. Union
ii. Intersection
iii. Difference
iv. Symmetric difference of two sets
*/
#include <stdio.h>
#include <string.h>

int union_set (int a[],int b[],int ans[],int n,int m)
{
  int i;
  for(i=0;i<n;i++)
  {
    ans[i] = a[i];
  }
  int k = i;
  while(k<n+m)
  {
    int key =0;
    for(int j=0;j<n;j++)
    {
      if(ans[j] == b[k-n])
        key =1;
    }
    if(key == 0)
    {
      ans[i] = b[k-n];
      i++;
    }
    k++;
  }
  return i;
}

int intersection(int a[],int b[],int ans[],int n,int m)
{
  int k=0;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      if(a[i]==b[j])
      {
        ans[k] = a[i];
        k++;
      }
    }
  }
  return k;
}

int difference(int a[],int b[],int ans[],int n,int m)
{
  int k=0;
  for(int i=0;i<n;i++)
  {
    int key = 0;
    for(int j=0;j<m;j++)
    {
      if(a[i] == b[j])
        key = 1;
    }
    if(key == 0)
    {
      ans[k] = a[i];
      k++;
    }
  }
  return k;
}

int symmetric_difference(int a[],int b[],int ans[],int n,int m)
{
  int k=0;
  int temp[n+m];
  int size = intersection(a,b,temp,n,m);
  for(int i=0;i<n;i++)
  {
    int key = 0;
    for(int j=0;j<size;j++)
    {
      if(a[i] == temp[j])
        key = 1;
    }
    if(key == 0)
    {
      ans[k] = a[i];
      k++;
    }
  }
  for(int i=0;i<m;i++)
  {
    int key = 0;
    for(int j=0;j<size;j++)
    {
      if(b[i] == temp[j])
        key = 1;
    }
    if(key == 0)
    {
      ans[k] = b[i];
      k++;
    }
  }
  return k;
}

int main(void) {
  int n,m;

  printf("Enter number of elements in set A: ");
  scanf("%d",&n);
  int a[n];
  printf("Enter elements of set A: ");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }

  printf("Enter number of elements in set B: ");
  scanf("%d",&m);
  int b[m];
  printf("Enter elements of set B: ");
  for(int i=0;i<m;i++)
  {
    scanf("%d",&b[i]);
  }
  
  printf("The given sets are: \n");
  printf("Set A: {");
  for(int i=0;i<n;i++)
  {
    printf("%d",a[i]);
    if(i<n-1)
      printf(",");
  }
  printf("}\n");

  printf("Set B: {");
  for(int i=0;i<m;i++)
  {
    printf("%d",b[i]);
    if(i<m-1)
      printf(",");
  }
  printf("}\n");

  int choice;
  do{
    printf("Select operation:\n");
    printf("1.Union\n2.Intersection\n3.Difference\n4.Symmetric difference of two sets\n5.Exit\n");
    scanf("%d",&choice);
    int ans[m+n];
    int size;
    int choice1;
    switch(choice)
    {
      case 1:
      size = union_set(a,b,ans,n,m);
      break;

      case 2:
      size = intersection(a,b,ans,n,m);
      break;

      case 3:
      printf("Select one of the following:\n1.A-B\n2.B-A\n");
      scanf("%d",&choice1);
      if(choice1 == 1)
        size = difference(a,b,ans,n,m);
      else if(choice1 == 2)
        size = difference(b,a,ans,m,n);
      else
        printf("Enter valid number\n");
      break;

      case 4:
      size = symmetric_difference(a,b,ans,n,m);
      break;

      case 5:
      printf("Bye\n");
      break;

      default:
      printf("Enter valid number\n");
    }
    if(choice>0 && choice<5)
    {
      printf("Answer: ");
      printf("{");
      for(int i=0;i<size;i++)
      {
        printf("%d",ans[i]);
        if(i<size-1)
        {
          printf(",");
        }
      }
      printf("}\n\n\n");
    }
  }
  while(choice != 5);

  return 0;
}
