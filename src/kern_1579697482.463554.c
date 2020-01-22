#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(840, 50, "ones");
	double *B = create_one_dim_double(80, "ones");

	for (int a = 5; a < 77; a++)
	{
	  
	    A[a][a]=A[a][a-5]/0.025;
	  
	    B[a]=0.396;
	    float  var_a=B[a]*0.366;
	  
	    A[a][a]=A[a][a+4]*B[a];
	  
	    B[a]=B[a+3]+0.188;
	  
	    double var_b=A[a][a]-0.879;
	    double var_c=A[a-3][a-3]*0.139;
	  
	    B[a]=A[a][a]*B[a];
	    A[a][a]=A[a-3][a-5]/0.513;
	  
	    double var_d=B[a]-0.737;
	    double var_e=B[a-1]*0.475;
	}

    return 0;
}