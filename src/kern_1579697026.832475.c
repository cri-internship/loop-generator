#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(540, 300, "zeros");
	double *E = create_one_dim_double(850, "zeros");
	double ***D = create_three_dim_double(90, 250, 680, "zeros");
	double ***C = create_three_dim_double(720, 820, 580, "zeros");
	double **B = create_two_dim_double(320, 270, "zeros");

	for (int a = 5; a < 85; a++)
	{
	  
	    E[a]=E[a-1]-A[a][a]+B[a][a]*0.537/D[a][a][a];
	  
	    E[a]=E[a+4]+0.602;
	  
	    D[a][a][a]=0.271;
	    D[a-1][a-5][a-2]=0.334;
	  
	    D[a][a][a]=0.444;
	}

    return 0;
}