#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(870, 120, 460, "ones");
	float ***E = create_three_dim_float(950, 870, 910, "ones");
	float **C = create_two_dim_float(270, 700, "ones");
	float **D = create_two_dim_float(710, 470, "ones");
	float **A = create_two_dim_float(730, 680, "ones");

	for (int d = 2; d < 470; d++)
	  for (int c = 2; c < 270; c++)
	    for (int b = 2; b < 270; b++)
	      for (int a = 2; a < 270; a++)
	      {
	        
	       D[a][b]=D[a-2][b-2]-A[a][b]+C[a][b]*E[a][b][c];
	        
	       float var_a=C[a][b]/0.211;
	       float var_b=C[a][b+2]*0.832;
	      }

    return 0;
}