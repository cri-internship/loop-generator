#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(990, 210, 930, "ones");
	float **A = create_two_dim_float(510, 70, "ones");

	for (int b = 4; b < 66; b++)
	  for (int a = 4; a < 508; a++)
	  {
	    
	     A[a][b]=A[a-4][b-2]+B[a][b][a];
	    
	     A[a][b]=A[a+1][b+2]*0.182;
	    
	     A[a][b]=A[a+2][b+4]-0.395;
	    
	     A[a][b]=B[a][b][a]+A[a][b];
	     B[a][b][a]=B[a+5][b+4][a+2]+0.362;
	    
	     B[a][b][a]=B[a][b][a]/A[a][b];
	     B[a][b][a]=B[a-4][b-4][a-3]+A[a][b];
	    
	     float var_a=A[a][b]*0.135;
	     float var_b=A[a][b+3]*0.833;
	  }

    return 0;
}