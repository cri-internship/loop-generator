#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(256, 256, "ones");
	int *B = create_one_dim_int(65536, "ones");
    clock_t start = clock();

	for (int d = 0; d < 254; d++)
	  for (int c = 4; c < 253; c++)
	    for (int b = 4; b < 253; b++)
	      for (int a = 4; a < 253; a++)
	      {
	        
	       B[a]=B[a+2]-A[a][b];
	        
	       int var_a=A[a][b]*29;
	       A[a][b]=24;
	        
	       int var_b=B[a]*3;
	       int var_c=B[a-4]*7;
	        
	       int var_d=A[a][b]*30;
	       int var_e=A[a+3][b+2]-4;
	      }

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_2d_array(A, 256, 256);
	deallocate_1d_array(B);
    return 0; 
    }