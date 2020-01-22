#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(230, 890, "ones");
	float **A = create_two_dim_float(230, 860, "ones");
	float ***B = create_three_dim_float(240, 400, 930, "ones");
	float *E = create_one_dim_float(220, "ones");
	float ***C = create_three_dim_float(530, 990, 610, "ones");

	for (int c = 3; c < 860; c++)
	  for (int b = 5; b < 230; b++)
	    for (int a = 5; a < 230; a++)
	    {
	      
	      D[a][b]=D[a-5][b-3]+0.832;
	      
	      D[a][b]=0.049;
	      
	      float var_b=A[a][b]*0.121;
	      float var_c=A[a-1][b]-0.776;
	    }

    return 0;
}