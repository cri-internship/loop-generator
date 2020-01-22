#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(550, "ones");
	float *A = create_one_dim_float(40, "ones");
	float *C = create_one_dim_float(610, "ones");
	float ***B = create_three_dim_float(940, 470, 420, "ones");

	for (int a = 5; a < 40; a++)
	{
	  
	    C[a]=C[a-4]/D[a];
	  
	    A[a]=A[a-5]-C[a]+B[a][a][a]*D[a];
	  
	    B[a][a][a]=B[a-2][a-1][a-5]-0.974;
	  
	    B[a][a][a]=B[a][a+5][a+2]+0.929;
	  
	    D[a]=0.302;
	    D[a-1]=0.859;
	  
	    C[a]=A[a]/D[a]*B[a][a][a];
	}

    return 0;
}