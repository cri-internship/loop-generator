#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(420, 620, 190, "random");
	double *D = create_one_dim_double(70, "random");
	double *C = create_one_dim_double(330, "random");
	double **B = create_two_dim_double(260, 960, "random");

	for (int a = 5; a < 67; a++)
	{
	  
	    C[a]=C[a-2]+0.561;
	  
	    D[a]=D[a+3]+0.591;
	  
	    C[a]=C[a+4]+0.584;
	  
	    A[a][a][a]=D[a]/0.019-C[a];
	    A[a+5][a+4][a+4]=B[a][a]-C[a]/D[a];
	  
	    B[a][a]=0.563;
	    B[a-2][a-3]=0.251;
	  
	    A[a][a][a]=0.227;
	  
	    double var_a=A[a][a][a]*0.714;
	    double var_b=A[a-3][a-3][a-5]+0.94;
	}

    return 0;
}