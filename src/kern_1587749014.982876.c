#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(262144, "random");
	int **C = create_two_dim_int(128, 512, "random");
	int *A = create_one_dim_int(262144, "random");
    clock_t start = clock();

	for (int a = 5; a < 128; a++)
	{
	  
	    A[a]=A[a-3]*45;
	  
	    A[a]=A[a-4]-9;
	  
	    B[a]=B[a-2]-34;
	  
	    C[a][a]=C[a-2][a-5]*16;
	  
	    B[a]=B[a+3]-45;
	}

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_1d_array(B);
	deallocate_2d_array(C, 128, 512);
	deallocate_1d_array(A);
    return 0; 
    }