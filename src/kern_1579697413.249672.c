#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(460, "ones");
	double **C = create_two_dim_double(100, 780, "ones");
	double **A = create_two_dim_double(350, 370, "ones");
	double ***D = create_three_dim_double(720, 320, 150, "ones");
	double **E = create_two_dim_double(910, 700, "ones");

	for (int a = 5; a < 96; a++)
	{
	  
	    C[a][a]=C[a-5][a-4]+A[a][a]*D[a][a][a];
	  
	    A[a][a]=A[a+1][a+2]*B[a];
	  
	    C[a][a]=0.154;
	}

    return 0;
}