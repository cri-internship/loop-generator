#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(220, "ones");
	float *C = create_one_dim_float(150, "ones");
	float *B = create_one_dim_float(160, "ones");

	for (int c = 5; c < 145; c++)
	  for (int b = 5; b < 145; b++)
	    for (int a = 5; a < 145; a++)
	    {
	      
	      B[a]=B[a-3]+0.721;
	      
	      C[a]=C[a+5]+0.457;
	      
	      C[a]=C[a+4]*A[a]/B[a];
	      
	      A[a]=C[a]*B[a];
	      A[a+4]=B[a];
	      
	      B[a]=A[a];
	    }

    return 0;
}