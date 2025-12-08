#include<stdio.h>

int main(){
    int m, n, p, q, i, j, k;
    
    printf("Enter rows and columns of matrix A (m n): ");
    scanf("%d %d", &m, &n);
    
    printf("Enter rows and columns of matrix B (p q): ");
    scanf("%d %d", &p, &q);
    
    if(n != p){
        printf("Matrix multiplication is not possible\n");
        return 0;
    }
    
    int A[m][n], B[p][q], C[m][q];
    
    printf("Enter elements of matrix A:\n");
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &A[i][j]);
        }
    }
    
    printf("Enter elements of matrix B:\n");
    for(i = 0; i < p; i++){
        for(j = 0; j < q; j++){
            scanf("%d", &B[i][j]);
        }
    }
    
    for(i = 0; i < m; i++){
        for(k = 0; k < q; k++){
            C[i][k] = 0;
            for(j = 0; j < n; j++){
                C[i][k] += A[i][j] * B[j][k];
            }
        }
    }
    
    printf("Resultant matrix C:\n");
    for(i = 0; i < m; i++){
        for(j = 0; j < q; j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}