#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(256, 256, "ones");
	int *B = create_one_dim_int(131072, "ones");
	int **A = create_two_dim_int(256, 128, "ones");
    clock_t start = clock();

	for (int d = 5; d < 256; d++)
	  for (int c = 5; c < 256; c++)
	    for (int b = 5; b < 256; b++)
	      for (int a = 5; a < 256; a++)
	      {
	        
	       B[a]=B[a-3]+18;
	        
	       B[a]=B[a+5]*C[a][b]-3;
	        
	       C[a][b]=B[a];
	       C[a-4][b-3]=8;
	        
	       C[a][b]=C[a][b]*A[a][b];
	       B[a]=C[a-5][b-5]*B[a]+A[a][b];
	      }

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_2d_array(C, 256, 256);
	deallocate_1d_array(B);
	deallocate_2d_array(A, 256, 128);
    return 0; 
    }