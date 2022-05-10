#include<stdio.h>

int main(){
	int N, num, i, i2, j, j2, ir, jr;
	scanf("%d", &N);
	printf("\n");
	int m[N][N];
	for(i = 0; i < N; i++){
		for(j = 0; j < N; j++){
			scanf("%d", &num);
			m[i][j] = num;
		}
	}
	printf("\n");

	int m2[N][N];
	for(i2 = 0; i2 < N; i2++){
		for(j2 = 0; j2 < N; j2++){
			scanf("%d", &num);
			m2[i2][j2] = num;
		}
	}

	int mr[N][N];
	for(ir = 0; ir<N; ir++){
        for(int jr = 0; jr <N; jr++){
            mr[ir][jr] = m[ir][jr] + m2[ir][jr];
        }
	}


    printf("Matriz A \n");
	for(i = 0; i < N; i++){
		for(j = 0; j < N; j++){
			printf("%d ", m[i][j]);
		}
	printf("\n");
	}


	printf("Matriz B \n");
	for(i2 = 0; i2 < N; i2++){
		for(j2 = 0; j2 < N; j2++){
			printf("%d ", m2[i2][j2]);
		}
	printf("\n");
	}

	printf("Matriz Resultante \n");
	for(ir = 0; ir < N; ir++){
		for(jr = 0; jr < N; jr++){
			printf("%d ", mr[ir][jr]);
		}
	printf("\n");
	}

	return 0;
}
