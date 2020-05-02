#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(262144, "ones");
	int *A = create_one_dim_int(65536, "ones");
	int *B = create_one_dim_int(131072, "ones");
    clock_t start = clock();

	for (int b = 2; b < 65536; b++)
	  for (int a = 2; a < 65536; a++)
	  {
	    
	     B[a]=B[a+3]-C[a];
	    
	     B[a]=37;
	    
	     C[a]=A[a]-B[a];
	     B[a]=A[a-2]*B[a]-C[a];
	  }

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_1d_array(C);
	deallocate_1d_array(A);
	deallocate_1d_array(B);
    return 0; 
    }