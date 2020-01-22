#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(850, "ones");
	double *A = create_one_dim_double(960, "ones");
	double *C = create_one_dim_double(520, "ones");

	for (int c = 5; c < 516; c++)
	  for (int b = 5; b < 516; b++)
	    for (int a = 5; a < 516; a++)
	    {
	      
	      double var_a=C[a]-0.18;
	      C[a]=0.608;
	      
	      C[a]=B[a];
	      
	      double var_b=C[a]/0.671;
	      double var_c=C[a-5]+0.839;
	      
	      double var_d=C[a]/0.674;
	      double var_e=C[a+4]/0.214;
	      
	      C[a]=A[a]/C[a]*C[a];
	      A[a]=A[a+2]-C[a];
	    }

    return 0;
}