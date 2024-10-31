#include <stdio.h>
#include<string.h>

int main() {
    char str[100];
    scanf("%s", str);
    int length = strlen(str);

    int arr[26];
    for(int k=0;k<26;k++){
        arr[k] = -1;
    }

    for(char j=0; j<length; j++){
        int i = (int)str[j];
        i = i-97;
        if (arr[i]==-1) arr[i]=j;
    }

    for(int z=0; z<26;z++){
        printf("%d ", arr[z]);
    }
  
    return 0;
}


