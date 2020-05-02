#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(65536, "random");
	int *A = create_one_dim_int(262144, "random");
    clock_t start = clock();

	for (int d = 0; d < 65531; d++)
	  for (int c = 0; c < 65531; c++)
	    for (int b = 0; b < 65531; b++)
	      for (int a = 0; a < 65531; a++)
	      {
	        
	       A[a]=A[a]-20;
	       A[a]=B[a];
	        
	       B[a]=B[a+5]-1;
	      }

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_1d_array(B);
	deallocate_1d_array(A);
    return 0; 
    }