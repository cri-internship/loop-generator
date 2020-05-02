#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(256, 256, "ones");
	int **B = create_two_dim_int(256, 512, "ones");
	int **A = create_two_dim_int(128, 256, "ones");
    clock_t start = clock();

	for (int d = 5; d < 254; d++)
	  for (int c = 4; c < 254; c++)
	    for (int b = 4; b < 254; b++)
	      for (int a = 4; a < 254; a++)
	      {
	        
	       B[a][b]=B[a-3][b]*42;
	        
	       C[a][b]=C[a-2][b-3]-18;
	        
	       C[a][b]=C[a+2][b+2]+B[a][b]*A[a][b];
	        
	       B[a][b]=24;
	        
	       A[a][b]=C[a][b]+9*B[a][b];
	       B[a][b]=C[a-4][b-3]-A[a][b]*B[a][b];
	      }

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_2d_array(C, 256, 256);
	deallocate_2d_array(B, 256, 512);
	deallocate_2d_array(A, 128, 256);
    return 0; 
    }