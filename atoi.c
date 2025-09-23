#include<stdio.h>
#include<ctype.h>

int atoi(char s[])
{
int i,n,sign;
for(i=0;isspace(s[i]);i++)
;
sign = (s[i] =='-')?-1:1;
if(s[i]=='+'|| s[i] =='-')
i++;

for(n=0;isdigit(s[i]);i++)
n=10*n+(s[i]-'0');

return sign*n;
}

int main(void)
{
char str1[] = " 1234";
char str2[] = "-5678";
char str3[] = "+42";

printf("string '%s' integer : %d\n",str3,atoi(str3));
return 0;
}
