#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
 int a,b;
 char c,d;
 do
 {
  printf("\n\n\nEnter the input NUMBER1,OPERATOR,NUMBER2: ");
  while(1)
  {
          a = getche();
          a = a - '0';
         if(!(a >= 0 && a <= 9))
             printf("\nPlease enter valid Number1");
       else
            break;
  }
  while(1)
  {
   c = getche();
   
   if(c == '+' || c == '-' || c == '*' || c == '/')
    break;
   else
    printf("\n\nPlease enter valid operator : ");
  }
  while(1)
  {
   b = getche();
   b = b - '0';
   if(!(b >= 0 && b<= 9))
    printf("\nPlease enter valid Number1 : ");
   else
    break;
  }

  while(1)
  {
   d = getche();
   if(d == '=' || d == '\n');
    break;
  }

  switch(c)
  {

   case '+':
    printf("\t%d",a+b);
   break;

   case '-':
    printf("\t%d",a-b);
   break;
  
   case '*':
    printf("\t%d",a*b);
   break;

   case '/':
    if(b == 0)
     printf("\nDenominator is Zero 0. Undefined answer");
    else
     printf("\t%d",a/b);
   break;
  }
  printf("\n\n\nDo you want to calculate again? Y OR N: ");

 }while((c=getche()=='y'));
 getch();
 return 0;
}