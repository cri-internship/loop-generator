#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **E = create_two_dim_float(940, 250, "random");
	float ***A = create_three_dim_float(860, 100, 990, "random");
	float ***C = create_three_dim_float(600, 980, 310, "random");
	float **D = create_two_dim_float(660, 610, "random");
	float **B = create_two_dim_float(440, 890, "random");

	for (int b = 0; b < 888; b++)
	  for (int a = 0; a < 440; a++)
	  {
	    
	     B[a][b]=B[a][b+2]+D[a][b]/C[a][b][a];
	  }

    return 0;
}