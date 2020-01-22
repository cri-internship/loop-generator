#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(130, 910, "ones");
	float **B = create_two_dim_float(270, 900, "ones");

	for (int b = 5; b < 900; b++)
	  for (int a = 3; a < 130; a++)
	  {
	    
	     A[a][b]=A[a-3][b-5]+0.715;
	    
	     B[a][b]=B[a+4][b]-A[a][b];
	  }

    return 0;
}