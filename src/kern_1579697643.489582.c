#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(600, 940, "random");
	int *A = create_one_dim_int(200, "random");
	int ***D = create_three_dim_int(950, 630, 780, "random");
	int **C = create_two_dim_int(1000, 170, "random");

	for (int a = 5; a < 200; a++)
	{
	  
	    A[a]=B[a][a]*C[a][a];
	    A[a]=A[a]/12+B[a][a];
	  
	    int var_a=C[a][a]+27;
	    int var_b=C[a-3][a]+27;
	  
	    int var_c=D[a][a][a]*5;
	    int var_d=D[a-1][a][a]+11;
	  
	    int var_e=D[a][a][a]/13;
	    int var_f=D[a][a+2][a+2]-32;
	  
	    int var_g=A[a]+13;
	    int var_h=A[a-2]+13;
	  
	    int var_i=C[a][a]*47;
	    int var_j=C[a][a-5]*37;
	}

    return 0;
}