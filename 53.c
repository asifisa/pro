#include <stdio.h>
#include<string.h>
int main() 
{
    int count=26,ccount[128]={0},i;
	char s[10000];
	scanf("%[^\n]s",s);
	//printf("%s",s);
	for(i=0;i<strlen(s);i++)
	{
	    if(s[i]>='a'&& s[i]<='z' || s[i]>='A'||s[i]<='Z')
	    {
	        ccount[s[i]]++;
	    }
	}
	for(i=0;i<128;i++)
	{
	    if(ccount[i]>0)
	    {
	        count--;
	        ccount[i]=0;
	    }
	}
	if(count<=0)
	printf("yes");
	else
	printf("no");
	return 0;
}
