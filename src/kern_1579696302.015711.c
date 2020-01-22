#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(390, "ones");
	float *A = create_one_dim_float(680, "ones");
	float *C = create_one_dim_float(460, "ones");

	for (int b = 5; b < 389; b++)
	  for (int a = 5; a < 389; a++)
	  {
	    
	     A[a]=A[a-5]/B[a]*C[a];
	    
	     B[a]=B[a+1]/A[a];
	    
	     C[a]=0.724;
	     C[a+2]=A[a]+B[a];
	    
	     A[a]=C[a]-A[a]/B[a];
	     B[a]=C[a-2]*B[a]+A[a];
	  }

    return 0;
}