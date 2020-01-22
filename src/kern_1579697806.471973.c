#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(680, 60, 660, "zeros");
	double *B = create_one_dim_double(110, "zeros");
	double *A = create_one_dim_double(430, "zeros");

	for (int b = 4; b < 110; b++)
	  for (int a = 4; a < 110; a++)
	  {
	    
	     A[a]=0.029;
	     A[a-4]=0.178;
	    
	     B[a]=B[a]/A[a];
	     C[a][b][a]=B[a]*0.544;
	  }

    return 0;
}