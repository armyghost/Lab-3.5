#include <stdio.h>
int main(void)
{
  float B, H, ans;  
  printf("Enter B : ");
  scanf("%f", &B);		 
  printf("Enter H : ");
  scanf("%f", &H);	
  ans = 0.5*B*H ;
  printf("Answer is %f", ans); 
  return 0;
}
