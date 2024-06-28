#include <stdio.h>
#include <stdlib.h>

int main(){
	char str[1001],*token,res[1001];
	int len;
	printf("enter the string :");
	fgets(str,1001,stdin);

	len = strlen(str);

	if(str[len-1] == '\n){
		str[len-1] = '\0';
	}

	token = strtok(str," ");

	while(token != NULL){
		strcat(res,token);
		token = strtok(NULL," ");
	}

	printf("Resultant the string : %s\n",res);
#include <stdio.h>
#include <stdlib.h>

int main(){
        char str[1001],*token,res[1001];
        int len;
        printf("enter the string :");
        fgets(str,1001,stdin);

        len = strlen(str);

        if(str[len-1] == '\n){
                str[len-1] = '\0';
        }

        token = strtok(str," ");

        while(token != NULL){
                strcat(res,token);
                token = strtok(NULL," ");
        }

        printf("Resultant the string : %s\n",res);
}

