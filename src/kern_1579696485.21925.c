#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(250, 420, 350, "zeros");
	int ***C = create_three_dim_int(840, 300, 610, "zeros");
	int ***D = create_three_dim_int(870, 90, 600, "zeros");
	int *B = create_one_dim_int(800, "zeros");

	for (int a = 4; a < 246; a++)
	{
	  
	    A[a][a][a]=A[a][a+3][a+1]+C[a][a][a]/D[a][a][a];
	  
	    A[a][a][a]=A[a+1][a+1][a+4]-27;
	  
	    int var_a=A[a][a][a]-35;
	    int var_b=A[a+4][a+3][a+4]-19;
	}

    return 0;
}