#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(16, 16, 32, "ones");
	int *B = create_one_dim_int(65536, "ones");
    clock_t start = clock();

	for (int b = 3; b < 65536; b++)
	  for (int a = 3; a < 65536; a++)
	  {
	    
	     B[a]=B[a-3]+16;
	    
	     B[a]=1;
	  }

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_3d_array(A, 16, 16, 32);
	deallocate_1d_array(B);
    return 0; 
    }