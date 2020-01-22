#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(900, 840, "zeros");
	float **A = create_two_dim_float(890, 590, "zeros");

	for (int b = 4; b < 589; b++)
	  for (int a = 5; a < 890; a++)
	  {
	    
	     A[a][b]=A[a-1][b]*0.239;
	    
	     B[a][b]=B[a-4][b-4]+0.564;
	    
	     A[a][b]=A[a-4][b-3]+0.597;
	    
	     B[a][b]=B[a+4][b+5]/A[a][b];
	    
	     float var_a=A[a][b]+0.721;
	     float var_b=A[a][b+1]+0.028;
	  }

    return 0;
}