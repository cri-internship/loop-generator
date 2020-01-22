#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(720, 290, "random");
	float *A = create_one_dim_float(400, "random");
	float *E = create_one_dim_float(700, "random");
	float *B = create_one_dim_float(600, "random");
	float **C = create_two_dim_float(160, 350, "random");

	for (int b = 5; b < 290; b++)
	  for (int a = 4; a < 156; a++)
	  {
	    
	     D[a][b]=D[a+4][b]/0.38;
	    
	     E[a]=A[a]*C[a][b]+E[a]/D[a][b];
	     A[a]=B[a]/C[a][b]+D[a][b]*E[a];
	    
	     C[a][b]=C[a+2][b+5]-A[a]*A[a];
	    
	     C[a][b]=C[a+4][b+3]/0.348;
	    
	     float var_a=C[a][b]+0.679;
	     float var_b=C[a][b-3]/0.526;
	  }

    return 0;
}