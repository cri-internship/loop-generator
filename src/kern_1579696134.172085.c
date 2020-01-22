#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(550, 510, "zeros");

	for (int b = 0; b < 507; b++)
	  for (int a = 0; a < 549; a++)
	  {
	    
	     A[a][b]=0.746;
	     A[a+1][b+3]=0.594;
	  }

    return 0;
}