#include <stdio.h>

int main() {
    int n,m,i,j,k;
    int x,y,z;

    scanf("%d %d", &n, &m);
    int basket[n];
    for(int a=0;a<n;a++){
        basket[a]=0;
    }
    for (x=0;x<m;x++){
        scanf("%d %d %d", &i,&j,&k);
        for(y=i-1;y<j;y++){
            basket[y]=k;
        }
    }
    for(z=0;z<n;z++){
        printf("%d ", basket[z]);

    }
    
    return 0;
}
