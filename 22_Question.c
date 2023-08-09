#include <string.h>
 int main()
{   char s[1000];  
    int i,n,c=0;
    printf("Enter  the string : ");
    gets(s);
    n=strlen(s);
 
    for(i=0;i<n/2;i++)  
    {
    	if(s[i]==s[n-i-1])
    	c++;
 
 	}
 	if(c==i)
 	    printf("string is palindrome");
    else
        printf("string is not palindrome");
 
 	 // Name- Vedant Roy   Batch- B2B  Branch- B.Tech AI and ML   Enrollment Number-12019011621
     
    return 0;
}