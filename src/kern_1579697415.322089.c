#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(920, 380, "random");
	float **A = create_two_dim_float(510, 360, "random");

	for (int b = 5; b < 360; b++)
	  for (int a = 5; a < 510; a++)
	  {
	    
	     A[a][b]=A[a-3][b-4]+B[a][b];
	    
	     B[a][b]=B[a][b-2]+A[a][b];
	    
	     B[a][b]=B[a-5][b-5]+A[a][b];
	    
	     B[a][b]=B[a+2][b+5]-0.349;
	    
	     A[a][b]=B[a][b];
	  }

    return 0;
}