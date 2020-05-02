#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(256, 512, "zeros");
	int *B = create_one_dim_int(65536, "zeros");
	int **C = create_two_dim_int(256, 128, "zeros");
    clock_t start = clock();

	for (int a = 0; a < 252; a++)
	{
	  
	    A[a][a]=B[a];
	    A[a+4][a+1]=C[a][a]*B[a];
	}

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_2d_array(A, 256, 512);
	deallocate_1d_array(B);
	deallocate_2d_array(C, 256, 128);
    return 0; 
    }