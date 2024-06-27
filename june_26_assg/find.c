#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    char sbstr[101];
    int len;
    char ch;
    char *substr_res, *char_res;

    printf("Enter the string: ");
    fgets(str, 101, stdin);

    printf("Enter the sub string to be searched: ");
    fgets(sbstr, 101, stdin);

    sbstr[strcspn(sbstr, "\n")] = '\0';

    printf("Enter the char to be searched: ");
    scanf("%ch",&ch);

    len = strlen(str);

    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    substr_res = strstr(str, sbstr);
    char_res = strchr(str, ch);

    if (substr_res == NULL) {
        printf("-1\n");
    } else {
        printf("%ld\n", substr_res - str);
    }

    if (char_res == NULL) {
        printf("-1\n");
    } else {
        printf("%ld\n", char_res - str);
    }

    return 0;
}
        
