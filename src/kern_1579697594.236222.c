#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(230, 860, "ones");
	float **B = create_two_dim_float(1000, 670, "ones");
	float **C = create_two_dim_float(940, 270, "ones");

	for (int b = 3; b < 267; b++)
	  for (int a = 2; a < 230; a++)
	  {
	    
	     B[a][b]=0.522;
	     float  var_a=B[a][b]-0.825;
	    
	     A[a][b]=A[a][b+4]/0.045;
	    
	     C[a][b]=C[a+5][b+3]-A[a][b]+B[a][b];
	    
	     B[a][b]=0.761;
	    
	     float var_b=C[a][b]-0.706;
	     float var_c=C[a-1][b-3]-0.844;
	  }

    return 0;
}