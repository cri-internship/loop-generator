#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(620, 290, 780, "zeros");
	double **D = create_two_dim_double(890, 380, "zeros");
	double ***B = create_three_dim_double(980, 530, 780, "zeros");
	double **E = create_two_dim_double(900, 610, "zeros");
	double **A = create_two_dim_double(170, 600, "zeros");

	for (int a = 5; a < 170; a++)
	{
	  
	    A[a][a]=A[a-3][a-1]/D[a][a];
	  
	    E[a][a]=E[a-1][a-5]*0.999;
	  
	    E[a][a]=E[a+1][a+2]*B[a][a][a]-A[a][a]/C[a][a][a];
	  
	    double var_a=A[a][a]-0.892;
	    A[a][a]=0.163;
	}

    return 0;
}