#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(480, "random");

	for (int b = 5; b < 477; b++)
	  for (int a = 5; a < 477; a++)
	  {
	    
	     A[a]=A[a+3]/0.64;
	    
	     A[a]=0.485;
	    
	     double var_a=A[a]-0.741;
	     double var_b=A[a-5]/0.793;
	    
	     double var_c=A[a]*0.46;
	     double var_d=A[a-3]*0.449;
	  }

    return 0;
}