#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(630, 950, 910, "zeros");
	int **D = create_two_dim_int(470, 90, "zeros");
	int *C = create_one_dim_int(40, "zeros");
	int **B = create_two_dim_int(50, 770, "zeros");

	for (int a = 5; a < 50; a++)
	{
	  
	    D[a][a]=D[a][a+4]*43;
	  
	    D[a][a]=D[a+3][a]+B[a][a]-26*C[a];
	  
	    A[a][a][a]=A[a+1][a+1][a+3]+21;
	  
	    A[a][a][a]=B[a][a]+D[a][a]/A[a][a][a]*D[a][a];
	    D[a][a]=B[a-5][a-2]-A[a][a][a]+D[a][a];
	  
	    int var_a=D[a][a]/11;
	    int var_b=D[a+4][a+2]*26;
	}

    return 0;
}