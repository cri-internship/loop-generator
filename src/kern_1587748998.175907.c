#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(512, 256, "random");
    clock_t start = clock();

	for (int a = 5; a < 512; a++)
	{
	  
	    A[a][a]=A[a-5][a-5]*4;
	  
	    int var_a=A[a][a]-16;
	    int var_b=A[a][a-5]-23;
	}

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_2d_array(A, 512, 256);
    return 0; 
    }