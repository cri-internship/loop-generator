#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *E = create_one_dim_int(810, "ones");
	int **A = create_two_dim_int(550, 480, "ones");
	int **C = create_two_dim_int(930, 830, "ones");
	int ***B = create_three_dim_int(790, 60, 260, "ones");
	int *D = create_one_dim_int(180, "ones");

	for (int c = 1; c < 830; c++)
	  for (int b = 3; b < 930; b++)
	    for (int a = 3; a < 930; a++)
	    {
	      
	      C[a][b]=C[a-3][b-1]+14;
	    }

    return 0;
}