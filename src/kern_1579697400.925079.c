#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(1000, 330, "zeros");
	double ***A = create_three_dim_double(740, 90, 360, "zeros");
	double ***B = create_three_dim_double(220, 920, 1000, "zeros");
	double **D = create_two_dim_double(580, 60, "zeros");

	for (int a = 4; a < 217; a++)
	{
	  
	    B[a][a][a]=B[a+2][a+1][a+3]+0.484;
	  
	    A[a][a][a]=C[a][a];
	    A[a+1][a][a+5]=0.406;
	  
	    double var_a=A[a][a][a]-0.632;
	    double var_b=A[a+5][a][a+5]*0.438;
	  
	    A[a][a][a]=C[a][a]-A[a][a][a]/B[a][a][a];
	    B[a][a][a]=C[a-4][a]+A[a][a][a]-B[a][a][a];
	}

    return 0;
}