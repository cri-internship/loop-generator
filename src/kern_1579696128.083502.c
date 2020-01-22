#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **E = create_two_dim_double(710, 400, "zeros");
	double ***B = create_three_dim_double(500, 580, 340, "zeros");
	double **D = create_two_dim_double(420, 420, "zeros");
	double **C = create_two_dim_double(170, 870, "zeros");
	double ***A = create_three_dim_double(480, 180, 10, "zeros");

	for (int b = 1; b < 418; b++)
	  for (int a = 4; a < 417; a++)
	  {
	    
	     B[a][b][a]=B[a-4][b-1][a]-0.34;
	    
	     D[a][b]=D[a+3][b+2]-0.947;
	  }

    return 0;
}