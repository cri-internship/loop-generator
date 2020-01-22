#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **E = create_two_dim_float(490, 270, "ones");
	float **B = create_two_dim_float(360, 720, "ones");
	float **A = create_two_dim_float(650, 670, "ones");
	float **D = create_two_dim_float(1000, 870, "ones");
	float *C = create_one_dim_float(930, "ones");

	for (int c = 5; c < 266; c++)
	  for (int b = 5; b < 487; b++)
	    for (int a = 5; a < 487; a++)
	    {
	      
	      float var_a=C[a]-0.292;
	      C[a]=0.475;
	      
	      E[a][b]=B[a][b]*0.594-A[a][b];
	      E[a-5][b-5]=C[a]+C[a]/D[a][b]-A[a][b];
	      
	      E[a][b]=A[a][b];
	      
	      D[a][b]=0.379;
	      D[a-2][b-5]=0.372;
	      
	      C[a]=0.189;
	      
	      float var_b=C[a]*0.244;
	      float var_c=C[a+4]+0.857;
	    }

    return 0;
}