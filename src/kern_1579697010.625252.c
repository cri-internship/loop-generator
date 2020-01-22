#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *E = create_one_dim_float(320, "random");
	float **C = create_two_dim_float(130, 930, "random");
	float *D = create_one_dim_float(480, "random");
	float **B = create_two_dim_float(250, 850, "random");
	float **A = create_two_dim_float(540, 930, "random");

	for (int c = 5; c < 928; c++)
	  for (int b = 3; b < 129; b++)
	    for (int a = 3; a < 129; a++)
	    {
	      
	      C[a][b]=C[a-3][b-5]/E[a]*A[a][b];
	      
	      C[a][b]=C[a+1][b+2]*0.885;
	      
	      D[a]=0.47;
	      D[a-2]=0.603;
	      
	      float var_a=C[a][b]-0.143;
	      float var_b=C[a+1][b+1]-0.84;
	    }

    return 0;
}