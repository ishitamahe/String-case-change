#include<stdio.h>
int main()
{
 char str[30];
 int i;
 printf("\n Enter String: ");
 scanf("%s",&str);
 for(i=0;str[i]!='\0';i++)
 {
  if(str[i]>='A' && str[i]<='Z')
  {
   str[i]=str[i]+32;
  }
  else if(str[i]>='a' && str[i]<='z')
  {
   str[i]=str[i]-32;
  }
 }
 printf("\n The changed case string is: %s",str);
}
