#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(400, "ones");
	double **C = create_two_dim_double(790, 340, "ones");
	double ***B = create_three_dim_double(690, 350, 160, "ones");
	double ***E = create_three_dim_double(60, 10, 510, "ones");
	double **A = create_two_dim_double(300, 560, "ones");

	for (int b = 0; b < 560; b++)
	  for (int a = 0; a < 296; a++)
	  {
	    
	     B[a][b][a]=A[a][b]*D[a]-0.467/E[a][b][a]+B[a][b][a];
	     E[a][b][a]=A[a+4][b]*E[a][b][a]-0.185;
	  }

    return 0;
}