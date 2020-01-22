#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(470, 740, 630, "ones");
	int ***C = create_three_dim_int(800, 370, 860, "ones");
	int **D = create_two_dim_int(800, 850, "ones");
	int *A = create_one_dim_int(900, "ones");
	int *E = create_one_dim_int(560, "ones");

	for (int a = 5; a < 797; a++)
	{
	  
	    D[a][a]=C[a][a][a]-A[a]*B[a][a][a]/E[a];
	    D[a+3][a+3]=B[a][a][a]-E[a]/C[a][a][a]+A[a];
	  
	    C[a][a][a]=C[a][a][a]+D[a][a]*B[a][a][a]-E[a]/D[a][a];
	    B[a][a][a]=C[a-5][a][a]+D[a][a];
	}

    return 0;
}