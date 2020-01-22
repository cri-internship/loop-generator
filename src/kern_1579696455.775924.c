#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(70, 750, "zeros");
	float **B = create_two_dim_float(550, 910, "zeros");

	for (int b = 5; b < 750; b++)
	  for (int a = 4; a < 70; a++)
	  {
	    
	     B[a][b]=B[a][b-5]-0.953;
	    
	     A[a][b]=A[a-3][b-5]*0.966;
	    
	     B[a][b]=B[a][b+5]-A[a][b];
	    
	     A[a][b]=B[a][b];
	  }

    return 0;
}