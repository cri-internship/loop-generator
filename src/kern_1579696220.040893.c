#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(660, 130, "ones");
	float ***B = create_three_dim_float(400, 170, 420, "ones");

	for (int a = 5; a < 395; a++)
	{
	  
	    B[a][a][a]=B[a+5][a+2][a+4]*0.086;
	  
	    A[a][a]=A[a+1][a+4]*0.809;
	  
	    B[a][a][a]=0.647;
	  
	    A[a][a]=B[a][a][a];
	  
	    B[a][a][a]=A[a][a]-B[a][a][a];
	    A[a][a]=A[a+2][a]-0.021;
	  
	    float var_a=A[a][a]+0.399;
	    float var_b=A[a][a+5]*0.274;
	  
	    B[a][a][a]=B[a][a][a]/A[a][a];
	    A[a][a]=B[a-4][a][a-5]*A[a][a];
	}

    return 0;
}