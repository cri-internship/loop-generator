#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(530, 580, 180, "zeros");
	int **B = create_two_dim_int(400, 650, "zeros");
	int **C = create_two_dim_int(780, 410, "zeros");
	int **A = create_two_dim_int(850, 800, "zeros");
	int ***E = create_three_dim_int(670, 400, 800, "zeros");

	for (int a = 5; a < 398; a++)
	{
	  
	    D[a][a][a]=D[a-4][a-4][a-2]/2;
	  
	    D[a][a][a]=19;
	  
	    E[a][a][a]=E[a][a][a]/D[a][a][a]+37;
	    D[a][a][a]=E[a-1][a-5][a-5]/20;
	  
	    int var_a=B[a][a]-0;
	    int var_b=B[a+2][a+2]-5;
	  
	    int var_c=C[a][a]/25;
	    int var_d=C[a+2][a]*14;
	}

    return 0;
}