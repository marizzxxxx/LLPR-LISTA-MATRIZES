/* A = [[1, 2, 3],[4, 5, 6],[7, 8, 9]] */ 

#include <stdio.h>

int main() {
	
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int ADJ[3][3];
    
    ADJ[0][0] = A[1][1] * A[2][2] - A[1][2] * A[2][1];
    ADJ[0][1] = -1 * (A[1][0] * A[2][2] - A[1][2] * A[2][0]);
    ADJ[0][2] = A[1][0] * A[2][1] - A[1][1] * A[2][0];
    ADJ[1][0] = -1 * (A[0][1] * A[2][2] - A[0][2] * A[2][1]);
    ADJ[1][1] = A[0][0] * A[2][2] - A[0][2] * A[2][0];
    ADJ[1][2] = -1 * (A[0][0] * A[2][1] - A[0][1] * A[2][0]);
    ADJ[2][0] = A[0][1] * A[1][2] - A[0][2] * A[1][1];
    ADJ[2][1] = -1 * (A[0][0] * A[1][2] - A[0][2] * A[1][0]);
    ADJ[2][2] = A[0][0] * A[1][1] - A[0][1] * A[1][0];
    
	printf("Adjunta:\n");
    
	for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", ADJ[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
