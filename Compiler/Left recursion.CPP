input:
	A->Aa|b	
output
	A'->aA'
	A->bA'
	A->e
  
  
#include<stdio.h>
#include<string.h>
int main(){
    char input[100],*l,*r,*temp,tempprod[20],productions[25][10];
    int i=0,j=0,flag=0;
    printf("enter the productions");
    scanf("%s",input);
    l=strtok(input,"->");
    r=strtok(NULL,"->");
    temp=strtok(r,"|");
    while(temp){
        if(temp[0]==l[0]){
            flag=1;
            sprintf(productions[i++],"%s'->%s%s'\0",l,temp+1,l);
        }
        else
            sprintf(productions[i++],"%s->%s%s'\0",l,temp,l);
        temp=strtok(NULL,"|");
    }
    sprintf(productions[i++],"%s->%c",l,(char)238);
    if(flag==0){
        printf("No Left recursion");
    }
    else{
        for(j=0;j<i;j++)
       {
            printf("\n%s",productions[j]);
        }
    }
        return 0;
    }
