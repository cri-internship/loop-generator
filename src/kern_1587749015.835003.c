#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(256, 512, "zeros");
	int *E = create_one_dim_int(65536, "zeros");
	int **D = create_two_dim_int(128, 256, "zeros");
	int ***C = create_three_dim_int(16, 64, 16, "zeros");
	int *A = create_one_dim_int(262144, "zeros");
    clock_t start = clock();

	for (int c = 0; c < 14; c++)
	  for (int b = 3; b < 62; b++)
	    for (int a = 3; a < 11; a++)
	    {
	      
	      E[a]=E[a-3]*C[a][b][c]-B[a][b]+D[a][b];
	      
	      B[a][b]=B[a-1][b-3]+42;
	      
	      C[a][b][c]=C[a+5][b+2][c+2]*28;
	      
	      E[a]=A[a]+B[a][b]-27-A[a];
	      
	      E[a]=E[a]*D[a][b];
	      C[a][b][c]=E[a+5]+A[a]*B[a][b]-8;
	    }

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_2d_array(B, 256, 512);
	deallocate_1d_array(E);
	deallocate_2d_array(D, 128, 256);
	deallocate_3d_array(C, 16, 64, 16);
	deallocate_1d_array(A);
    return 0; 
    }