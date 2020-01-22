#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(690, 150, 230, "zeros");
	int ***A = create_three_dim_int(550, 90, 280, "zeros");
	int **D = create_two_dim_int(630, 940, "zeros");
	int *C = create_one_dim_int(140, "zeros");

	for (int a = 4; a < 547; a++)
	{
	  
	    D[a][a]=C[a]-A[a][a][a];
	    C[a]=D[a][a]*B[a][a][a];
	  
	    B[a][a][a]=24;
	    B[a-4][a-2][a-4]=36;
	  
	    B[a][a][a]=D[a][a]*D[a][a]-A[a][a][a];
	  
	    int var_a=A[a][a][a]/20;
	    int var_b=A[a+1][a+3][a+3]-2;
	}

    return 0;
}