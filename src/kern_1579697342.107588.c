#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(870, 570, 440, "random");
	int *C = create_one_dim_int(390, "random");
	int **D = create_two_dim_int(670, 630, "random");
	int ***B = create_three_dim_int(580, 830, 450, "random");

	for (int a = 5; a < 387; a++)
	{
	  
	    D[a][a]=D[a-5][a-3]/B[a][a][a];
	  
	    A[a][a][a]=A[a+5][a+1][a]*0;
	  
	    D[a][a]=D[a+5][a+2]*5;
	  
	    C[a]=C[a+3]*45;
	  
	    int var_a=D[a][a]+35;
	    int var_b=D[a][a-5]*45;
	}

    return 0;
}