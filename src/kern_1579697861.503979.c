#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(580, "ones");
	float **A = create_two_dim_float(570, 90, "ones");

	for (int b = 0; b < 85; b++)
	  for (int a = 4; a < 565; a++)
	  {
	    
	     B[a]=B[a+5]/0.033;
	    
	     A[a][b]=A[a][b+1]*0.751;
	    
	     A[a][b]=A[a+1][b+5]-0.098;
	    
	     A[a][b]=B[a]+0.046;
	     B[a]=B[a-4]*A[a][b];
	    
	     float var_a=A[a][b]+0.568;
	     float var_b=A[a+5][b]*0.817;
	  }

    return 0;
}