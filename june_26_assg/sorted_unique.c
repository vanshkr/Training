#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void bubble_sort(char (*str)[101],int sz){
        int cmp;
        bool swapped;
        char temp[101];

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
        return;
}

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
    bubble_sort(freq,uniqueIndex);
    printf("\n");
    return 0;
}
