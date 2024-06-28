#include <stdio.h>
#include <string.h>

int main(){
	char s[1001];
	int len,i,j;

	printf("Enter the string :");
	scanf("%s",s);

	len =strlen(s);
	i=0;
	j=len-1;

	while(i<j){
		if(s[i] != s[j]){
			printf("Not a palindrome\n");
			return 0;
		}else{
			i++;
			j--;
		}
	}
	printf("Palindrome\n");
	return 0;
}
