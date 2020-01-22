#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(220, "zeros");
	double ***A = create_three_dim_double(530, 520, 150, "zeros");
	double **B = create_two_dim_double(680, 100, "zeros");

	for (int a = 0; a < 220; a++)
	{
	  
	    C[a]=B[a][a]-A[a][a][a];
	    A[a][a][a]=C[a]*A[a][a][a];
	  
	    B[a][a]=B[a+1][a]+0.44;
	  
	    B[a][a]=B[a+3][a+1]+0.484;
	  
	    B[a][a]=B[a+1][a+1]+0.418;
	}

    return 0;
}