#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *E = create_one_dim_float(980, "zeros");
	float ***D = create_three_dim_float(30, 350, 150, "zeros");
	float *C = create_one_dim_float(430, "zeros");
	float ***A = create_three_dim_float(740, 860, 800, "zeros");
	float ***B = create_three_dim_float(390, 930, 400, "zeros");

	for (int a = 5; a < 385; a++)
	{
	  
	    E[a]=E[a+1]*A[a][a][a]-B[a][a][a];
	  
	    B[a][a][a]=0.74;
	    B[a+5][a][a+3]=0.435;
	  
	    C[a]=0.919;
	    C[a]=0.706;
	  
	    float var_a=A[a][a][a]-0.966;
	    float var_b=A[a-1][a-5][a-1]*0.697;
	}

    return 0;
}