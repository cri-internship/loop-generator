#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(860, 960, 830, "ones");
	float ***A = create_three_dim_float(590, 700, 960, "ones");
	float **D = create_two_dim_float(370, 620, "ones");
	float ***C = create_three_dim_float(910, 970, 150, "ones");

	for (int b = 0; b < 955; b++)
	  for (int a = 0; a < 859; a++)
	  {
	    
	     B[a][b][a]=B[a+1][b+5][a+1]-D[a][b]/C[a][b][a];
	    
	     C[a][b][a]=C[a+3][b+2][a+1]/A[a][b][a]-B[a][b][a]+A[a][b][a];
	    
	     float var_a=C[a][b][a]*0.655;
	  }

    return 0;
}