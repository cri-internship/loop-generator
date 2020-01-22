#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(950, 150, 540, "ones");
	int **D = create_two_dim_int(830, 930, "ones");
	int **C = create_two_dim_int(680, 670, "ones");
	int *A = create_one_dim_int(30, "ones");

	for (int a = 2; a < 675; a++)
	{
	  
	    C[a][a]=C[a+3][a+5]-43;
	  
	    C[a][a]=D[a][a]/B[a][a][a]-A[a];
	  
	    D[a][a]=B[a][a][a]-C[a][a];
	    A[a]=B[a+5][a][a+4]*C[a][a];
	  
	    int var_a=C[a][a]-25;
	    int var_b=C[a+3][a]-25;
	}

    return 0;
}