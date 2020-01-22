#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(720, 120, "ones");
	float *A = create_one_dim_float(810, "ones");
	float **C = create_two_dim_float(400, 280, "ones");

	for (int b = 5; b < 117; b++)
	  for (int a = 1; a < 400; a++)
	  {
	    
	     C[a][b]=A[a];
	     C[a][b+3]=B[a][b]+A[a];
	    
	     A[a]=0.303;
	     A[a+5]=0.418;
	    
	     B[a][b]=0.748;
	     B[a+1][b+3]=0.11;
	    
	     float var_a=B[a][b]/0.618;
	     float var_b=B[a-1][b-5]-0.568;
	  }

    return 0;
}