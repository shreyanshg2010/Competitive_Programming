Write a C program to find the first occurrence of word in a string using loop

Refer sample Input and Output:
Example 1: 
srm university
university
Output 1: university is found at 4

The String university is found at string index 4. Array Index starts from 0

Example 2:
srm university
universit

Output 2:
universit is not found



APPROACH-1

#include <stdio.h>
#include <string.h>
int main()
{
  char str1[100],str2[100];
  scanf("%[^\n]s",str1);
  scanf("%s",str2);
  char *res = strstr(str1,str2);
  if(res=='\0')
    printf("%s is not found",str2);
  else
  {
    int index,i;
    for(i=0;str1[i]!='\0';i++)
    {
      if(res==&str1[i])
      {
        index=i;
        break;
      }
    }
    printf("%s is found at %d",str2,index);
  }
  return 0;
}




APPROACH-2



#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], word[100];
    int i, index, found = 0;

    scanf("%[^\t\n]s",str);
     // printf("%s",str);
      scanf("%s",word);

     index = 0;
    while(str[index] != '\0')
    {

    if(str[index] == word[0])
        {
            i=0;
            found = 1;
            while(word[i] != '\0')
            {
                if(str[index + i] != word[i])
                {
                    found = 0;
                    break;
                }

                i++;
            }
        }
        
          if(found == 1)
        {
            break;
        }

        index++;
    }
    
      if(found == 1)
    {
        printf("\n%s is found at %d", word, index);
    }
    else
    {
        printf("\n %s is not found.", word);
    }

    return 0;
}
