/* A = [[2, 0, 1],[3, 4, -2],[8, 9, 6]] */ 

#include <stdio.h>

int main() {
    
	int A[3][3] = {{2, 0, 1}, {3, 4, -2}, {8, 9, 6}};
    int diag[3][3];
    
	for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            diag[i][j] = 0;
            if (i == j) {
                diag[i][j] = A[i][j];
            }
        }
    }
    
	printf("Diagonal:\n\n");
    
	for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", diag[i][j]);
        }
        printf("\n");
    }
    
	return 0;
}
