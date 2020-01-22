#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(990, 970, "ones");
	float **B = create_two_dim_float(250, 740, "ones");

	for (int b = 4; b < 737; b++)
	  for (int a = 5; a < 246; a++)
	  {
	    
	     B[a][b]=B[a+4][b+3]*A[a][b];
	    
	     B[a][b]=B[a+4][b+1]/A[a][b];
	    
	     A[a][b]=B[a][b]*0.063;
	     B[a][b]=B[a][b+3]*A[a][b];
	    
	     float var_a=A[a][b]/0.27;
	     float var_b=A[a-4][b-4]/0.347;
	  }

    return 0;
}