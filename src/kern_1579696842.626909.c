#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(510, "zeros");
	float *C = create_one_dim_float(350, "zeros");
	float *D = create_one_dim_float(550, "zeros");
	float *B = create_one_dim_float(20, "zeros");

	for (int b = 3; b < 18; b++)
	  for (int a = 3; a < 18; a++)
	  {
	    
	     A[a]=0.76;
	     float  var_a=A[a]/0.991;
	    
	     D[a]=D[a-2]-0.389;
	    
	     C[a]=C[a+4]/D[a]+A[a];
	    
	     B[a]=C[a]+D[a];
	     B[a+2]=C[a]*D[a]-A[a];
	    
	     D[a]=0.794;
	    
	     D[a]=D[a]+B[a];
	     A[a]=D[a-3]*C[a];
	  }

    return 0;
}