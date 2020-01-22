#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(490, 340, "zeros");
	float *B = create_one_dim_float(930, "zeros");
	float ***C = create_three_dim_float(100, 360, 650, "zeros");

	for (int b = 1; b < 358; b++)
	  for (int a = 5; a < 97; a++)
	  {
	    
	     B[a]=B[a-5]/0.511;
	    
	     C[a][b][a]=B[a];
	     C[a+3][b+2][a+1]=0.669;
	    
	     float var_a=C[a][b][a]*0.618;
	     float var_b=C[a-4][b-1][a-4]*0.889;
	  }

    return 0;
}