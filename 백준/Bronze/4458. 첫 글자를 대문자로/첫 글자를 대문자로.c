#include <stdio.h>
int main(){
    char str[35];
    int n;
    scanf("%d", &n);
    getchar();
    for(int i=0; i<n; i++){
        gets(str);
        if('a'<= str[0]&&str[0]<= 'z') str[0] -= 32;
        printf("%s\n", str);
    }
    return 0;
}