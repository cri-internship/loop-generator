#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(110, "ones");
	double ***A = create_three_dim_double(860, 280, 290, "ones");
	double **C = create_two_dim_double(20, 700, "ones");
	double **D = create_two_dim_double(200, 900, "ones");

	for (int c = 3; c < 698; c++)
	  for (int b = 4; b < 20; b++)
	    for (int a = 4; a < 20; a++)
	    {
	      
	      D[a][b]=D[a-4][b-3]*0.171;
	      
	      C[a][b]=C[a][b+2]*0.232;
	      
	      B[a]=0.135;
	      B[a+2]=0.698;
	      
	      D[a][b]=0.409;
	    }

    return 0;
}