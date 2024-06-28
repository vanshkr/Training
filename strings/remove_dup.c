#include <stdio.h>
#include <string.h>

int main(){

	char s[1001],ch;
	char res[1001];
	int len,uniqLen=0,flag;
	printf("Enter the string :");
	scanf("%s",s);
	len = strlen(s);

	for(int i=0;i<len;i++){
		ch = s[i];
		flag = 0;
		for(int j=0;j<i;j++){
			if(ch == s[j]){
				flag = 1;
				break;
			}
		}
		if(!flag){
			res[uniqLen]=ch;
			uniqLen++;
		}
	}
	for(int i=0;i<uniqLen;i++){
		printf("%c \t",res[i]);
	}

	printf("\nResultant String is :%s\n",res);
	return 0;
}


