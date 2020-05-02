#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(524288, "ones");
	int ***B = create_three_dim_int(32, 32, 32, "ones");
    clock_t start = clock();

	for (int a = 0; a < 27; a++)
	{
	  
	    B[a][a][a]=B[a+4][a+5][a+4]+17;
	  
	    int var_a=A[a]-10;
	    int var_b=A[a]+6;
	}

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_1d_array(A);
	deallocate_3d_array(B, 32, 32, 32);
    return 0; 
    }