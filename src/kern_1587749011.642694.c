#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(16, 32, 16, "zeros");
	int ***A = create_three_dim_int(16, 16, 16, "zeros");
	int *B = create_one_dim_int(524288, "zeros");
    clock_t start = clock();

	for (int a = 0; a < 13; a++)
	{
	  
	    C[a][a][a]=19;
	    C[a+1][a][a+3]=7;
	}

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_3d_array(C, 16, 32, 16);
	deallocate_3d_array(A, 16, 16, 16);
	deallocate_1d_array(B);
    return 0; 
    }