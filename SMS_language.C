*Problem-Description*
SMS language or textese (also known as txt-speak, txtese, chatspeak, txt, txtspk, txtk, txto, texting language, txt lingo, SMSish, txtslang,or txt talk) is a term for the abbreviations and slang commonly used with mobile phone text messaging.

Some of the abbreviations used are

s for yes
u for you
2day for today
y for why

Many grandpa's have started sending SMSes to their grand children. But they are not familiar with the SMS lingo.

Can you help them by writing a program that would convert a given text in proper English to SMS lingo? Consider only the 4 words listed above.

Input Format:

Input consists of a single string. Assume that the maximum length of the string is 200 and all letters are in lower-case.

Output Format:

Output consists of a single string.

Sample Input 1:

where were you yesterday?

Sample Output 1:

where were u sterday?

Sample Input 2:

why is today a working day for you?

Sample Output 2:

y is 2day a working day for u?










#include<stdio.h>
#include<string.h>

void replace(char *s1)
{
    char r[4][10]={"yes","you","today","why"};
    char rep[4][5]={"s","u","2day","y"};
    char buff[500];
    int i;
    char *ch;
    for(i=0;i<4;i++)
        if((ch=strstr(s1,r[i])))
        {   
            strncpy(buff,s1,ch-s1);
            buff[ch-s1]=0;
            sprintf(buff+(ch-s1),"%s%s",rep[i],ch+strlen(r[i]));
            s1[0]=0;
            strcpy(s1,buff);
            return replace(s1);
        }
    
}
int main()
{
    char s1[100];
    scanf("%[^\n]%*c", s1);
    replace(s1);
    printf("%s",s1);
    return 0;
}
