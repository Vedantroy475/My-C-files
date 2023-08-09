#include<stdio.h>
int main()
{  char str[200];
   int line, word, ch;
   line = word = ch = 0;  //----> initialize count variables with zero
   printf("Enter string terminated with ~ :\n"); //----> read multiline string
   scanf("%[^~]", str);
   for(int i=0; str[i]!='\0'; i++)   // --->check every character
   {
      if(str[i]=='\n') // ---> if it is new line then  one line and one word completed
      {
         line++;
         word++;
      }
      else //----> else it is a character
      {
         if(str[i]==' '||str[i]=='\t') //----->if character is space or tab then one word is also completed                   
         {
            word++;
            ch++; // Name- Vedant Roy  Batch- B2B  Branch- B.Tech AI and ML Enrollment Number-12019011621
         }
         else { //---> it was not '\n', sapace or tab it is a normal character
            ch++;
         }
      }
   }
   printf("\nCharacter counts = %d\n", ch); //----> display count values
   printf("Word counts = %d\n", word);
   printf("Line counts = %d\n", line);
   return 0;
}