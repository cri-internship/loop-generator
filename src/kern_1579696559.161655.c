#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(560, 90, "random");
	float **C = create_two_dim_float(440, 270, "random");
	float *B = create_one_dim_float(390, "random");
	float **D = create_two_dim_float(480, 320, "random");

	for (int b = 3; b < 269; b++)
	  for (int a = 4; a < 390; a++)
	  {
	    
	     B[a]=B[a-1]-0.128;
	    
	     C[a][b]=C[a-3][b-2]/0.711;
	    
	     C[a][b]=C[a-2][b]-0.681;
	    
	     C[a][b]=C[a+1][b+1]+0.371;
	    
	     B[a]=B[a]+A[a][b]/D[a][b];
	     C[a][b]=B[a-2]+D[a][b]/A[a][b];
	    
	     float var_a=C[a][b]*0.117;
	     float var_b=C[a-4][b-3]-0.907;
	  }

    return 0;
}