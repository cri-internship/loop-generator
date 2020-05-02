#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(262144, "random");
	int **B = create_two_dim_int(128, 128, "random");
    clock_t start = clock();

	for (int a = 0; a < 123; a++)
	{
	  
	    B[a][a]=13;
	    B[a][a+5]=44;
	}

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_1d_array(A);
	deallocate_2d_array(B, 128, 128);
    return 0; 
    }