#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(780, 970, 320, "random");
	float ***C = create_three_dim_float(350, 650, 10, "random");
	float ***A = create_three_dim_float(200, 720, 400, "random");

	for (int b = 5; b < 650; b++)
	  for (int a = 4; a < 350; a++)
	  {
	    
	     C[a][b][a]=C[a-4][b-5][a-2]-0.692;
	    
	     C[a][b][a]=C[a-3][b-1][a]/0.385;
	  }

    return 0;
}