#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(270, 1000, "ones");
	double ***B = create_three_dim_double(250, 550, 210, "ones");
	double *A = create_one_dim_double(80, "ones");
	double ***C = create_three_dim_double(70, 20, 870, "ones");

	for (int c = 4; c < 210; c++)
	  for (int b = 4; b < 550; b++)
	    for (int a = 4; a < 250; a++)
	    {
	      
	      B[a][b][c]=B[a-4][b-4][c-4]+0.013;
	      
	      B[a][b][c]=B[a-2][b-2][c-1]*0.051;
	    }

    return 0;
}