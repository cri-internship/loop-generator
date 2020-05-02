#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(524288, "random");
	int **B = create_two_dim_int(128, 256, "random");
	int ***C = create_three_dim_int(16, 16, 32, "random");
	int ***A = create_three_dim_int(64, 32, 16, "random");
    clock_t start = clock();

	for (int c = 0; c < 14; c++)
	  for (int b = 1; b < 16; b++)
	    for (int a = 0; a < 16; a++)
	    {
	      
	      C[a][b][c]=C[a][b-1][c]+50;
	      
	      B[a][b]=B[a+3][b+3]-C[a][b][c]*A[a][b][c];
	      
	      D[a]=B[a][b]+C[a][b][c];
	      D[a]=B[a][b];
	      
	      A[a][b][c]=2;
	      A[a+5][b+4][c+2]=13;
	      
	      B[a][b]=D[a]-D[a];
	      
	      C[a][b][c]=B[a][b]*D[a]-C[a][b][c];
	      B[a][b]=B[a][b-1]+C[a][b][c];
	    }

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_1d_array(D);
	deallocate_2d_array(B, 128, 256);
	deallocate_3d_array(C, 16, 16, 32);
	deallocate_3d_array(A, 64, 32, 16);
    return 0; 
    }