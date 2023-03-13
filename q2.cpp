/* A = [[1, 2],[3, 4]] B = [[5, 6],[7, 8]] */

#include <stdio.h>

int main() {
	
    int ma[2][2] = {{1, 2}, {3, 4}};
    int mb[2][2] = {{5, 6}, {7, 8}};
    int mult[2][2] = {{0, 0}, {0, 0}};
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                mult[i][j] += ma[i][k] * mb[k][j];
            }
        }
}
	printf("A matriz A * a matriz B eh igual a:\n");
    
	for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", mult[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

