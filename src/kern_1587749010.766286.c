#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(16, 64, 64, "zeros");
	int **A = create_two_dim_int(512, 128, "zeros");
    clock_t start = clock();

	for (int a = 0; a < 508; a++)
	{
	  
	    A[a][a]=36;
	    A[a+4][a+2]=30;
	}

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_3d_array(B, 16, 64, 64);
	deallocate_2d_array(A, 512, 128);
    return 0; 
    }