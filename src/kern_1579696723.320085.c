#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(820, "random");
	int **A = create_two_dim_int(950, 820, "random");
	int **C = create_two_dim_int(810, 980, "random");

	for (int c = 0; c < 815; c++)
	  for (int b = 0; b < 805; b++)
	    for (int a = 0; a < 805; a++)
	    {
	      
	      B[a]=42;
	      float  var_a=B[a]+22;
	      
	      A[a][b]=A[a+2][b+5]-35;
	      
	      C[a][b]=B[a];
	      C[a][b]=B[a]-A[a][b];
	      
	      B[a]=B[a]+37-C[a][b];
	      C[a][b]=B[a+3]*C[a][b];
	    }

    return 0;
}