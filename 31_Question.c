#include <stdio.h>
#include <stdlib.h>

int main()
{
FILE *fp1 = fopen("file1.txt", "r"); //----> Open two files to be merged
FILE *fp2 = fopen("file2.txt", "r");
FILE *fp3 = fopen("file3.txt", "w"); //---->  Open file to store the result
char c;
if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
{
		puts("Could not open files");
		exit(0);
}
while ((c = fgetc(fp1)) != EOF)  //---->  Copy contents of first file to file3.txt
	fputc(c, fp3);

while ((c = fgetc(fp2)) != EOF)  //---> Copy contents of second file to file3.txt
	fputc(c, fp3);
// Name- Vedant Roy  Batch-B2B  Branch-  B.Tech AI and ML   Enrollment Number-12019011621
printf("Merged file1.txt and file2.txt into file3.txt");

fclose(fp1);
fclose(fp2);
fclose(fp3);
return 0;
}
