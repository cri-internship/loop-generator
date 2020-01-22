#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(480, 570, 90, "ones");
	float **C = create_two_dim_float(940, 830, "ones");
	float ***B = create_three_dim_float(60, 390, 660, "ones");
	float ***E = create_three_dim_float(430, 790, 830, "ones");
	float **D = create_two_dim_float(680, 280, "ones");

	for (int a = 5; a < 426; a++)
	{
	  
	    E[a][a][a]=E[a+2][a+4][a+3]-C[a][a]+B[a][a][a]*A[a][a][a]/D[a][a];
	  
	    D[a][a]=0.928;
	    D[a-1][a-3]=0.003;
	  
	    float var_a=C[a][a]-0.897;
	    float var_b=C[a-1][a-5]*0.292;
	}

    return 0;
}