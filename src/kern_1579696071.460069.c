#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(440, 300, 500, "ones");
	int **D = create_two_dim_int(580, 200, "ones");
	int *C = create_one_dim_int(10, "ones");
	int **A = create_two_dim_int(920, 860, "ones");

	for (int a = 5; a < 6; a++)
	{
	  
	    C[a]=C[a-5]-31;
	  
	    C[a]=C[a+4]*31-B[a][a][a];
	  
	    B[a][a][a]=B[a][a+3][a+4]/29;
	  
	    C[a]=C[a]-D[a][a]*A[a][a]/21;
	    D[a][a]=C[a+3]*45;
	  
	    int var_a=D[a][a]/9;
	    int var_b=D[a-4][a-2]/13;
	  
	    A[a][a]=D[a][a]+C[a]*C[a];
	    B[a][a][a]=D[a+3][a+2]-B[a][a][a];
	}

    return 0;
}