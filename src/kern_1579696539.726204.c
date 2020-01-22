#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(120, 20, 510, "random");
	int *D = create_one_dim_int(660, "random");
	int *B = create_one_dim_int(840, "random");
	int *C = create_one_dim_int(700, "random");
	int *E = create_one_dim_int(830, "random");

	for (int a = 5; a < 120; a++)
	{
	  
	    A[a][a][a]=A[a-5][a-5][a-5]/E[a]*D[a]+C[a];
	  
	    D[a]=D[a+3]/6;
	  
	    E[a]=B[a];
	    E[a-3]=20;
	  
	    B[a]=10;
	    B[a-1]=36;
	}

    return 0;
}