#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(150, 90, 110, "zeros");
	double ***B = create_three_dim_double(550, 950, 30, "zeros");
	double **E = create_two_dim_double(920, 620, "zeros");
	double *D = create_one_dim_double(390, "zeros");
	double ***A = create_three_dim_double(830, 120, 560, "zeros");

	for (int a = 5; a < 145; a++)
	{
	  
	    D[a]=0.7;
	    float  var_a=D[a]+0.16;
	  
	    A[a][a][a]=A[a-4][a-5][a]*0.562;
	  
	    D[a]=D[a+2]/0.749;
	  
	    E[a][a]=D[a]+0.817/B[a][a][a]*C[a][a][a]-A[a][a][a];
	    D[a]=D[a+3]-0.215+B[a][a][a]*A[a][a][a];
	  
	    double var_b=C[a][a][a]-0.57;
	    double var_c=C[a+5][a+2][a]-0.135;
	}

    return 0;
}