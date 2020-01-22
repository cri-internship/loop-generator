#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(80, 940, 410, "random");
	double **B = create_two_dim_double(210, 960, "random");

	for (int a = 5; a < 75; a++)
	{
	  
	    A[a][a][a]=A[a-5][a-2][a-2]-0.602;
	  
	    A[a][a][a]=A[a-5][a-5][a-3]/B[a][a];
	  
	    B[a][a]=B[a+2][a+1]-0.322;
	  
	    A[a][a][a]=A[a+4][a][a+5]*B[a][a];
	  
	    double var_a=B[a][a]*0.56;
	    double var_b=B[a+1][a]/0.932;
	  
	    double var_c=A[a][a][a]+0.448;
	    double var_d=A[a+2][a][a]/0.463;
	}

    return 0;
}