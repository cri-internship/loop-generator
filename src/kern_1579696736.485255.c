#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(310, 470, "zeros");
	int ***A = create_three_dim_int(900, 880, 840, "zeros");
	int *B = create_one_dim_int(290, "zeros");

	for (int a = 5; a < 289; a++)
	{
	  
	    A[a][a][a]=A[a][a-4][a-5]*C[a][a];
	  
	    B[a]=B[a+1]-4;
	  
	    C[a][a]=C[a+4][a+1]+B[a]*A[a][a][a];
	  
	    A[a][a][a]=C[a][a]-20;
	  
	    C[a][a]=43;
	  
	    int var_a=A[a][a][a]/45;
	    int var_b=A[a+3][a+1][a+1]+49;
	  
	    C[a][a]=C[a][a]-A[a][a][a]+21;
	    B[a]=C[a+4][a]/11;
	}

    return 0;
}