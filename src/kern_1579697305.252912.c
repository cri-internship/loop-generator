#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(900, 710, "random");
	float ***C = create_three_dim_float(900, 40, 840, "random");
	float ***A = create_three_dim_float(860, 280, 260, "random");
	float ***E = create_three_dim_float(900, 330, 310, "random");
	float ***B = create_three_dim_float(530, 140, 600, "random");

	for (int b = 4; b < 710; b++)
	  for (int a = 5; a < 900; a++)
	  {
	    
	     D[a][b]=D[a-5][b-4]-0.418;
	  }

    return 0;
}