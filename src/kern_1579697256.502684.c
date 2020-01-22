#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(670, 930, 650, "random");
	float ***C = create_three_dim_float(650, 380, 840, "random");
	float *A = create_one_dim_float(200, "random");
	float *B = create_one_dim_float(750, "random");

	for (int a = 4; a < 195; a++)
	{
	  
	    D[a][a][a]=D[a+2][a+4][a+1]-0.441;
	  
	    C[a][a][a]=0.774;
	    C[a-2][a-4][a-3]=0.697;
	  
	    A[a]=0.551;
	    A[a+5]=0.714;
	  
	    D[a][a][a]=A[a]*C[a][a][a];
	  
	    float var_a=B[a]-0.477;
	    float var_b=B[a]+0.611;
	  
	    float var_c=C[a][a][a]*0.491;
	    float var_d=C[a+3][a][a+2]/0.959;
	}

    return 0;
}