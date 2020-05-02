#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(256, 256, "zeros");
    clock_t start = clock();

	for (int a = 1; a < 251; a++)
	{
	  
	    A[a][a]=A[a+5][a+5]-25;
	  
	    int var_a=A[a][a]-34;
	    int var_b=A[a-1][a-1]+29;
	}

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_2d_array(A, 256, 256);
    return 0; 
    }