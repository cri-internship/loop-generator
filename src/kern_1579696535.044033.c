#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(370, "zeros");
	double *B = create_one_dim_double(460, "zeros");
	double *A = create_one_dim_double(110, "zeros");

	for (int d = 5; d < 108; d++)
	  for (int c = 5; c < 108; c++)
	    for (int b = 5; b < 108; b++)
	      for (int a = 5; a < 108; a++)
	      {
	        
	       A[a]=A[a-5]-0.248;
	        
	       C[a]=0.854;
	       float  var_a=C[a]+0.226;
	        
	       A[a]=A[a+2]-B[a];
	        
	       C[a]=C[a+2]+0.719;
	      }

    return 0;
}