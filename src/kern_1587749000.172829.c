#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(65536, "ones");
	int *A = create_one_dim_int(65536, "ones");
    clock_t start = clock();

	for (int d = 2; d < 65531; d++)
	  for (int c = 2; c < 65531; c++)
	    for (int b = 2; b < 65531; b++)
	      for (int a = 2; a < 65531; a++)
	      {
	        
	       B[a]=B[a-2]-7;
	        
	       B[a]=B[a+4]+32;
	      }

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_1d_array(B);
	deallocate_1d_array(A);
    return 0; 
    }