#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(780, 50, 490, "random");
	int **D = create_two_dim_int(950, 470, "random");
	int ***B = create_three_dim_int(440, 120, 670, "random");
	int *C = create_one_dim_int(880, "random");

	for (int a = 3; a < 435; a++)
	{
	  
	    D[a][a]=D[a-3][a-2]/35;
	  
	    C[a]=C[a+1]*14;
	  
	    C[a]=D[a][a]/8-A[a][a][a];
	  
	    D[a][a]=39;
	  
	    B[a][a][a]=25;
	    B[a+5][a+2][a+5]=35;
	}

    return 0;
}