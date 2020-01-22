#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(70, 490, "zeros");
	float ***A = create_three_dim_float(840, 90, 940, "zeros");

	for (int b = 5; b < 90; b++)
	  for (int a = 5; a < 65; a++)
	  {
	    
	     A[a][b][a]=A[a-4][b-5][a-4]+0.102;
	    
	     B[a][b]=B[a-3][b]*A[a][b][a];
	    
	     B[a][b]=B[a-3][b-3]/A[a][b][a];
	    
	     float var_a=B[a][b]-0.875;
	     float var_b=B[a+5][b+2]+0.637;
	  }

    return 0;
}