#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(830, "zeros");
	double *C = create_one_dim_double(730, "zeros");
	double ***B = create_three_dim_double(790, 680, 690, "zeros");
	double ***D = create_three_dim_double(830, 20, 500, "zeros");

	for (int a = 4; a < 730; a++)
	{
	  
	    B[a][a][a]=B[a-2][a-3][a-4]+0.622;
	  
	    B[a][a][a]=B[a+5][a+3][a+3]*0.396;
	  
	    D[a][a][a]=0.443;
	    D[a+3][a+4][a]=0.859;
	  
	    A[a]=B[a][a][a]+C[a];
	    A[a]=0.491*B[a][a][a];
	  
	    double var_a=A[a]+0.888;
	    double var_b=A[a+5]*0.703;
	  
	    double var_c=C[a]*0.717;
	}

    return 0;
}