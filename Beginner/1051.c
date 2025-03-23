#include<stdio.h> 
int main()
{
  float a, n, tax1, tax2, tax3;
  scanf("%f", a);
  n=a;
  if (n >= 0.00 && n <= 2000.00)
  {
    printf("Isento\n");
  }
  else if (n>=2000.01 && n<=3000.00){
    n=a-2000;
    tax1=n*(0.08*100);
    printf("R$ %.2f\n", tax1);
  }
  else if(n>=3000.01 && n<=4500.00){
      n=a-3000;
      tax2=tax1+ (n*(0.18*100));
      printf("R$ %.2f", tax2);
  }

    return 0;
}