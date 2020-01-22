#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(850, 330, "ones");
	double ***C = create_three_dim_double(660, 830, 260, "ones");
	double *A = create_one_dim_double(630, "ones");
	double **E = create_two_dim_double(490, 150, "ones");
	double **B = create_two_dim_double(680, 840, "ones");

	for (int a = 5; a < 485; a++)
	{
	  
	    A[a]=A[a-5]+0.303;
	  
	    E[a][a]=E[a+5][a+5]+0.269;
	  
	    E[a][a]=E[a+5][a+2]+0.508;
	  
	    E[a][a]=B[a][a]+E[a][a]*C[a][a][a]/A[a]-D[a][a];
	    C[a][a][a]=B[a+4][a+5]/E[a][a]+A[a];
	}

    return 0;
}