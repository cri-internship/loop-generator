#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(640, "ones");
	double **C = create_two_dim_double(950, 960, "ones");
	double ***B = create_three_dim_double(190, 50, 630, "ones");

	for (int a = 5; a < 187; a++)
	{
	  
	    A[a]=A[a-5]+0.885*C[a][a];
	  
	    C[a][a]=C[a-5][a-3]-A[a]/B[a][a][a];
	  
	    B[a][a][a]=0.399;
	    B[a][a+1][a+3]=0.947;
	  
	    C[a][a]=A[a]*B[a][a][a];
	  
	    C[a][a]=C[a][a]/A[a];
	    A[a]=C[a-5][a-2]/A[a]-B[a][a][a];
	  
	    double var_a=A[a]-0.752;
	    double var_b=A[a+4]-0.583;
	}

    return 0;
}