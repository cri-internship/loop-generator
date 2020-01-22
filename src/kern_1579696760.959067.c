#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(930, 740, "ones");
	double **C = create_two_dim_double(90, 70, "ones");
	double **D = create_two_dim_double(70, 130, "ones");
	double **B = create_two_dim_double(300, 960, "ones");

	for (int a = 5; a < 70; a++)
	{
	  
	    A[a][a]=A[a-5][a-5]*0.223+B[a][a];
	  
	    B[a][a]=B[a-2][a]+D[a][a];
	  
	    A[a][a]=A[a-3][a-2]+0.798;
	  
	    D[a][a]=0.606;
	    D[a-5][a-1]=C[a][a]-B[a][a]+A[a][a];
	  
	    double var_a=C[a][a]+0.966;
	    double var_b=C[a+4][a]*0.137;
	  
	    double var_c=A[a][a]/0.085;
	}

    return 0;
}