#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(720, "ones");
	float ***B = create_three_dim_float(360, 940, 540, "ones");
	float **D = create_two_dim_float(540, 190, "ones");
	float ***C = create_three_dim_float(930, 190, 250, "ones");

	for (int b = 3; b < 186; b++)
	  for (int a = 5; a < 356; a++)
	  {
	    
	     D[a][b]=0.278;
	     float  var_a=D[a][b]/0.809;
	    
	     C[a][b][a]=C[a-4][b][a-5]+A[a]/D[a][b]*B[a][b][a];
	    
	     D[a][b]=D[a-4][b-3]/C[a][b][a]+0.766-C[a][b][a];
	    
	     B[a][b][a]=B[a+2][b][a+4]*0.519/C[a][b][a]+D[a][b];
	    
	     C[a][b][a]=C[a+1][b+4][a+1]*0.286+A[a];
	    
	     B[a][b][a]=0.607;
	  }

    return 0;
}