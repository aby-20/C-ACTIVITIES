#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void reverse(char s[]){
int i,j;
char c;
for(i=0,j=strlen(s)-1;i<j;i++,j--){
c=s[i];
s[i]=s[j];
s[j]=c;
}
}

void itoa(int n,char s[],int width){
int i,sign;

sign = n;
i=0;

unsigned int num = (sign<0)?-((unsigned int)n) :(unsigned int)n;

do{
s[i++]=num%10+'0';
}
while((num/=10)>0);

if(sign<0)
s[i++] = '-';

s[i] = '\0';

reverse(s);

int len = strlen(s);
if(len <width){
int diff = width - len;

memmove(s+diff,s,len+1);
for(i=0;i<diff;i++)
s[i]=' ';
}
}

int main(){
char buffer[100];
int k,m;
printf("enter the number and space");
scanf("%d",&k);
scanf("%d",&m);

itoa(k,buffer,m);
printf("%s\n",buffer);

return 0;
}

