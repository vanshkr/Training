#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main(){
	char str[101][1001];
	char word[101];
	int sz,cmp;
	bool swapped;
	char temp[101];

	printf("enter the size");
	scanf("%d",&sz);

	for(int i=0;i<sz;i++){
		printf("Enter the string :");
		scanf("%s",word);
		strcpy(str[i],word);
	}

	for (int i = 0; i < sz - 1; i++) {
	        swapped = false;
        	for (int j = 0; j < sz - i - 1; j++) {
			cmp = strcmp(str[j],str[j+1]);
            		if (cmp > 0) {
				strcpy(temp,str[j]);
				strcpy(str[j],str[j+1]);
				strcpy(str[j+1],temp);
                		swapped = true;
			}
            	}
        	if (swapped == false)
            		break;
	}
	for(int i=0;i<sz;i++){
		printf("%s \t",str[i]);
	}
	return 0;
}
