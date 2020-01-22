#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(990, 930, "zeros");
	double ***C = create_three_dim_double(850, 740, 760, "zeros");
	double **B = create_two_dim_double(1000, 130, "zeros");
	double **A = create_two_dim_double(170, 780, "zeros");

	for (int a = 5; a < 848; a++)
	{
	  
	    C[a][a][a]=C[a-2][a-1][a-5]+D[a][a]*B[a][a];
	  
	    B[a][a]=B[a-3][a-4]+0.152;
	  
	    D[a][a]=D[a][a+4]/0.684;
	  
	    C[a][a][a]=C[a+2][a][a+2]/A[a][a]+D[a][a]*A[a][a];
	  
	    D[a][a]=0.242;
	}

    return 0;
}