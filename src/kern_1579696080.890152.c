#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(370, 360, 440, "random");
	float **B = create_two_dim_float(160, 510, "random");
	float *C = create_one_dim_float(740, "random");
	float **A = create_two_dim_float(720, 590, "random");
	float **E = create_two_dim_float(410, 30, "random");

	for (int b = 4; b < 30; b++)
	  for (int a = 4; a < 410; a++)
	  {
	    
	     E[a][b]=E[a-4][b-4]+0.999;
	    
	     D[a][b][a]=C[a]/B[a][b]*E[a][b]+A[a][b];
	     C[a]=C[a-1]+D[a][b][a]/E[a][b];
	    
	     float var_a=C[a]-0.277;
	     float var_b=C[a+3]*0.527;
	  }

    return 0;
}