#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(670, 660, "zeros");

	for (int b = 2; b < 660; b++)
	  for (int a = 5; a < 670; a++)
	  {
	    
	     A[a][b]=0.158;
	     A[a][b-1]=0.991;
	    
	     A[a][b]=0.011;
	  }

    return 0;
}