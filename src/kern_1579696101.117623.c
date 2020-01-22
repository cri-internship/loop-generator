#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(310, 140, 110, "ones");
	double **C = create_two_dim_double(560, 740, "ones");
	double **A = create_two_dim_double(420, 860, "ones");
	double *B = create_one_dim_double(90, "ones");

	for (int c = 0; c < 740; c++)
	  for (int b = 0; b < 87; b++)
	    for (int a = 0; a < 87; a++)
	    {
	      
	      C[a][b]=C[a+5][b]+0.684;
	      
	      A[a][b]=B[a]-A[a][b];
	      D[a][b][c]=B[a+3]*D[a][b][c];
	    }

    return 0;
}