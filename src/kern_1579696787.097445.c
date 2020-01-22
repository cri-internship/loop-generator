#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(550, 860, 650, "ones");
	int **A = create_two_dim_int(650, 90, "ones");
	int **D = create_two_dim_int(140, 530, "ones");
	int **E = create_two_dim_int(200, 450, "ones");
	int ***B = create_three_dim_int(850, 270, 660, "ones");

	for (int a = 5; a < 200; a++)
	{
	  
	    C[a][a][a]=C[a-3][a-1][a]+E[a][a]/B[a][a][a]*D[a][a];
	  
	    A[a][a]=A[a-5][a-3]*16;
	  
	    A[a][a]=A[a-5][a-1]/17;
	  
	    E[a][a]=A[a][a]/C[a][a][a]-B[a][a][a]*41;
	    E[a-3][a-4]=B[a][a][a]/D[a][a]-C[a][a][a];
	  
	    C[a][a][a]=D[a][a]-E[a][a];
	}

    return 0;
}