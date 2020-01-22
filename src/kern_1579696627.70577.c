#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(970, "zeros");
	double *B = create_one_dim_double(390, "zeros");
	double **D = create_two_dim_double(910, 130, "zeros");
	double ***C = create_three_dim_double(770, 1000, 910, "zeros");

	for (int b = 0; b < 965; b++)
	  for (int a = 0; a < 965; a++)
	  {
	    
	     A[a]=A[a+5]*0.293;
	    
	     C[a][b][a]=A[a]*B[a];
	     B[a]=A[a+2]-C[a][b][a];
	  }

    return 0;
}