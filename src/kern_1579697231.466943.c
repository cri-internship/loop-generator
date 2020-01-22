#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(340, "zeros");
	double *A = create_one_dim_double(260, "zeros");
	double **C = create_two_dim_double(950, 980, "zeros");

	for (int b = 3; b < 978; b++)
	  for (int a = 2; a < 340; a++)
	  {
	    
	     C[a][b]=C[a-2][b-3]-A[a]/B[a];
	    
	     C[a][b]=C[a][b+2]+0.984;
	    
	     C[a][b]=B[a]-C[a][b]/0.741;
	     A[a]=B[a-2]+A[a];
	  }

    return 0;
}