#include<stdio.h>

int main() {
  char str[20], *pt;
  int i = 0;
  printf("Pointer Example Program : Find or Calculate Length of String \n");
  printf("Enter Any string [below 20 chars] : ");
  gets(str);
  pt = str;
  while (*pt != '\0') {
    i++;
    pt++;
  }// Name- Vedant Roy  Batch-B2B  Branch- B.Tech AI and ML  Enrollment Number-12019011621
  printf("Length of String : %d", i);

  return 0;
}