/* A = [[1, 2],[3, 4]] */ 

#include <stdio.h>

int main() {
	
    int A[2][2] = {{1, 2}, {3, 4}};
    int Y[2][2];
    
	for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            Y[i][1-j] = A[i][j];
        }
    }
    
	printf("matriz de reflexao em relacao ao eixo y:\n\n");
    
	for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", Y[i][j]);
        }
        printf("\n");
    }
    
	return 0;
}
