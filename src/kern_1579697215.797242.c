#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(610, 120, "zeros");
	float *C = create_one_dim_float(560, "zeros");
	float **A = create_two_dim_float(960, 620, "zeros");
	float *B = create_one_dim_float(610, "zeros");

	for (int b = 0; b < 119; b++)
	  for (int a = 5; a < 560; a++)
	  {
	    
	     C[a]=0.736;
	     float  var_a=C[a]*0.901;
	    
	     B[a]=B[a+1]/0.337;
	    
	     D[a][b]=0.223;
	     D[a+1][b+1]=0.931;
	    
	     A[a][b]=C[a]+0.768;
	     A[a+5][b+3]=D[a][b]+B[a]*D[a][b];
	    
	     float var_b=B[a]*0.719;
	     float var_c=B[a-5]*0.993;
	  }

    return 0;
}