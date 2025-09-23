#include<ctype.h>
#include<stdint.h>
#include<stdio.h>

uint32_t htoi(const char *s) {
uint32_t result =0;
int base =16;

while(isspace(*s)) s++;
if(*s == '0' &&(tolower(s[1]) == 'x' || tolower(s[1]) == 'X')){
s+=2;
}

while(*s){
int digit;

if(isdigit((unsigned char)*s)){
digit = *s-'0';
}
else if (*s >= 'A' && *s <='F'){
digit =  *s - 'A' +10;
}
else if (*s >= 'a' && *s <= 'f'){
digit = *s - 'a' +10;
}
else {
break;
}
result = result * base + digit;
s++;
}
return result;
}
int main(){
printf("%u\n",htoi("0xDEADBEEF"));
return 0;
}

