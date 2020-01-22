#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(460, 630, 70, "random");
	int *B = create_one_dim_int(710, "random");
	int *A = create_one_dim_int(30, "random");
	int ***E = create_three_dim_int(950, 770, 830, "random");
	int ***C = create_three_dim_int(930, 130, 450, "random");

	for (int a = 4; a < 30; a++)
	{
	  
	    C[a][a][a]=C[a-2][a-3][a]*25+B[a]/E[a][a][a];
	  
	    E[a][a][a]=32+C[a][a][a];
	    E[a-4][a-4][a]=D[a][a][a]+B[a]-A[a];
	  
	    int var_a=A[a]+3;
	    int var_b=A[a-2]*38;
	}

    return 0;
}