#include <stdio.h>

int main() {
    char str[100];
    
    printf("Enter a full name: ");
    fgets(str, sizeof(str), stdin);
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }
    
    int last_space_index = -1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            last_space_index = i;
        }
    }
    
    printf("Result: ");
    
    if (last_space_index == -1) {
        printf("%s\n", str);
        return 0;
    }
    
    if (str[0] != ' ') {
        printf("%c", str[0]);
    }
    
    for (int i = 0; i < last_space_index; i++) {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0') {
            printf("%c", str[i + 1]);
        }
    }
    
    for (int i = last_space_index; str[i] != '\0'; i++) {
        printf("%c", str[i]);
    }
    
    return 0;
}