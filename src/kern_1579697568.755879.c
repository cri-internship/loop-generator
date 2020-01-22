#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(630, 590, "zeros");
	float **B = create_two_dim_float(990, 600, "zeros");
	float ***C = create_three_dim_float(420, 760, 360, "zeros");

	for (int b = 4; b < 589; b++)
	  for (int a = 4; a < 420; a++)
	  {
	    
	     C[a][b][a]=C[a-4][b-4][a-4]*0.968;
	    
	     B[a][b]=B[a-3][b-3]-0.766;
	    
	     A[a][b]=0.118;
	     A[a+2][b+1]=0.88;
	    
	     B[a][b]=0.65;
	  }

    return 0;
}