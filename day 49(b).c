#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char line[256];
    char *tokens[50];
    int count = 0;

    printf("Enter full name: ");
    if (!fgets(line, sizeof line, stdin)) return 0;


    line[strcspn(line, "\n")] = '\0';

    
    char *p = strtok(line, " \t");
    while (p != NULL && count < (int)(sizeof tokens / sizeof tokens[0])) {
        tokens[count++] = p;
        p = strtok(NULL, " \t");
    }

    if (count == 0) {
        printf("No name entered.\n");
        return 0;
    }

    if (count == 1) {
        
        printf("%s\n", tokens[0]);
        return 0;
    }

    
    for (int i = 0; i < count - 1; ++i) {
        char ch = tokens[i][0];
        
        putchar(toupper((unsigned char)ch));
        printf(". ");
    }

  
    char *surname = tokens[count - 1];
    if (surname[0]) {
        putchar(toupper((unsigned char)surname[0]));
        
        printf("%s", surname + 1);
    }
    putchar('\n');

    return 0;
}
