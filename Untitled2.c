#include <stdio.h>
#include<string.h>
int main ()
{
   int c = 0,a=0,b = 0,d=0;
   char ch, s[1000];

   printf("Input a string\n");
   gets(s);

   while (s[c] != '\0') {
      ch = s[c];
      if (ch>= 'A' && ch <= 'Z')
        {
            a++;
        }
      else if (ch>= 'a' && ch <= 'z')
         {
             b++;
         }

      c++;
   }
   d=a+b;

   printf("The total number of capital words is : %d\n",a);
   printf("The total number of small words is : %d\n",b);
   printf("The total number of Words in line : %d\n",d);

   return 0;
}
