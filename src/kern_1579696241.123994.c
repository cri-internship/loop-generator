#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(540, 290, 620, "ones");
	double *D = create_one_dim_double(920, "ones");
	double *A = create_one_dim_double(650, "ones");
	double **C = create_two_dim_double(360, 660, "ones");

	for (int a = 5; a < 355; a++)
	{
	  
	    B[a][a][a]=B[a-5][a-5][a-1]*0.954;
	  
	    A[a]=A[a-1]-0.481;
	  
	    D[a]=D[a+3]+0.026;
	  
	    C[a][a]=C[a][a]/A[a]-D[a]*B[a][a][a];
	    D[a]=C[a+5][a+2]/A[a]-D[a];
	  
	    double var_a=A[a]-0.406;
	    double var_b=A[a-2]/0.926;
	  
	    double var_c=A[a]-0.115;
	  
	    double var_e=C[a][a]*0.282;
	    double var_f=C[a][a+3]+0.775;
	}

    return 0;
}