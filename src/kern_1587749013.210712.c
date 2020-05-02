#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(262144, "random");
    clock_t start = clock();

	for (int b = 1; b < 262144; b++)
	  for (int a = 1; a < 262144; a++)
	  {
	    
	     A[a]=A[a-1]-37;
	  }

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_1d_array(A);
    return 0; 
    }