#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(930, 450, 650, "random");
	int **A = create_two_dim_int(270, 100, "random");
	int ***B = create_three_dim_int(390, 280, 920, "random");

	for (int c = 0; c < 650; c++)
	  for (int b = 3; b < 450; b++)
	    for (int a = 1; a < 930; a++)
	    {
	      
	      C[a][b][c]=C[a-1][b-3][c]/13;
	    }

    return 0;
}