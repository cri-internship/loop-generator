#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(50, 190, 720, "random");
	int ***D = create_three_dim_int(280, 840, 860, "random");
	int ***C = create_three_dim_int(350, 410, 140, "random");
	int ***A = create_three_dim_int(240, 220, 20, "random");

	for (int a = 5; a < 45; a++)
	{
	  
	    C[a][a][a]=C[a-5][a][a-3]+6;
	  
	    D[a][a][a]=D[a-2][a][a]-35;
	  
	    B[a][a][a]=C[a][a][a]-D[a][a][a];
	    B[a][a+5][a+3]=A[a][a][a]+A[a][a][a];
	  
	    D[a][a][a]=22;
	  
	    int var_a=D[a][a][a]/45;
	    int var_b=D[a-1][a-1][a]+1;
	  
	    A[a][a][a]=C[a][a][a]+B[a][a][a]*37/B[a][a][a];
	    D[a][a][a]=C[a-3][a-1][a-2]/A[a][a][a];
	  
	    int var_c=D[a][a][a]/37;
	    int var_d=D[a-1][a-3][a-3]*33;
	}

    return 0;
}