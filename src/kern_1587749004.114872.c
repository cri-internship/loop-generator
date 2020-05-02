#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(32, 16, 32, "ones");
	int *B = create_one_dim_int(524288, "ones");
	int ***D = create_three_dim_int(64, 16, 32, "ones");
	int ***A = create_three_dim_int(32, 16, 32, "ones");
	int **E = create_two_dim_int(512, 256, "ones");
    clock_t start = clock();

	for (int b = 2; b < 16; b++)
	  for (int a = 1; a < 32; a++)
	  {
	    
	     A[a][b][a]=A[a][b-2][a-1]+13*B[a]-C[a][b][a]+E[a][b];
	  }

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_3d_array(C, 32, 16, 32);
	deallocate_1d_array(B);
	deallocate_3d_array(D, 64, 16, 32);
	deallocate_3d_array(A, 32, 16, 32);
	deallocate_2d_array(E, 512, 256);
    return 0; 
    }