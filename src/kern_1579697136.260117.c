#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(470, 70, 770, "zeros");
	double **A = create_two_dim_double(280, 800, "zeros");
	double ***C = create_three_dim_double(280, 690, 830, "zeros");

	for (int a = 2; a < 277; a++)
	{
	  
	    B[a][a][a]=B[a-2][a-2][a]+A[a][a];
	  
	    C[a][a][a]=C[a+3][a+3][a+1]-B[a][a][a];
	  
	    B[a][a][a]=B[a+1][a+2][a+3]*0.902;
	  
	    A[a][a]=0.296;
	    A[a-2][a-2]=0.14;
	  
	    double var_a=A[a][a]-0.941;
	    double var_b=A[a+1][a+1]+0.403;
	}

    return 0;
}