#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(20, "ones");
	int *D = create_one_dim_int(530, "ones");
	int **E = create_two_dim_int(710, 140, "ones");
	int *B = create_one_dim_int(130, "ones");
	int **A = create_two_dim_int(780, 170, "ones");

	for (int a = 5; a < 15; a++)
	{
	  
	    E[a][a]=E[a-3][a-4]/D[a]+C[a];
	  
	    E[a][a]=E[a+2][a]+47;
	  
	    E[a][a]=E[a+5][a+2]/18;
	  
	    C[a]=C[a]-E[a][a]*A[a][a];
	    A[a][a]=C[a+5]/B[a]+D[a]*A[a][a]-E[a][a];
	  
	    int var_a=B[a]-41;
	    int var_b=B[a-5]*32;
	}

    return 0;
}