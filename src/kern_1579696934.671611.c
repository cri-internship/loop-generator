#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(950, 870, 910, "ones");
	float ***B = create_three_dim_float(310, 860, 200, "ones");
	float **D = create_two_dim_float(910, 190, "ones");
	float *C = create_one_dim_float(180, "ones");

	for (int b = 5; b < 865; b++)
	  for (int a = 4; a < 946; a++)
	  {
	    
	     A[a][b][a]=A[a-2][b-5][a-3]/C[a]-D[a][b]+B[a][b][a];
	    
	     A[a][b][a]=A[a+1][b+4][a+2]+0.624;
	    
	     float var_a=A[a][b][a]/0.602;
	     float var_b=A[a-4][b-3][a-1]/0.533;
	    
	     float var_c=A[a][b][a]+0.251;
	     float var_d=A[a+4][b+5][a+2]+0.083;
	  }

    return 0;
}