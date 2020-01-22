#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(40, "zeros");
	double **D = create_two_dim_double(550, 230, "zeros");
	double *B = create_one_dim_double(740, "zeros");
	double **A = create_two_dim_double(210, 130, "zeros");

	for (int a = 5; a < 207; a++)
	{
	  
	    D[a][a]=0.111;
	    D[a-2][a-3]=0.163;
	  
	    A[a][a]=0.573;
	    A[a][a+3]=0.649;
	  
	    D[a][a]=0.242;
	  
	    D[a][a]=B[a]/C[a]*A[a][a];
	    C[a]=B[a-3]/D[a][a]+D[a][a];
	  
	    double var_a=B[a]-0.491;
	    double var_b=B[a-5]-0.552;
	  
	    A[a][a]=B[a]/0.302;
	    A[a][a]=B[a+5]/D[a][a]+C[a]*A[a][a];
	}

    return 0;
}