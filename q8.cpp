/* A = [[1, 2],[3, 4]] */ 

#include <stdio.h>

int main() {
   
    int A[2][2] = {{1, 2}, {3, 4}};
    int rg[2][2];
    
	for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            rg[i][j] = 0;
            if (i == j) {
                rg[i][j] = 1;
            }
        }
    }
    
	printf("A Identidade eh:\n\n");
    
	for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", rg[i][j]);
        }
        printf("\n");
    }
    
	return 0;
}
