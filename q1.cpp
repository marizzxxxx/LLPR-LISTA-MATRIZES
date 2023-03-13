/* [[1, 2, 3], [4, 5, 6],[7, 8, 9]] */

#include <stdio.h>

int main() {
	
    int m[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int t[3][3];
    
    printf("Matriz transposta:\n");
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            t[j][i] = m[i][j];
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
