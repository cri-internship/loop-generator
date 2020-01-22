#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(740, "ones");
	int ***B = create_three_dim_int(850, 700, 490, "ones");
	int ***E = create_three_dim_int(810, 970, 690, "ones");
	int **C = create_two_dim_int(450, 900, "ones");
	int ***A = create_three_dim_int(890, 490, 450, "ones");

	for (int a = 0; a < 845; a++)
	{
	  
	    B[a][a][a]=B[a+5][a+5][a+2]-E[a][a][a]+A[a][a][a];
	  
	    B[a][a][a]=B[a+2][a+3][a]*D[a];
	}

    return 0;
}