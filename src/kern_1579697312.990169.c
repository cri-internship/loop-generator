#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(360, 710, "ones");
	int ***C = create_three_dim_int(490, 370, 520, "ones");
	int *A = create_one_dim_int(60, "ones");
	int **E = create_two_dim_int(360, 860, "ones");
	int *D = create_one_dim_int(420, "ones");

	for (int a = 5; a < 358; a++)
	{
	  
	    B[a][a]=B[a-5][a-1]-D[a]*E[a][a]+A[a]/C[a][a][a];
	  
	    B[a][a]=B[a+2][a]/D[a]*C[a][a][a]+E[a][a]-A[a];
	  
	    int var_a=E[a][a]+15;
	    int var_b=E[a-5][a]+13;
	}

    return 0;
}