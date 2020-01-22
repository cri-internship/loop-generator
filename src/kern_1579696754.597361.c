#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(90, 470, "ones");
	double **A = create_two_dim_double(10, 550, "ones");
	double **C = create_two_dim_double(560, 440, "ones");
	double ***B = create_three_dim_double(620, 470, 240, "ones");

	for (int b = 4; b < 470; b++)
	  for (int a = 1; a < 620; a++)
	  {
	    
	     B[a][b][a]=B[a-1][b-4][a-1]*0.397;
	  }

    return 0;
}