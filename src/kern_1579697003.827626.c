#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(440, "random");
	double *A = create_one_dim_double(570, "random");

	for (int c = 5; c < 439; c++)
	  for (int b = 5; b < 439; b++)
	    for (int a = 5; a < 439; a++)
	    {
	      
	      A[a]=A[a-5]*0.003;
	      
	      B[a]=B[a-1]/0.489;
	      
	      A[a]=0.859;
	      
	      B[a]=0.135;
	      
	      double var_b=B[a]*0.65;
	      double var_c=B[a+1]*0.714;
	      
	      double var_d=A[a]*0.531;
	      double var_e=A[a+4]*0.451;
	    }

    return 0;
}