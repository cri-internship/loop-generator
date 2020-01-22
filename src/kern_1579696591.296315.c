#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(320, 840, "random");
	float **A = create_two_dim_float(820, 80, "random");
	float ***C = create_three_dim_float(830, 600, 370, "random");
	float *E = create_one_dim_float(890, "random");
	float **D = create_two_dim_float(510, 60, "random");

	for (int a = 3; a < 815; a++)
	{
	  
	    A[a][a]=A[a-2][a-2]/D[a][a]-C[a][a][a]*0.115+E[a];
	  
	    A[a][a]=A[a+4][a+5]-0.262;
	  
	    C[a][a][a]=0.681;
	    C[a+2][a][a]=0.175;
	  
	    float var_a=C[a][a][a]-0.5;
	    float var_b=C[a-2][a-1][a-3]+0.05;
	}

    return 0;
}