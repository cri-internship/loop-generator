#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(900, 450, "ones");
	float **B = create_two_dim_float(110, 580, "ones");

	for (int b = 4; b < 445; b++)
	  for (int a = 5; a < 108; a++)
	  {
	    
	     A[a][b]=A[a-2][b-2]-0.72;
	    
	     B[a][b]=B[a-5][b-4]-0.559;
	    
	     A[a][b]=A[a+5][b+5]-0.136;
	    
	     B[a][b]=B[a+1][b+4]+A[a][b];
	  }

    return 0;
}