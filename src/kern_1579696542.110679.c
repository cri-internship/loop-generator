#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(40, "zeros");
	double *C = create_one_dim_double(470, "zeros");
	double **A = create_two_dim_double(410, 490, "zeros");

	for (int d = 3; d < 38; d++)
	  for (int c = 3; c < 38; c++)
	    for (int b = 3; b < 38; b++)
	      for (int a = 3; a < 38; a++)
	      {
	        
	       C[a]=C[a-3]+A[a][b]*B[a];
	        
	       B[a]=B[a-2]*C[a]/A[a][b];
	        
	       B[a]=B[a+2]+A[a][b]-C[a];
	      }

    return 0;
}