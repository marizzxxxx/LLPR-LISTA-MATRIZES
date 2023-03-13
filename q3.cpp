/* A = [[1, 2],[3, 4]]*/

#include <stdio.h>

int main() {

    float A[2][2] = {{1, 2}, {3, 4}};
    float D = A[0][0] * A[1][1] - A[0][1] * A[1][0];

    if (D == 0) {
        printf("NÃO EH POSSIVEL INVERTER.\n");
        return 0;
    } else{
    	printf("MATRIZ INVERTIDA:\n\n");
	}

    float ADJ[2][2] = {{A[1][1], -A[0][1]}, {-A[1][0], A[0][0]}};
    float INV[2][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            INV[i][j] = ADJ[i][j] / D;
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%f", INV[i][j]);
        }
        printf("\n");
    }

    return 0;
}
