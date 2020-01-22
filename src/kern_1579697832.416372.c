#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(780, "zeros");
	int **C = create_two_dim_int(10, 70, "zeros");
	int *A = create_one_dim_int(640, "zeros");

	for (int d = 4; d < 68; d++)
	  for (int c = 5; c < 8; c++)
	    for (int b = 5; b < 8; b++)
	      for (int a = 5; a < 8; a++)
	      {
	        
	       C[a][b]=C[a-5][b]-A[a]*34;
	        
	       B[a]=C[a][b]/C[a][b];
	       B[a]=C[a][b];
	        
	       A[a]=C[a][b]-A[a];
	       C[a][b]=C[a+2][b+2]+8;
	        
	       int var_a=C[a][b]-25;
	       int var_b=C[a-4][b-4]-42;
	        
	       B[a]=A[a]-B[a]+C[a][b];
	      }

    return 0;
}