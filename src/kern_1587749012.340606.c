#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(32, 16, 64, "random");
	int ***B = create_three_dim_int(64, 16, 16, "random");
	int *A = create_one_dim_int(524288, "random");
    clock_t start = clock();

	for (int a = 4; a < 28; a++)
	{
	  
	    B[a][a][a]=B[a][a][a-4]+39;
	  
	    A[a]=A[a+4]+B[a][a][a]-C[a][a][a];
	  
	    C[a][a][a]=C[a+4][a+1][a+4]-30;
	}

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_3d_array(C, 32, 16, 64);
	deallocate_3d_array(B, 64, 16, 16);
	deallocate_1d_array(A);
    return 0; 
    }