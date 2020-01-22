#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(20, 840, 90, "zeros");
	float ***B = create_three_dim_float(790, 310, 470, "zeros");
	float ***C = create_three_dim_float(950, 790, 180, "zeros");
	float **D = create_two_dim_float(270, 960, "zeros");

	for (int b = 2; b < 310; b++)
	  for (int a = 5; a < 790; a++)
	  {
	    
	     D[a][b]=B[a][b][a]*D[a][b]+C[a][b][a]-A[a][b][a];
	     C[a][b][a]=B[a-5][b-2][a-3]+C[a][b][a];
	  }

    return 0;
}