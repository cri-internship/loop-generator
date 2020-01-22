#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(320, 730, "random");
	double **A = create_two_dim_double(560, 410, "random");
	double ***D = create_three_dim_double(160, 300, 520, "random");
	double ***B = create_three_dim_double(230, 960, 440, "random");

	for (int b = 0; b < 296; b++)
	  for (int a = 0; a < 157; a++)
	  {
	    
	     D[a][b][a]=D[a+3][b+4][a]/B[a][b][a];
	  }

    return 0;
}