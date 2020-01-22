#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(640, "zeros");
	float ***C = create_three_dim_float(960, 170, 790, "zeros");
	float ***A = create_three_dim_float(230, 580, 900, "zeros");
	float *B = create_one_dim_float(160, "zeros");

	for (int a = 5; a < 155; a++)
	{
	  
	    D[a]=0.87;
	    float  var_a=D[a]*0.35;
	  
	    D[a]=C[a][a][a]*A[a][a][a];
	  
	    float var_b=D[a]-0.305;
	    float var_c=D[a+4]+0.55;
	  
	    float var_d=A[a][a][a]+0.511;
	    float var_e=A[a-5][a-3][a-5]*0.448;
	  
	    float var_f=C[a][a][a]-0.993;
	    float var_g=C[a-2][a-1][a]-0.057;
	  
	    B[a]=B[a]-D[a]+A[a][a][a];
	    D[a]=B[a+5]/D[a];
	}

    return 0;
}