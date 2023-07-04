#include<stdio.h>

void cube(int *a, int x, int y) {
    for (int i=0;i<x;i++) {
        for (int j=0;j<y;j++) {
            *(a+i*y+j)=(*(a+i*y+j))*(*(a+i*y+j))*(*(a+i*y+j));
        }
    }
}

int main() {
    int x,y,i,j;
    printf("Enter the number of row and columns: ");
    scanf("%d %d", &x, &y);

    int a[x][y];

    printf("Enter the elements of the 2D aay:\n");
    for(i=0;i<x;i++) {
        for(j=0;j<y;j++) {
            scanf("%d", &a[i][j]);
        }
    }

    cube(&a[0][0], x, y);

    printf("Cubes of elements in the 2D aay:\n");
    for (i = 0; i < x; i++) {
        for (j = 0; j < y; j++) {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
