#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(880, 320, 150, "ones");
	int ***E = create_three_dim_int(530, 550, 180, "ones");
	int *C = create_one_dim_int(130, "ones");
	int *D = create_one_dim_int(470, "ones");
	int *A = create_one_dim_int(590, "ones");

	for (int a = 5; a < 128; a++)
	{
	  
	    E[a][a][a]=E[a][a-1][a-5]-23;
	  
	    B[a][a][a]=B[a-5][a-1][a-4]+C[a]-A[a];
	  
	    E[a][a][a]=E[a][a+1][a+3]*B[a][a][a]/D[a]+B[a][a][a]-A[a];
	  
	    C[a]=39;
	    C[a+2]=D[a]-A[a];
	  
	    B[a][a][a]=39;
	  
	    A[a]=D[a]+A[a]-C[a]/B[a][a][a];
	    C[a]=D[a+4]/C[a]+A[a];
	}

    return 0;
}