#include <stdio.h>
#include <stdlib.h> // For exit()

int main()
{
	FILE *fptr;
    char filename[100], c;
    printf("Enter the filename to open \n");
	scanf("%s", filename);
	fptr = fopen(filename, "r"); 	//---> Open file
	if (fptr == NULL)
	{
		printf("Cannot open file \n");
		exit(0);
	}
// Name- Vedant Roy  Batch-B2B  Branch - B.Tech AI and ML  Enrollment Number-12019011621
	// Read contents from file
	c = fgetc(fptr);
	while (c != EOF)
	{
		printf ("%c", c);
		c = fgetc(fptr);
	}

	fclose(fptr);
	return 0;
}
