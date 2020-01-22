#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(290, 510, 120, "ones");
	double *C = create_one_dim_double(170, "ones");
	double ***B = create_three_dim_double(900, 600, 240, "ones");
	double ***A = create_three_dim_double(630, 180, 1000, "ones");

	for (int a = 5; a < 166; a++)
	{
	  
	    C[a]=C[a+4]/D[a][a][a]*A[a][a][a]+B[a][a][a];
	  
	    A[a][a][a]=C[a]*C[a];
	    A[a+5][a+2][a+1]=0.49-C[a];
	  
	    double var_a=B[a][a][a]+0.716;
	    double var_b=B[a+2][a+1][a+4]-0.426;
	  
	    double var_c=A[a][a][a]/0.682;
	    double var_d=A[a-5][a-4][a]+0.057;
	}

    return 0;
}