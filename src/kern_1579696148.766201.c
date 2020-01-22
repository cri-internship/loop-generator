#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(220, 470, "zeros");
	double **E = create_two_dim_double(850, 520, "zeros");
	double **D = create_two_dim_double(300, 640, "zeros");
	double ***C = create_three_dim_double(840, 670, 660, "zeros");
	double *A = create_one_dim_double(590, "zeros");

	for (int a = 5; a < 300; a++)
	{
	  
	    E[a][a]=E[a-3][a-5]*0.262+C[a][a][a];
	  
	    D[a][a]=0.035;
	    D[a][a-4]=0.165;
	}

    return 0;
}