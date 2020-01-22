#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(340, "random");
	float *E = create_one_dim_float(60, "random");
	float *D = create_one_dim_float(50, "random");
	float **C = create_two_dim_float(910, 380, "random");
	float *B = create_one_dim_float(30, "random");

	for (int c = 5; c < 380; c++)
	  for (int b = 5; b < 50; b++)
	    for (int a = 5; a < 50; a++)
	    {
	      
	      C[a][b]=C[a-4][b-5]*0.088;
	      
	      float var_a=D[a]*0.498;
	      float var_b=D[a-5]*0.405;
	      
	      float var_c=D[a]-0.111;
	      float var_d=D[a-1]-0.084;
	      
	      A[a]=C[a][b]+E[a]*A[a];
	      C[a][b]=C[a-1][b-4]*D[a];
	    }

    return 0;
}