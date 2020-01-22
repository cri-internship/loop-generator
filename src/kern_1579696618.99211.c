#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(740, 420, 560, "ones");
	int *B = create_one_dim_int(30, "ones");
	int *E = create_one_dim_int(280, "ones");
	int *D = create_one_dim_int(50, "ones");
	int ***C = create_three_dim_int(870, 970, 230, "ones");

	for (int a = 4; a < 30; a++)
	{
	  
	    E[a]=16;
	    float  var_a=E[a]/19;
	  
	    A[a][a][a]=A[a-1][a][a]+E[a]*10/D[a];
	  
	    B[a]=33;
	    B[a-4]=24;
	}

    return 0;
}