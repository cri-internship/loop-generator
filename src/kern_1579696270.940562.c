#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(500, 550, "ones");
	float **B = create_two_dim_float(910, 450, "ones");
	float ***C = create_three_dim_float(600, 150, 910, "ones");
	float ***D = create_three_dim_float(660, 970, 860, "ones");
	float ***E = create_three_dim_float(290, 690, 900, "ones");

	for (int b = 4; b < 150; b++)
	  for (int a = 5; a < 500; a++)
	  {
	    
	     A[a][b]=A[a-2][b-1]-0.059;
	    
	     C[a][b][a]=C[a-5][b-4][a-2]+0.259;
	  }

    return 0;
}