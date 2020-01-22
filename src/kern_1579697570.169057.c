#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *E = create_one_dim_int(620, "random");
	int **A = create_two_dim_int(780, 820, "random");
	int *D = create_one_dim_int(240, "random");
	int *B = create_one_dim_int(310, "random");
	int ***C = create_three_dim_int(150, 930, 550, "random");

	for (int a = 3; a < 148; a++)
	{
	  
	    A[a][a]=A[a-3][a-3]*9;
	  
	    E[a]=B[a]+A[a][a]/E[a]*C[a][a][a]-D[a];
	    B[a]=D[a]/A[a][a]*E[a]-C[a][a][a];
	  
	    int var_a=E[a]/34;
	    E[a]=17;
	  
	    C[a][a][a]=39;
	    C[a+2][a+2][a+1]=36;
	  
	    C[a][a][a]=18;
	}

    return 0;
}