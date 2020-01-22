#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(800, "ones");
	float ***A = create_three_dim_float(760, 480, 180, "ones");

	for (int b = 3; b < 476; b++)
	  for (int a = 4; a < 755; a++)
	  {
	    
	     A[a][b][a]=A[a-4][b-1][a-1]*0.027;
	    
	     A[a][b][a]=A[a+5][b+4][a+5]*0.06;
	    
	     B[a]=A[a][b][a];
	     B[a-4]=A[a][b][a];
	    
	     float var_a=A[a][b][a]+0.113;
	     float var_b=A[a-3][b-3][a-4]/0.493;
	  }

    return 0;
}