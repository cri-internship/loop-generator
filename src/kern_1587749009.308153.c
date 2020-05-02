#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(262144, "ones");
	int **B = create_two_dim_int(512, 128, "ones");
	int *C = create_one_dim_int(65536, "ones");
    clock_t start = clock();

	for (int b = 0; b < 126; b++)
	  for (int a = 0; a < 509; a++)
	  {
	    
	     B[a][b]=B[a+3][b+2]-42;
	    
	     int var_a=C[a]-29;
	     C[a]=31;
	  }

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_1d_array(A);
	deallocate_2d_array(B, 512, 128);
	deallocate_1d_array(C);
    return 0; 
    }