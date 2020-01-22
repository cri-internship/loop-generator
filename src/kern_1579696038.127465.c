#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(440, "zeros");
	float *D = create_one_dim_float(310, "zeros");
	float ***C = create_three_dim_float(720, 980, 870, "zeros");
	float ***A = create_three_dim_float(600, 280, 390, "zeros");

	for (int b = 3; b < 980; b++)
	  for (int a = 4; a < 310; a++)
	  {
	    
	     C[a][b][a]=C[a-4][b-3][a-3]/0.387;
	    
	     B[a]=B[a+4]+0.166;
	    
	     D[a]=0.158;
	     D[a-2]=0.732;
	  }

    return 0;
}