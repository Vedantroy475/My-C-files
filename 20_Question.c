#include <stdio.h>
#include <conio.h>
#include <string.h>
 
int main()
{
	char a[10];
	char b[10];
	char c[10];
	int p=0,r=0,i=0;
	int t=0;
	int x,g,s,n,o;
    puts("Enter First String:");
	gets(a);
	puts("Enter Second String:");
	gets(b);
	printf("Enter the position where the item has to be inserted: ");
	scanf("%d",&p);
	r = strlen(a);
	n = strlen(b);
	i=0;
	while(i <= r)  //---->   Copying the input string into another array
	{
		c[i]=a[i];
		i++;
	}	//  Name- Vedant Roy  Branch- B.Tech AI and ML  Batch- B2B  Enrollment Number-12019011621
	s = n+r;
	o = p+n;
	for(i=p;i<s;i++)  // ----> Adding the sub-string
	{
		x = c[i];
		if(t<n)
		{
			a[i] = b[t];
			t=t+1;
		}
		a[o]=x;
		o=o+1;
	}
    printf("%s", a);
	return 0;
}