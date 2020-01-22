#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(810, "ones");
	float ***A = create_three_dim_float(1000, 760, 190, "ones");
	float *B = create_one_dim_float(390, "ones");
	float *D = create_one_dim_float(710, "ones");

	for (int a = 4; a < 386; a++)
	{
	  
	    D[a]=D[a-2]*A[a][a][a]/C[a]+B[a];
	  
	    A[a][a][a]=A[a][a+5][a+5]-0.463;
	  
	    D[a]=A[a][a][a]/B[a];
	  
	    float var_a=D[a]+0.922;
	    float var_b=D[a-4]*0.949;
	  
	    A[a][a][a]=B[a]+0.4/D[a];
	    D[a]=B[a+4]*C[a]+D[a]-A[a][a][a];
	}

    return 0;
}