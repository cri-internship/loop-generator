#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(930, 620, "random");
	int *A = create_one_dim_int(110, "random");
	int *E = create_one_dim_int(40, "random");
	int **C = create_two_dim_int(640, 30, "random");
	int **D = create_two_dim_int(530, 480, "random");

	for (int a = 5; a < 36; a++)
	{
	  
	    A[a]=A[a-2]*39;
	  
	    E[a]=E[a-2]+22;
	  
	    C[a][a]=C[a][a+2]/A[a]+E[a]-D[a][a];
	  
	    A[a]=A[a]-C[a][a]/9+C[a][a]*B[a][a];
	    A[a]=E[a]-C[a][a]/27;
	  
	    E[a]=E[a+4]/14;
	  
	    int var_a=E[a]+6;
	    int var_b=E[a-3]/8;
	  
	    B[a][a]=E[a]/A[a]*C[a][a]+D[a][a]-B[a][a];
	    E[a]=E[a-5]/D[a][a]+A[a]*B[a][a];
	}

    return 0;
}