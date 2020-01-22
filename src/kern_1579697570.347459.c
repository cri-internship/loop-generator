#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(540, "random");
	int **C = create_two_dim_int(30, 450, "random");
	int **D = create_two_dim_int(830, 950, "random");
	int ***A = create_three_dim_int(520, 140, 950, "random");

	for (int c = 0; c < 447; c++)
	  for (int b = 3; b < 25; b++)
	    for (int a = 3; a < 25; a++)
	    {
	      
	      C[a][b]=C[a+5][b+3]*37;
	      
	      B[a]=3;
	      B[a-3]=38;
	    }

    return 0;
}