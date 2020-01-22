#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(700, 820, "random");
	int *C = create_one_dim_int(510, "random");
	int ***A = create_three_dim_int(970, 690, 810, "random");

	for (int c = 0; c < 506; c++)
	  for (int b = 0; b < 506; b++)
	    for (int a = 0; a < 506; a++)
	    {
	      
	      C[a]=C[a+4]+26;
	    }

    return 0;
}