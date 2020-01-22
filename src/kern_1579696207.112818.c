#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(380, 290, 840, "ones");
	float **A = create_two_dim_float(820, 750, "ones");

	for (int b = 4; b < 286; b++)
	  for (int a = 0; a < 376; a++)
	  {
	    
	     A[a][b]=A[a][b-4]/0.326;
	    
	     B[a][b][a]=B[a+2][b+4][a+3]/0.653;
	    
	     B[a][b][a]=A[a][b];
	    
	     A[a][b]=A[a][b]+B[a][b][a];
	     B[a][b][a]=A[a][b+4]+B[a][b][a];
	  }

    return 0;
}