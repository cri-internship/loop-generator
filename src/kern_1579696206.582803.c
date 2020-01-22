#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(390, "random");
	float ***C = create_three_dim_float(480, 230, 450, "random");
	float ***A = create_three_dim_float(70, 850, 800, "random");

	for (int a = 5; a < 65; a++)
	{
	  
	    B[a]=B[a-5]-C[a][a][a];
	  
	    C[a][a][a]=C[a-5][a][a-4]*0.882;
	  
	    A[a][a][a]=B[a];
	    A[a+3][a+5][a+1]=C[a][a][a];
	  
	    A[a][a][a]=0.305;
	  
	    A[a][a][a]=B[a]+0.205;
	}

    return 0;
}