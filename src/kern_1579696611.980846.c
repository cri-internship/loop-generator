#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(490, 650, "zeros");
	float **A = create_two_dim_float(100, 180, "zeros");

	for (int b = 5; b < 648; b++)
	  for (int a = 3; a < 486; a++)
	  {
	    
	     B[a][b]=B[a-3][b]/A[a][b];
	    
	     B[a][b]=B[a-2][b-5]*A[a][b];
	    
	     B[a][b]=B[a+4][b+2]*A[a][b];
	  }

    return 0;
}