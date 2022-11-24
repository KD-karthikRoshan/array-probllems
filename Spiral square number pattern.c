#include<stdio.h>
int main() {
    int size=4;
    int arr[size][size];
    int i=0,j=0,num=1,n=size-1;
    for(i=0;i<size/2;i++,n--) {
    //right to left
    for(j=i;j<=n;j++,num++) {
        arr[i][j]=num;
    }
    //top to bottom
    for(j=i+1;j<=n;j++,num++) {
        arr[j][n]=num;
    }
    // right to left
    for(j=n-1;j>=i;j--,num++) {
        arr[n][j]=num;
    }
    //bottom to top
    for(j=n-1;j>i;j--,num++) {
        arr[j][i]=num;
    }
}
printf("display\n");
for(i=0;i<size;i++) {
    for(j=0;j<size;j++) {
        printf("%-4d",arr[i][j]);
    }
    printf("\n");
}
return 0;
}
