#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d", &t);
    char str[1000];
    char res[t][3];
    for (int i=0;i<t;i++){
        scanf("%s\n", str);
        int len = strlen(str);
        res[i][0]=str[0];
        res[i][1]=str[len-1];
        res[i][2]='\0';
    }
    for(int i=0;i<t;i++){
        printf("%s\n", res[i]);
    }
    return 0;
}