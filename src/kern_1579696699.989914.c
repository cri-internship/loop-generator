#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(890, 290, 710, "random");
	float **A = create_two_dim_float(250, 90, "random");
	float *B = create_one_dim_float(90, "random");
	float ***E = create_three_dim_float(600, 380, 720, "random");
	float *C = create_one_dim_float(510, "random");

	for (int a = 4; a < 90; a++)
	{
	  
	    D[a][a][a]=D[a-1][a-1][a-2]/C[a]+E[a][a][a]-B[a];
	  
	    B[a]=0.856;
	    float  var_a=B[a]*0.794;
	  
	    C[a]=C[a-2]/D[a][a][a]-A[a][a]*B[a];
	  
	    E[a][a][a]=E[a-1][a][a-3]-C[a]*B[a];
	  
	    A[a][a]=A[a+1][a+1]-0.985;
	  
	    C[a]=0.657;
	}

    return 0;
}