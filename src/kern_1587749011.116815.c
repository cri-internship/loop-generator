#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(128, 128, "random");
	int ***C = create_three_dim_int(32, 16, 32, "random");
	int **B = create_two_dim_int(512, 128, "random");
    clock_t start = clock();

	for (int b = 3; b < 16; b++)
	  for (int a = 5; a < 32; a++)
	  {
	    
	     A[a][b]=A[a][b+4]+B[a][b];
	    
	     C[a][b][a]=A[a][b];
	     C[a-4][b-2][a-5]=B[a][b];
	    
	     A[a][b]=44;
	  }

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_2d_array(A, 128, 128);
	deallocate_3d_array(C, 32, 16, 32);
	deallocate_2d_array(B, 512, 128);
    return 0; 
    }