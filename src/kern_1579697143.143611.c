#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(920, 590, 770, "ones");
	int ***B = create_three_dim_int(180, 190, 680, "ones");
	int **C = create_two_dim_int(120, 510, "ones");
	int **A = create_two_dim_int(940, 250, "ones");
	int ***E = create_three_dim_int(860, 190, 440, "ones");

	for (int a = 5; a < 180; a++)
	{
	  
	    E[a][a][a]=E[a-2][a-2][a-1]+47;
	  
	    E[a][a][a]=E[a][a+4][a+5]/C[a][a]+B[a][a][a]-22;
	  
	    A[a][a]=A[a+5][a+3]/10;
	  
	    D[a][a][a]=D[a][a+5][a]-29/E[a][a][a]*B[a][a][a];
	  
	    int var_a=B[a][a][a]/7;
	    int var_b=B[a-1][a-1][a-4]/43;
	}

    return 0;
}