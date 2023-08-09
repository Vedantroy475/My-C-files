#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
   char s[30], t[20];
   char *found;
   puts("Enter the first string: ");
   gets(s);
   puts("Enter the string to be searched: ");
   gets(t);
   found = strstr(s, t);
   if(found)
   {
      printf("Second String is found in the First String at %d position.\n", found - s);
   }
   else
   { // Name-  Vedant Roy  Batch-B2B  Enrollment Number - 12019011621  Branch- B.Tech AI and ML 
      printf("-1");
   }
   return 0;
}