#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(90, "random");
	float **B = create_two_dim_float(610, 590, "random");

	for (int b = 0; b < 587; b++)
	  for (int a = 4; a < 85; a++)
	  {
	    
	     A[a]=A[a-4]-0.153;
	    
	     A[a]=A[a+5]-0.117;
	    
	     A[a]=A[a+3]+0.226;
	    
	     A[a]=A[a]-B[a][b];
	     B[a][b]=A[a-1]*B[a][b];
	    
	     B[a][b]=A[a]/B[a][b];
	    
	     float var_a=B[a][b]*0.2;
	     float var_b=B[a+3][b+3]*0.053;
	    
	     B[a][b]=A[a]*B[a][b];
	     A[a]=A[a-3]/B[a][b];
	  }

    return 0;
}