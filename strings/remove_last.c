#include <stdio.h>
#include <string.h>

int main(){
	char str[101],word[101];
	char *lastInd=NULL,*curr,len;
	char *pos;
	printf("enter the string:");
	scanf("%[^\n]s",str);
	getchar();

	printf("enter the word to be removed:");
	scanf("%s",word);
	getchar();

	len = strlen(word);
	curr = strstr(str,word);
	while(curr != NULL){
		lastInd = curr;
		curr = strstr(lastInd+1,word);
	}

	if(lastInd != NULL){
		strcpy(lastInd,lastInd+len+1);
	}
	printf("%s\n",str);
	return 0;
}

