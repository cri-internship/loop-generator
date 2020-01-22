#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(900, 650, 940, "random");
	int **A = create_two_dim_int(380, 330, "random");
	int ***B = create_three_dim_int(830, 470, 70, "random");
	int ***C = create_three_dim_int(170, 480, 940, "random");

	for (int b = 1; b < 475; b++)
	  for (int a = 3; a < 167; a++)
	  {
	    
	     C[a][b][a]=C[a][b-1][a-3]/D[a][b][a]*40-B[a][b][a];
	    
	     C[a][b][a]=41;
	  }

    return 0;
}