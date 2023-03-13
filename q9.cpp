/* A = [[1, 2],[3, 4]] */ 

#include <stdio.h>

int main() {
    
	int A[2][2] = {{1, 2}, {3, 4}};
    int r[2][2];
    
	for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            r[j][1-i] = A[i][j];
        }
    }
   
    printf("Matriz rotacionada em 90 graus:\n\n");
    
	for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", r[i][j]);
        }
        printf("\n");
    }
    
	return 0;
}
