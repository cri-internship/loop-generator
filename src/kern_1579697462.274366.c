#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(930, "ones");
	float **A = create_two_dim_float(270, 990, "ones");

	for (int b = 0; b < 986; b++)
	  for (int a = 3; a < 265; a++)
	  {
	    
	     A[a][b]=A[a][b+4]-B[a];
	    
	     A[a][b]=A[a+5][b+1]/0.138;
	    
	     B[a]=B[a+4]+0.315;
	    
	     A[a][b]=A[a+1][b+2]*0.378;
	    
	     B[a]=0.2;
	  }

    return 0;
}