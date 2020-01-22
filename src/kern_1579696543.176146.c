#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(110, "random");
	int *D = create_one_dim_int(740, "random");
	int **C = create_two_dim_int(590, 490, "random");
	int **B = create_two_dim_int(310, 830, "random");
	int *E = create_one_dim_int(500, "random");

	for (int a = 5; a < 110; a++)
	{
	  
	    int var_a=A[a]*20;
	    int var_b=A[a-5]*10;
	  
	    int var_c=B[a][a]+41;
	    int var_d=B[a][a+5]*32;
	  
	    C[a][a]=B[a][a]+A[a]-C[a][a]/E[a]*D[a];
	    A[a]=B[a+1][a+3]-43;
	}

    return 0;
}