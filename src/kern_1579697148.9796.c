#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(530, 440, 700, "random");
	int ***A = create_three_dim_int(450, 900, 510, "random");
	int **D = create_two_dim_int(490, 450, "random");
	int *B = create_one_dim_int(840, "random");

	for (int c = 0; c < 450; c++)
	  for (int b = 5; b < 485; b++)
	    for (int a = 5; a < 485; a++)
	    {
	      
	      B[a]=B[a-5]-C[a][b][c];
	      
	      int var_a=D[a][b]/17;
	      int var_b=D[a+5][b]*17;
	    }

    return 0;
}