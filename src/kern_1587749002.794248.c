#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(32, 32, 16, "zeros");
	int ***A = create_three_dim_int(16, 16, 64, "zeros");
    clock_t start = clock();

	for (int a = 0; a < 27; a++)
	{
	  
	    B[a][a][a]=B[a+5][a+3][a+2]-A[a][a][a];
	  
	    B[a][a][a]=26;
	}

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_3d_array(B, 32, 32, 16);
	deallocate_3d_array(A, 16, 16, 64);
    return 0; 
    }