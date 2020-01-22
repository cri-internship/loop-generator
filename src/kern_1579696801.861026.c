#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(940, "zeros");
	float ***A = create_three_dim_float(210, 150, 770, "zeros");
	float ***B = create_three_dim_float(590, 560, 80, "zeros");

	for (int b = 1; b < 560; b++)
	  for (int a = 4; a < 590; a++)
	  {
	    
	     B[a][b][a]=B[a-4][b-1][a-4]*0.373;
	    
	     C[a]=C[a+5]+A[a][b][a];
	    
	     float var_a=B[a][b][a]+0.184;
	     float var_b=B[a-4][b-1][a]/0.835;
	  }

    return 0;
}