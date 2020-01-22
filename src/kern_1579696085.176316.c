#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(710, "random");
	int **A = create_two_dim_int(190, 870, "random");
	int ***B = create_three_dim_int(470, 890, 740, "random");
	int ***D = create_three_dim_int(810, 950, 210, "random");
	int *E = create_one_dim_int(220, "random");

	for (int b = 4; b < 870; b++)
	  for (int a = 2; a < 187; a++)
	  {
	    
	     D[a][b][a]=D[a-2][b-4][a-2]/21;
	    
	     A[a][b]=A[a+3][b]+45;
	  }

    return 0;
}