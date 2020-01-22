#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(450, 170, 680, "zeros");
	int ***C = create_three_dim_int(450, 750, 80, "zeros");
	int ***A = create_three_dim_int(940, 310, 460, "zeros");
	int **D = create_two_dim_int(960, 240, "zeros");

	for (int a = 5; a < 445; a++)
	{
	  
	    D[a][a]=D[a-4][a-5]+5;
	  
	    B[a][a][a]=B[a+4][a+5][a+5]+21;
	  
	    D[a][a]=D[a+4][a+3]/9;
	  
	    D[a][a]=A[a][a][a]+B[a][a][a]-C[a][a][a]*D[a][a];
	    C[a][a][a]=A[a][a-3][a]+C[a][a][a]/B[a][a][a];
	  
	    int var_a=C[a][a][a]-35;
	    int var_b=C[a-5][a-1][a-3]-27;
	}

    return 0;
}