#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(500, "ones");
	double *C = create_one_dim_double(450, "ones");
	double *B = create_one_dim_double(860, "ones");
	double *A = create_one_dim_double(260, "ones");

	for (int b = 5; b < 257; b++)
	  for (int a = 5; a < 257; a++)
	  {
	    
	     B[a]=B[a-2]+D[a];
	    
	     A[a]=A[a+3]*0.992;
	    
	     D[a]=B[a]*A[a]-C[a];
	     A[a]=B[a-5]/D[a]*C[a]-A[a];
	    
	     double var_a=B[a]/0.629;
	  }

    return 0;
}