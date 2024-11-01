#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s", str);
    int len = strlen(str);
    
    int arr[26];
    for(int k=0;k<26;k++){
        arr[k]=0;
    }
    
    for(char j=0; j<len; j++){
        int i = (int)str[j];
        i = i-97;
        arr[i] += 1;
    }
    for(int z=0; z<26; z++){
        printf("%d ", arr[z]);
    }
    return 0;
}