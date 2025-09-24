#include<ctype.h>
#include<stdio.h>

double atof_ext(const char s[]){
double val,power;
int i,sign,expSign,expVal;

for(i=0;isspace(s[i]);i++);

sign=(s[i]=='-')?-1:1;
if(s[i] == '+' || s[i] =='-')
i++;

for(val =0; isdigit(s[i]) ; i++)
val = 10.0 * val+(s[i] -'0');

if(s[i] == '.')
i++;
for(power = 1.0;isdigit(s[i]);i++){
val = 10.0 *val +(s[i] - '0');
power *= 10.0;
}

val = sign*val/power;

if(s[i] == 'e' || s[i] == 'E'){
i++;
expSign = (s[i] == '-'? -1:1);
if(s[i] == '+' || s[i] == '-')
i++;

for(expVal = 0;isdigit(s[i]);i++)
expVal = 10*expVal+(s[i] -'0');

double expPower = 1.0;
while(expVal-- >0)
expPower *= 10.0;

if(expSign == 1)
val *= expPower;
else 
val /= expPower;
}
return val;
}

int main(){
char str[50];
printf("Enter the string to convert \n");
scanf("%s",str);
printf("%g\n" ,atof_ext(str));
}



