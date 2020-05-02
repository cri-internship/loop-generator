#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(32, 64, 64, "random");
	int ***B = create_three_dim_int(64, 64, 64, "random");
    clock_t start = clock();

	for (int b = 2; b < 64; b++)
	  for (int a = 5; a < 28; a++)
	  {
	    
	     B[a][b][a]=B[a-4][b-1][a-3]-12;
	    
	     A[a][b][a]=A[a+4][b][a+4]+B[a][b][a];
	    
	     B[a][b][a]=50;
	  }

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_3d_array(A, 32, 64, 64);
	deallocate_3d_array(B, 64, 64, 64);
    return 0; 
    }