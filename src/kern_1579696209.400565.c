#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(930, 630, 240, "random");
	int **B = create_two_dim_int(830, 960, "random");

	for (int a = 4; a < 826; a++)
	{
	  
	    B[a][a]=B[a+1][a+4]+18;
	  
	    A[a][a][a]=39;
	    A[a-1][a-4][a-2]=27;
	  
	    int var_a=A[a][a][a]+18;
	    int var_b=A[a+3][a+5][a+2]*44;
	}

    return 0;
}