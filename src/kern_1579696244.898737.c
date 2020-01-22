#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(100, 360, "zeros");
	float *D = create_one_dim_float(900, "zeros");
	float *A = create_one_dim_float(1000, "zeros");
	float ***C = create_three_dim_float(340, 850, 490, "zeros");
	float ***E = create_three_dim_float(600, 950, 810, "zeros");

	for (int b = 0; b < 948; b++)
	  for (int a = 5; a < 599; a++)
	  {
	    
	     A[a]=A[a-5]*0.411;
	    
	     A[a]=0.779;
	    
	     E[a][b][a]=0.581;
	     E[a+1][b+2][a]=0.333;
	    
	     float var_b=D[a]/0.176;
	     float var_c=D[a+3]*0.602;
	  }

    return 0;
}