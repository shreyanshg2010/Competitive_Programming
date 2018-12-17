Given are two strings(each not more than 100 characters). We need to find relation between them such that all the characters of the second string must appear in the first string sequentially (not necessarily continuously). The program should :
Print 1: if the characters in the first string appear in the same sequence as that of the second string.
Print 2: if the characters in the first string appear in the opposite sequence as that of second string.
Print 3: if the characters in the first string appear in both ie same as well as opposite sequences of the second string.
Print 0: if the characters in the first string dont appear in sequence of the second string. 
The characters in the strings are case-sensitive.

Input
The first line should give the number of test cases. For each test case, it takes input two strings.

Output
An integer ( 0,1,2 or 3 ) for each of the test cases. 

Test Case 1
Input (stdin)
2
njack njk
anwesha awesa

Expected Output
1
1

Test Case 2
Input (stdin)
2
wysiwig iwi
abcdef edba

Expected Output
3
2




#include<stdio.h>
#include<string.h>
int main()
{
	int t,i,j,s1=0,s2=0,c=0;
	char a[100],b[100];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s%s",a,b);
		j=0;
		c=0;
		for(i=0;i<strlen(a);i++)
		{
			for(j=j;j<strlen(b);)
			{
				if(a[i]==b[j])
				{
					c++;
					j++;
					break;
				}
				else 
					break;
			}
		}
		if(c==strlen(b))
			s1=1;
		c=0;
		j=0;
		for(i=strlen(a)-1;i>=0;i--)
		{
			for(j=j;j<strlen(b);)
			{
				if(a[i]==b[j])
				{
					c++;
					j++;
					break;
				}
				else
					break;
			}
		}
		if(c==strlen(b))
			s2=1;
		if((s1==1)&&(s2==1))
			printf("%d\n",3);
		else if(s1==1)
			printf("%d\n",1);
		else if(s2==1)
			printf("%d\n",2);
		else
			printf("%d\n",0);
		s1=s2=0;
	}
	return 0;
}
 
 
