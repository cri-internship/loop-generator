#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(512, 256, "random");
	int *C = create_one_dim_int(262144, "random");
	int **A = create_two_dim_int(256, 512, "random");
    clock_t start = clock();

	for (int d = 3; d < 256; d++)
	  for (int c = 2; c < 256; c++)
	    for (int b = 2; b < 256; b++)
	      for (int a = 2; a < 256; a++)
	      {
	        
	       B[a][b]=B[a-1][b-3]+10;
	        
	       C[a]=C[a-1]-27;
	        
	       A[a][b]=A[a-2][b-1]+28;
	        
	       C[a]=C[a+1]+B[a][b];
	      }

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_2d_array(B, 512, 256);
	deallocate_1d_array(C);
	deallocate_2d_array(A, 256, 512);
    return 0; 
    }