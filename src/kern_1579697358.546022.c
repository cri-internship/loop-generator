#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(80, "random");
	double *A = create_one_dim_double(860, "random");
	double *D = create_one_dim_double(920, "random");
	double *C = create_one_dim_double(200, "random");

	for (int c = 4; c < 199; c++)
	  for (int b = 4; b < 199; b++)
	    for (int a = 4; a < 199; a++)
	    {
	      
	      A[a]=A[a+5]*0.408;
	      
	      A[a]=A[a+2]/D[a]-B[a];
	      
	      D[a]=0.353;
	      D[a]=0.511;
	      
	      B[a]=C[a]/A[a]-D[a]+B[a];
	      D[a]=C[a+1]/A[a];
	      
	      double var_a=A[a]/0.314;
	      double var_b=A[a-4]*0.997;
	      
	      C[a]=D[a]-0.938;
	      A[a]=D[a-3]-0.153/C[a];
	    }

    return 0;
}