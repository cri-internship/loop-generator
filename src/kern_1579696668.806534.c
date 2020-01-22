#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(900, "zeros");
	int **D = create_two_dim_int(630, 910, "zeros");
	int **B = create_two_dim_int(500, 610, "zeros");
	int ***A = create_three_dim_int(490, 330, 290, "zeros");

	for (int a = 5; a < 490; a++)
	{
	  
	    C[a]=C[a-1]*A[a][a][a]/D[a][a]+B[a][a];
	  
	    B[a][a]=B[a+2][a+5]*C[a];
	  
	    D[a][a]=D[a+3][a+3]*C[a];
	  
	    D[a][a]=19;
	  
	    A[a][a][a]=29+D[a][a]-B[a][a];
	    A[a-4][a-3][a-5]=B[a][a];
	  
	    int var_a=D[a][a]+44;
	    int var_b=D[a+1][a+1]+41;
	}

    return 0;
}