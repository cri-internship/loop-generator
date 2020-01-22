#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(400, 960, 240, "ones");
	int ***C = create_three_dim_int(930, 670, 720, "ones");
	int **E = create_two_dim_int(640, 130, "ones");
	int *D = create_one_dim_int(70, "ones");
	int **A = create_two_dim_int(440, 990, "ones");

	for (int a = 5; a < 70; a++)
	{
	  
	    E[a][a]=E[a-4][a-1]*D[a];
	  
	    B[a][a][a]=43;
	    B[a-2][a-4][a-5]=6;
	  
	    E[a][a]=C[a][a][a];
	  
	    int var_a=B[a][a][a]-30;
	    int var_b=B[a+3][a+1][a+3]*46;
	  
	    A[a][a]=D[a]-A[a][a];
	    C[a][a][a]=D[a-5]-E[a][a]/E[a][a]*C[a][a][a]+A[a][a];
	}

    return 0;
}