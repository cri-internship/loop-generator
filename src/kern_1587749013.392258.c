#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(64, 64, 16, "ones");
	int **B = create_two_dim_int(256, 128, "ones");
    clock_t start = clock();

	for (int a = 3; a < 59; a++)
	{
	  
	    A[a][a][a]=A[a][a-1][a-3]+B[a][a];
	  
	    B[a][a]=A[a][a][a];
	    A[a][a][a]=B[a][a]+7;
	  
	    A[a][a][a]=A[a+1][a+3][a+5]*16;
	}

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_3d_array(A, 64, 64, 16);
	deallocate_2d_array(B, 256, 128);
    return 0; 
    }