#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


char* solution(const char* phone_number) 
{
	int len,i;
	char* answer;
	
	len=strlen(phone_number);
	answer = (char*)malloc(len+1);
	strcpy(answer,phone_number);
	
	for(i=0 ; i<len-4 ; i++)
	{
		answer[i]='*';
	}
	
	return answer;
}

int main(void)
{
	char phone_number[20];
	char* answer;
	
	gets(phone_number);
	answer=solution(phone_number);
	printf("%s",answer);
	free(answer);
}
