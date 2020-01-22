#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(690, 400, "random");
	int ***A = create_three_dim_int(90, 360, 860, "random");

	for (int a = 5; a < 90; a++)
	{
	  
	    A[a][a][a]=A[a-4][a-3][a-3]-0;
	  
	    B[a][a]=B[a+5][a+1]/4;
	  
	    B[a][a]=47;
	  
	    A[a][a][a]=29;
	  
	    int var_a=B[a][a]/45;
	    int var_b=B[a][a-1]/16;
	  
	    B[a][a]=B[a][a]-22;
	    A[a][a][a]=B[a+2][a+2]-A[a][a][a];
	}

    return 0;
}