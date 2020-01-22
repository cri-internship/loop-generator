#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***E = create_three_dim_int(650, 680, 80, "ones");
	int ***D = create_three_dim_int(800, 830, 940, "ones");
	int *B = create_one_dim_int(100, "ones");
	int **A = create_two_dim_int(270, 710, "ones");
	int **C = create_two_dim_int(610, 90, "ones");

	for (int a = 5; a < 97; a++)
	{
	  
	    C[a][a]=C[a-5][a-5]+11;
	  
	    A[a][a]=A[a-4][a-3]*1;
	  
	    C[a][a]=C[a+1][a+4]+3;
	  
	    B[a]=B[a+3]-32;
	  
	    A[a][a]=E[a][a][a]+B[a]-A[a][a]*C[a][a];
	    B[a]=E[a][a-4][a-2]*D[a][a][a]-D[a][a][a]+C[a][a];
	  
	    int var_a=A[a][a]/43;
	    int var_b=A[a-5][a-5]*7;
	}

    return 0;
}