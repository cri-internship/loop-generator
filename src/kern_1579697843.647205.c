#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(990, "ones");
	int *A = create_one_dim_int(390, "ones");
	int **B = create_two_dim_int(500, 950, "ones");

	for (int c = 5; c < 950; c++)
	  for (int b = 5; b < 500; b++)
	    for (int a = 5; a < 500; a++)
	    {
	      
	      C[a]=C[a-5]-35;
	      
	      B[a][b]=B[a-5][b-2]+13;
	      
	      B[a][b]=B[a-4][b-3]*A[a]/C[a];
	      
	      B[a][b]=B[a-2][b-5]+30;
	      
	      C[a]=38;
	      
	      int var_a=B[a][b]/17;
	      int var_b=B[a-4][b-4]-38;
	      
	      A[a]=C[a]-B[a][b];
	      B[a][b]=C[a+2]-A[a]+B[a][b];
	    }

    return 0;
}