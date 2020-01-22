#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(130, 50, 860, "zeros");
	int ***C = create_three_dim_int(850, 800, 660, "zeros");
	int **E = create_two_dim_int(580, 360, "zeros");
	int ***D = create_three_dim_int(360, 200, 900, "zeros");
	int **A = create_two_dim_int(380, 150, "zeros");

	for (int a = 5; a < 128; a++)
	{
	  
	    B[a][a][a]=B[a-4][a-1][a-1]/D[a][a][a]-16;
	  
	    B[a][a][a]=B[a+1][a][a+2]-C[a][a][a]*E[a][a];
	  
	    A[a][a]=A[a+5][a+1]*46;
	  
	    int var_a=E[a][a]+28;
	    int var_b=E[a][a-4]*17;
	  
	    D[a][a][a]=B[a][a][a]/D[a][a][a];
	    C[a][a][a]=B[a-5][a][a-2]*2/A[a][a]-E[a][a];
	}

    return 0;
}