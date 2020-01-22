#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(510, "random");

	for (int b = 5; b < 505; b++)
	  for (int a = 5; a < 505; a++)
	  {
	    
	     A[a]=0.745;
	     A[a]=0.916;
	    
	     double var_a=A[a]/0.557;
	     double var_b=A[a+5]-0.433;
	    
	     double var_c=A[a]*0.606;
	     double var_d=A[a-2]+0.207;
	    
	     double var_e=A[a]*0.292;
	  }

    return 0;
}