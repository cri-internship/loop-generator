#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(512, 256, "ones");
	int **B = create_two_dim_int(128, 512, "ones");
    clock_t start = clock();

	for (int a = 4; a < 125; a++)
	{
	  
	    B[a][a]=35;
	    B[a+3][a+2]=A[a][a];
	  
	    B[a][a]=A[a][a];
	}

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_2d_array(A, 512, 256);
	deallocate_2d_array(B, 128, 512);
    return 0; 
    }