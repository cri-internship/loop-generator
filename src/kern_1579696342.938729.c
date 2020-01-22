#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(400, "zeros");
	int **B = create_two_dim_int(630, 820, "zeros");
	int ***D = create_three_dim_int(980, 340, 230, "zeros");
	int *E = create_one_dim_int(90, "zeros");
	int *C = create_one_dim_int(670, "zeros");

	for (int a = 1; a < 86; a++)
	{
	  
	    C[a]=C[a-1]*4;
	  
	    D[a][a][a]=D[a+4][a][a+4]*50;
	  
	    C[a]=C[a+3]-23;
	  
	    int var_a=E[a]+13;
	    int var_b=E[a+4]-22;
	}

    return 0;
}