#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(300, 940, "ones");
	float ***B = create_three_dim_float(600, 730, 550, "ones");
	float **A = create_two_dim_float(860, 570, "ones");

	for (int b = 0; b < 730; b++)
	  for (int a = 5; a < 600; a++)
	  {
	    
	     C[a][b]=B[a][b][a]+A[a][b];
	     A[a][b]=B[a-5][b][a-3]/C[a][b];
	  }

    return 0;
}