#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(710, 430, 710, "random");
	double ***A = create_three_dim_double(970, 820, 220, "random");
	double *C = create_one_dim_double(70, "random");

	for (int a = 5; a < 70; a++)
	{
	  
	    C[a]=C[a-4]*A[a][a][a]/B[a][a][a];
	  
	    B[a][a][a]=B[a+5][a+1][a+2]*0.196;
	  
	    A[a][a][a]=C[a];
	    A[a+2][a+3][a+1]=C[a];
	  
	    B[a][a][a]=0.906;
	  
	    double var_a=A[a][a][a]+0.1;
	    double var_b=A[a-3][a-2][a-2]+0.021;
	  
	    C[a]=C[a]-B[a][a][a]*A[a][a][a];
	    B[a][a][a]=C[a-2]/A[a][a][a];
	}

    return 0;
}