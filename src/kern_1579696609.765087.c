#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(740, 270, "ones");
	int **A = create_two_dim_int(370, 390, "ones");
	int ***D = create_three_dim_int(500, 900, 210, "ones");
	int **E = create_two_dim_int(610, 840, "ones");
	int ***B = create_three_dim_int(320, 570, 200, "ones");

	for (int a = 4; a < 315; a++)
	{
	  
	    E[a][a]=E[a+1][a+1]-D[a][a][a]/A[a][a]*B[a][a][a]+C[a][a];
	  
	    B[a][a][a]=B[a+4][a+4][a]/E[a][a]*C[a][a]-D[a][a][a]+E[a][a];
	  
	    B[a][a][a]=50;
	  
	    int var_a=D[a][a][a]/49;
	    int var_b=D[a-2][a-4][a-1]+39;
	}

    return 0;
}