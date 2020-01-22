#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(250, 270, 760, "ones");
	int **B = create_two_dim_int(430, 60, "ones");
	int **A = create_two_dim_int(380, 700, "ones");
	int *D = create_one_dim_int(980, "ones");
	int *E = create_one_dim_int(350, "ones");

	for (int a = 5; a < 350; a++)
	{
	  
	    B[a][a]=D[a];
	    E[a]=B[a][a]-C[a][a][a]/39*E[a]+E[a];
	  
	    A[a][a]=A[a-5][a-4]/B[a][a]*E[a]-C[a][a][a];
	  
	    E[a]=2;
	  
	    int var_a=B[a][a]*14;
	    int var_b=B[a-2][a-1]+4;
	}

    return 0;
}