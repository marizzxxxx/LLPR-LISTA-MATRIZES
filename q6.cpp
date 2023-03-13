/* A = [[2, 3],[1, 4]] */ 

#include <stdio.h>

int main() {
	
    int A[2][2] = {{2, 3}, {1, 4}};
    int coft[2][2];
    
	coft[0][0] = A[1][1];
    coft[0][1] = -1 * A[1][0];
    coft[1][0] = -1 * A[0][1];
    coft[1][1] = A[0][0];
    
	printf("Cofatora:\n\n");
    
	for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", coft[i][j]);
        }
        printf("\n");
    }
    
	return 0;
}
