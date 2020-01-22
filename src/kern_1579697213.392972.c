#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(170, 610, "zeros");
	float ***B = create_three_dim_float(930, 210, 560, "zeros");

	for (int a = 5; a < 170; a++)
	{
	  
	    A[a][a]=A[a-3][a-3]+0.301;
	  
	    A[a][a]=A[a-2][a-4]-0.212;
	  
	    B[a][a][a]=B[a+5][a][a+3]/0.25;
	  
	    A[a][a]=0.699;
	  
	    B[a][a][a]=B[a][a+2][a+5]*A[a][a];
	  
	    float var_b=B[a][a][a]/0.607;
	    float var_c=B[a-4][a-5][a-1]*0.802;
	  
	    float var_d=B[a][a][a]+0.871;
	    float var_e=B[a][a+5][a+1]+0.619;
	}

    return 0;
}