#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char new_str[100];  
    scanf("%s", str);
    int length = strlen(str);

    for (int j = 0; j < length; j++) {
        int i = (int)str[j];
        if (i >= 'A' && i <= 'Z') {
            new_str[j] = i + 32;
        }
        
        else if (i >= 'a' && i <= 'z') {
            new_str[j] = i - 32;
        } else {
            new_str[j] = i;  
        }
    }

    new_str[length] = '\0';  

    printf("%s\n", new_str); 
  
    return 0;
}
