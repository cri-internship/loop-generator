#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(230, 560, 210, "zeros");
	int **A = create_two_dim_int(470, 400, "zeros");
	int **D = create_two_dim_int(320, 180, "zeros");
	int ***C = create_three_dim_int(90, 120, 300, "zeros");

	for (int a = 5; a < 86; a++)
	{
	  
	    D[a][a]=D[a-1][a]+43/A[a][a]*C[a][a][a];
	  
	    C[a][a][a]=C[a-1][a-4][a-2]+D[a][a];
	  
	    C[a][a][a]=C[a+1][a][a+4]-27;
	  
	    B[a][a][a]=29;
	    B[a-1][a-3][a-1]=29;
	  
	    int var_a=B[a][a][a]/18;
	    int var_b=B[a][a-3][a-5]/40;
	  
	    int var_c=B[a][a][a]+35;
	    int var_d=B[a-4][a-5][a-4]-4;
	}

    return 0;
}