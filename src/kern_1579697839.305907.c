#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(460, "ones");
	float *D = create_one_dim_float(890, "ones");
	float *E = create_one_dim_float(250, "ones");
	float **A = create_two_dim_float(250, 420, "ones");
	float **C = create_two_dim_float(450, 210, "ones");

	for (int c = 2; c < 245; c++)
	  for (int b = 2; b < 245; b++)
	    for (int a = 2; a < 245; a++)
	    {
	      
	      E[a]=E[a+5]/D[a]*A[a][b]-B[a]+C[a][b];
	      
	      D[a]=D[a+2]*0.132;
	      
	      float var_a=B[a]+0.219;
	      B[a]=0.035;
	      
	      B[a]=0.456;
	      
	      D[a]=E[a]*A[a][b];
	      
	      float var_b=E[a]-0.535;
	      float var_c=E[a-2]*0.792;
	    }

    return 0;
}