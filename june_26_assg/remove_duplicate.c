#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char str[101];

    printf("Enter the string with delimeter | ");

    scanf("%s",str);

    char freq[1001][101] = {0};

    char *token = strtok(str, "|");
    int uniqueIndex = 0;
    int flag = 0;
    while (token != NULL) {
        flag = 0;
        for (int i = 0; i < uniqueIndex; i++) {
            if (strcmp(freq[i], token) == 0) {
                flag = 1;
                break;
            }
        }

        if (!flag) {
            strcpy(freq[uniqueIndex], token);
            uniqueIndex++;
        }

        token = strtok(NULL, "|");
    }
    for(int i=0;i<uniqueIndex;i++){
	    printf("%s\t",freq[i]);
    }
    printf("\n");
    return 0;
}

