#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(480, 800, "ones");
	float **B = create_two_dim_float(920, 860, "ones");
	float ***E = create_three_dim_float(330, 570, 970, "ones");
	float ***D = create_three_dim_float(950, 930, 570, "ones");
	float ***C = create_three_dim_float(760, 50, 870, "ones");

	for (int b = 4; b < 570; b++)
	  for (int a = 5; a < 329; a++)
	  {
	    
	     E[a][b][a]=E[a-4][b-1][a]-0.75;
	    
	     E[a][b][a]=E[a+1][b][a+1]-0.414;
	    
	     D[a][b][a]=0.185;
	     D[a-5][b-4][a]=0.15;
	  }

    return 0;
}