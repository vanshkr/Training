#include <stdio.h>
#include <string.h>

int main(){
	char str[101];
	char replace ,replace_with;
	int pos;

	printf("enter the stirng:");
	scanf("%s",str);
	getchar();

	printf("Input character to replace:");
	scanf("%c",&replace);
	getchar();

	printf("Input character to replace with:");
	scanf("%c",&replace_with);
	getchar();

	pos = strchr(str,replace)-str;

	str[pos] = replace_with;

	printf("New string is : %s\n",str);
	return 0;
}
