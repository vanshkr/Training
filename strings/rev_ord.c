#include <stdio.h>
#include <string.h>

int main() {
    char str[1001], res[1001];
    int len,l,count=0;
    printf("Enter the string: ");
    fgets(str, 1001, stdin);

    len = strlen(str);

    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
    strcpy(res, "");
    for(int i=len-1;i>=0;i--){
	    count++;
	    if(str[i] == ' '){
		    strncat(res,str+i+1,count-1);

		    strcat(res," ");
		    count=0;
	    }

    }
    strncat(res,str,count);
    printf("Resultant string: %s\n", res);

    return 0;
}

