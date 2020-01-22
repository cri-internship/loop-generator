#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(620, 570, "ones");
	float ***A = create_three_dim_float(70, 520, 570, "ones");
	float **C = create_two_dim_float(770, 680, "ones");
	float *D = create_one_dim_float(930, "ones");
	float ***E = create_three_dim_float(110, 110, 60, "ones");

	for (int b = 3; b < 516; b++)
	  for (int a = 4; a < 65; a++)
	  {
	    
	     B[a][b]=B[a-4][b-3]/0.711;
	    
	     float var_a=C[a][b]/0.61;
	     C[a][b]=0.512;
	    
	     A[a][b][a]=A[a][b+3][a]/0.56;
	    
	     A[a][b][a]=C[a][b]-B[a][b];
	  }

    return 0;
}