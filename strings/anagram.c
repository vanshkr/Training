#include <stdio.h>
#include <string.h>
int main(){

	char str1[1001],
	     str2[1001];

	int freq[26]={0},len1,len2;

	printf("Enter the first string:");
	scanf("%s",str1);
	printf("Enter the second string:");
	scanf("%s",str2);

	len1 = strlen(str1);
	len2 = strlen(str2);

	if (len1 != len2){
		printf("Not Anagram\n");
		return 0;
	}else{
		for(int i=0;i<len1;i++){
			freq[str1[i]-'a']++;
			freq[str2[i]-'a']--;
		}
	}

	for(int i=0;i<26;i++){
		if(freq[i]!=0){
			printf("Not Anagram\n");
			return 0;
		}
	}

	printf("Anagram\n");
	return 0;
}

	
