#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(820, "ones");
	double *B = create_one_dim_double(370, "ones");

	for (int b = 0; b < 368; b++)
	  for (int a = 0; a < 368; a++)
	  {
	    
	     double var_a=A[a]/0.611;
	     A[a]=0.748;
	    
	     A[a]=B[a]-A[a];
	     B[a]=B[a+2]*0.054;
	  }

    return 0;
}