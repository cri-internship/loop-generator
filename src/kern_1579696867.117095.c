#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(860, 60, 760, "ones");
	int **A = create_two_dim_int(990, 190, "ones");
	int *E = create_one_dim_int(720, "ones");
	int **D = create_two_dim_int(280, 650, "ones");
	int ***C = create_three_dim_int(340, 710, 690, "ones");

	for (int a = 5; a < 280; a++)
	{
	  
	    D[a][a]=D[a-1][a-1]-A[a][a]+C[a][a][a]*B[a][a][a]/E[a];
	  
	    B[a][a][a]=B[a+2][a+5][a+2]*D[a][a]+E[a]-D[a][a];
	  
	    C[a][a][a]=C[a+5][a][a+1]*34;
	  
	    C[a][a][a]=C[a+5][a+3][a+5]/4*E[a];
	  
	    D[a][a]=5;
	}

    return 0;
}