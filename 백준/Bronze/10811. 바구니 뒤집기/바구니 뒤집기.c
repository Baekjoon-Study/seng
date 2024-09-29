#include<stdio.h>
int main(){
    int n,m,i,j;
    int k;
    int basket[101]={0,};
    scanf("%d %d", &n, &m);
    for(k=1;k<=n;k++){
        basket[k]=k;
    }
    for(k=0;k<m;k++){
        scanf("%d %d", &i, &j);
        while(i<=j)
        {
            int temp=0;
            temp = basket[i];
            basket[i]=basket[j];
            basket[j]=temp;
            i+=1;
            j-=1;
        }
    }
    for (k=1;k<=n;k++){
        printf("%d ", basket[k]);
    }
    return 0;
}