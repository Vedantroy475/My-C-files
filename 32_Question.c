#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<process.h>
#include<stdlib.h>
void main(int argc, char *argv[])
{// Name- Vedant Roy  Batch- B2B  Branch- B.Tech AI and ML
 FILE *fs, *fd;
 char s[20], d[20];
 int c = 0, count = 0, n;
 strcpy(s, argv[1]);
 n = atoi(argv[2]);
 fs = fopen(s, "r");
 if(s == NULL)
 printf("\n FILE ERROR");
 fclose(fs);
 fs = fopen(s, "r+");
 count = 0;
 while(count < n)
 {
  d[count] = fgetc(fs);
  count++;
 }
 d[count] = '\0';
 fseek(fs, 0L, 0);
 fputs(strrev(d), fs);
 fclose(fs);
 fs = fopen(s,"r");

 while(!feof(fs))
 {
  printf("%c", fgetc(fs));
  c++;
 }
 fclose(fs);
 getch();
}