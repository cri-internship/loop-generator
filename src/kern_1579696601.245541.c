#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(690, 930, 660, "ones");
	double ***A = create_three_dim_double(820, 710, 410, "ones");
	double ***C = create_three_dim_double(330, 690, 490, "ones");

	for (int a = 5; a < 690; a++)
	{
	  
	    A[a][a][a]=A[a][a+4][a+2]*0.589;
	  
	    A[a][a][a]=0.262;
	  
	    B[a][a][a]=A[a][a][a];
	    B[a-5][a-5][a-3]=C[a][a][a]/A[a][a][a];
	  
	    double var_a=B[a][a][a]/0.466;
	    double var_b=B[a-4][a-4][a-5]-0.465;
	  
	    double var_c=A[a][a][a]+0.981;
	    double var_d=A[a-3][a-4][a-5]+0.724;
	}

    return 0;
}