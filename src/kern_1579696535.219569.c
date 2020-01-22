#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(170, 460, 460, "random");
	int *A = create_one_dim_int(200, "random");

	for (int a = 1; a < 167; a++)
	{
	  
	    B[a][a][a]=B[a][a][a-1]-A[a];
	  
	    B[a][a][a]=B[a][a][a+3]+20;
	  
	    int var_a=A[a]/40;
	    int var_b=A[a]/38;
	}

    return 0;
}