
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
    
    printf("Initials: ");
    
    if (str[0] != '\0' && str[0] != ' ') {
        printf("%c", str[0]);
    }
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' &&   str[i + 1] != ' ' && str[i + 1] != '\0') {
            printf("%c", str[i + 1]);
        }
    }
  
    return 0;
}

// with string.h 


#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    
    printf("Enter a full name: ");
    fgets(str, sizeof(str), stdin);
    
       str[strcspn(str, "\n")] = '\0';
    
    printf("Initials: ");
    
       if (strlen(str) > 0 && str[0] != ' ') {
        printf("%c", str[0]);
    }

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i + 1] != '\0' && str[i + 1] != ' ') {
            printf("%c", str[i + 1]);
        }
    }
    return 0;
}
