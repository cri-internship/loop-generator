#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***E = create_three_dim_int(850, 910, 600, "ones");
	int **A = create_two_dim_int(670, 700, "ones");
	int ***D = create_three_dim_int(210, 870, 390, "ones");
	int *C = create_one_dim_int(600, "ones");
	int ***B = create_three_dim_int(850, 380, 130, "ones");

	for (int a = 4; a < 670; a++)
	{
	  
	    A[a][a]=A[a-4][a-4]/E[a][a][a]*D[a][a][a]-C[a]+B[a][a][a];
	  
	    E[a][a][a]=E[a+5][a+3][a+2]/48;
	  
	    E[a][a][a]=E[a+1][a+3][a+5]-45;
	  
	    B[a][a][a]=A[a][a];
	    B[a+3][a+3][a]=46;
	}

    return 0;
}