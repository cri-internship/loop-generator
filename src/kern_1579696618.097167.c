#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(500, "random");
	float **B = create_two_dim_float(20, 660, "random");
	float *E = create_one_dim_float(270, "random");
	float ***A = create_three_dim_float(400, 530, 350, "random");
	float ***D = create_three_dim_float(150, 60, 870, "random");

	for (int b = 0; b < 56; b++)
	  for (int a = 4; a < 15; a++)
	  {
	    
	     C[a]=C[a-3]*A[a][b][a]/B[a][b]-E[a]+D[a][b][a];
	    
	     C[a]=C[a-2]-0.599;
	    
	     D[a][b][a]=D[a-4][b][a-4]+0.088;
	    
	     E[a]=E[a-1]+C[a]*C[a]/D[a][b][a]-A[a][b][a];
	    
	     B[a][b]=B[a+5][b+4]+0.637;
	    
	     float var_a=D[a][b][a]-0.891;
	     float var_b=D[a+5][b+4][a+5]/0.156;
	  }

    return 0;
}