#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(490, 870, "zeros");
	double *B = create_one_dim_double(530, "zeros");
	double ***A = create_three_dim_double(300, 760, 890, "zeros");
	double *D = create_one_dim_double(400, "zeros");

	for (int c = 2; c < 890; c++)
	  for (int b = 4; b < 760; b++)
	    for (int a = 5; a < 300; a++)
	    {
	      
	      B[a]=B[a-3]/C[a][b];
	      
	      C[a][b]=0.259;
	      C[a+5][b]=0.093;
	      
	      C[a][b]=A[a][b][c]-0.834;
	      D[a]=A[a-5][b-4][c-2]+B[a]-C[a][b];
	    }

    return 0;
}