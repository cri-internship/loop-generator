#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(830, "ones");
	float *E = create_one_dim_float(780, "ones");
	float **C = create_two_dim_float(900, 140, "ones");
	float *D = create_one_dim_float(900, "ones");
	float **A = create_two_dim_float(540, 250, "ones");

	for (int c = 0; c < 135; c++)
	  for (int b = 4; b < 536; b++)
	    for (int a = 4; a < 536; a++)
	    {
	      
	      B[a]=B[a-3]*C[a][b]+A[a][b];
	      
	      C[a][b]=C[a+3][b+5]*0.86;
	      
	      A[a][b]=E[a]*D[a]+B[a]/B[a];
	      A[a][b+3]=C[a][b]-E[a]/D[a]*B[a];
	      
	      A[a][b]=0.872;
	      
	      E[a]=B[a]/D[a]+A[a][b];
	      B[a]=B[a+3]/0.668+D[a];
	      
	      float var_a=D[a]+0.948;
	      float var_b=D[a-4]*0.098;
	      
	      A[a][b]=A[a][b]*C[a][b]/D[a]+B[a]-E[a];
	      D[a]=A[a+3][b+4]/C[a][b];
	    }

    return 0;
}