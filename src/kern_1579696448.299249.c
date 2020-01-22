#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(810, 120, 490, "random");
	int *D = create_one_dim_int(530, "random");
	int ***E = create_three_dim_int(20, 910, 770, "random");
	int *C = create_one_dim_int(970, "random");
	int ***B = create_three_dim_int(780, 420, 460, "random");

	for (int a = 5; a < 20; a++)
	{
	  
	    E[a][a][a]=B[a][a][a]+D[a];
	    E[a-4][a-3][a-3]=A[a][a][a];
	  
	    E[a][a][a]=24;
	  
	    A[a][a][a]=3/E[a][a][a]+C[a];
	    A[a-4][a-3][a-5]=E[a][a][a]/D[a]*C[a]+B[a][a][a];
	  
	    B[a][a][a]=E[a][a][a]*D[a]/A[a][a][a];
	    D[a]=E[a-2][a-4][a-3]+B[a][a][a]/A[a][a][a];
	  
	    C[a]=B[a][a][a]+A[a][a][a]/D[a]*E[a][a][a]-C[a];
	    E[a][a][a]=B[a-1][a-4][a]/E[a][a][a]*C[a];
	  
	    A[a][a][a]=C[a]-B[a][a][a]*A[a][a][a]+E[a][a][a];
	    D[a]=C[a+5]/B[a][a][a];
	}

    return 0;
}