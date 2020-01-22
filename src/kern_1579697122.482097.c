#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **E = create_two_dim_float(310, 310, "zeros");
	float *B = create_one_dim_float(130, "zeros");
	float ***A = create_three_dim_float(570, 400, 960, "zeros");
	float ***C = create_three_dim_float(780, 400, 710, "zeros");
	float *D = create_one_dim_float(860, "zeros");

	for (int a = 5; a < 125; a++)
	{
	  
	    E[a][a]=E[a-4][a-5]+A[a][a][a]/0.291*B[a];
	  
	    A[a][a][a]=A[a][a-2][a-2]*0.576;
	  
	    B[a]=0.766;
	    float  var_a=B[a]+0.099;
	  
	    B[a]=B[a+1]*E[a][a]/D[a];
	  
	    float var_b=C[a][a][a]*0.97;
	    float var_c=C[a-4][a][a-4]+0.44;
	  
	    float var_d=B[a]-0.792;
	    float var_e=B[a-2]*0.313;
	}

    return 0;
}