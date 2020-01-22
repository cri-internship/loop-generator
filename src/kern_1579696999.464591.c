#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***E = create_three_dim_int(210, 570, 690, "zeros");
	int ***C = create_three_dim_int(80, 150, 860, "zeros");
	int ***D = create_three_dim_int(480, 150, 460, "zeros");
	int ***B = create_three_dim_int(500, 970, 200, "zeros");
	int *A = create_one_dim_int(790, "zeros");

	for (int a = 5; a < 207; a++)
	{
	  
	    E[a][a][a]=E[a-4][a-3][a-3]/22;
	  
	    D[a][a][a]=D[a-4][a-5][a-3]-43;
	  
	    E[a][a][a]=E[a-3][a][a]*35;
	  
	    A[a]=27;
	    A[a+5]=47;
	  
	    D[a][a][a]=E[a][a][a]-B[a][a][a]/A[a];
	    A[a]=E[a+1][a+3][a]/50;
	  
	    int var_a=D[a][a][a]/28;
	    int var_b=D[a][a+1][a+3]-43;
	}

    return 0;
}