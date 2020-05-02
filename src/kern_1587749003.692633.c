#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(131072, "random");
	int ***B = create_three_dim_int(32, 16, 32, "random");
    clock_t start = clock();

	for (int b = 2; b < 131072; b++)
	  for (int a = 2; a < 131072; a++)
	  {
	    
	     A[a]=12;
	     A[a-2]=9;
	  }

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_1d_array(A);
	deallocate_3d_array(B, 32, 16, 32);
    return 0; 
    }