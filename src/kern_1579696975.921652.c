#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(360, 230, "ones");
	double ***B = create_three_dim_double(50, 740, 520, "ones");
	double **C = create_two_dim_double(40, 640, "ones");

	for (int a = 2; a < 40; a++)
	{
	  
	    C[a][a]=0.69;
	    C[a][a-2]=0.342;
	  
	    B[a][a][a]=C[a][a]*A[a][a]+B[a][a][a];
	    A[a][a]=C[a][a]*B[a][a][a]+A[a][a];
	}

    return 0;
}