#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(140, "zeros");
	double *A = create_one_dim_double(200, "zeros");
	double **B = create_two_dim_double(520, 410, "zeros");

	for (int c = 4; c < 410; c++)
	  for (int b = 5; b < 140; b++)
	    for (int a = 5; a < 140; a++)
	    {
	      
	      C[a]=C[a-2]/0.616;
	      
	      A[a]=A[a+4]+0.542;
	      
	      B[a][b]=0.415;
	      B[a-5][b-3]=0.295;
	      
	      B[a][b]=0.269;
	      
	      double var_a=A[a]+0.786;
	      double var_b=A[a-3]+0.054;
	    }

    return 0;
}