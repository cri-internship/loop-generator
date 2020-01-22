#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(50, "ones");
	int **C = create_two_dim_int(550, 860, "ones");
	int ***E = create_three_dim_int(190, 90, 380, "ones");
	int ***A = create_three_dim_int(660, 200, 520, "ones");
	int *B = create_one_dim_int(600, "ones");

	for (int a = 4; a < 185; a++)
	{
	  
	    E[a][a][a]=A[a][a][a]*9-C[a][a];
	    E[a-2][a-4][a-2]=B[a]/A[a][a][a]-B[a];
	  
	    int var_a=E[a][a][a]+23;
	    int var_b=E[a+4][a+5][a+5]*18;
	}

    return 0;
}