#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(810, 570, 580, "ones");
	double ***B = create_three_dim_double(970, 630, 410, "ones");
	double ***A = create_three_dim_double(130, 970, 370, "ones");
	double *C = create_one_dim_double(850, "ones");

	for (int a = 2; a < 810; a++)
	{
	  
	    D[a][a][a]=D[a-2][a][a-2]+0.08;
	  
	    double var_a=C[a]+0.682;
	    C[a]=0.479;
	  
	    D[a][a][a]=0.788;
	  
	    C[a]=B[a][a][a];
	}

    return 0;
}