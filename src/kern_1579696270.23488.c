#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(620, 940, 530, "random");
	float *C = create_one_dim_float(550, "random");
	float *A = create_one_dim_float(600, "random");
	float **B = create_two_dim_float(780, 240, "random");

	for (int b = 0; b < 239; b++)
	  for (int a = 0; a < 550; a++)
	  {
	    
	     B[a][b]=B[a+4][b+1]/D[a][b][a]-C[a]*A[a];
	    
	     float var_a=C[a]*0.163;
	  }

    return 0;
}