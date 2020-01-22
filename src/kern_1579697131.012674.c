#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(980, 980, 730, "ones");
	int ***A = create_three_dim_int(750, 340, 780, "ones");
	int **B = create_two_dim_int(400, 60, "ones");
	int *D = create_one_dim_int(270, "ones");

	for (int a = 5; a < 265; a++)
	{
	  
	    A[a][a][a]=A[a-5][a-3][a-4]+C[a][a][a]-B[a][a];
	  
	    B[a][a]=B[a+5][a+1]/4;
	  
	    B[a][a]=B[a+2][a+3]+D[a]/A[a][a][a];
	  
	    D[a]=D[a+3]-A[a][a][a]*C[a][a][a]/B[a][a];
	  
	    D[a]=8;
	  
	    C[a][a][a]=26;
	    C[a+2][a][a+2]=A[a][a][a];
	  
	    int var_a=D[a]/20;
	}

    return 0;
}