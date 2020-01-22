#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(130, "ones");
	double **C = create_two_dim_double(480, 500, "ones");
	double *A = create_one_dim_double(650, "ones");

	for (int b = 0; b < 650; b++)
	  for (int a = 0; a < 650; a++)
	  {
	    
	     B[a]=A[a]-0.118;
	     A[a]=C[a][b];
	  }

    return 0;
}