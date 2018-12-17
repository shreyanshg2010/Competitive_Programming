Problem Description

How to find lowest frequency character in a string using loop in C programming.
Test Case 1
Input (stdin)
madam

Expected Output
d=1

Test Case 2
Input (stdin)
eefffggghhh

Expected Output
e=2



#include <stdio.h>
#define MAX_SIZE 100
#define MAX_CHARS 255
int main()
{
char str[MAX_SIZE];
  int freq[MAX_CHARS];
  int i=0,min;
  int ascii;
  scanf("%s",str);
  for(i=0;i<MAX_CHARS;i++)
  {
    freq[i]=0;
  }
  i=0;
  while(str[i] !='\0')
  {
    ascii = (int)str[i];
    freq[ascii] += 1;
  i++;
  }
  min=0;
  for(i=0;i<MAX_CHARS;i++)
  {
    if(freq[i] !=0)
    {
      if(freq[min]==0 || freq[i]<freq[min])
         min= i;
    }
  }
  printf("%c=%d",min,freq[min]);
	return 0;
}
