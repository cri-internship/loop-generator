#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(940, "random");
	float **A = create_two_dim_float(20, 20, "random");
	float ***C = create_three_dim_float(450, 640, 70, "random");
	float **B = create_two_dim_float(70, 770, "random");

	for (int b = 3; b < 17; b++)
	  for (int a = 4; a < 18; a++)
	  {
	    
	     A[a][b]=A[a-4][b-3]/C[a][b][a]*0.793;
	    
	     C[a][b][a]=C[a+3][b+1][a]/0.393;
	    
	     A[a][b]=A[a+2][b+3]*D[a];
	    
	     C[a][b][a]=0.985;
	    
	     float var_a=C[a][b][a]+0.155;
	     float var_b=C[a+4][b+4][a+2]+0.817;
	  }

    return 0;
}