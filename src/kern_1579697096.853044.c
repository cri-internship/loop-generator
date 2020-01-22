#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(840, "random");
	int ***C = create_three_dim_int(100, 180, 780, "random");
	int *A = create_one_dim_int(840, "random");
	int **B = create_two_dim_int(700, 940, "random");
	int ***E = create_three_dim_int(430, 840, 460, "random");

	for (int c = 4; c < 840; c++)
	  for (int b = 4; b < 840; b++)
	    for (int a = 4; a < 840; a++)
	    {
	      
	      int var_a=D[a]-36;
	      int var_b=D[a-4]+30;
	    }

    return 0;
}