#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(540, 60, "random");
	int ***C = create_three_dim_int(70, 700, 40, "random");
	int **B = create_two_dim_int(450, 440, "random");
	int ***E = create_three_dim_int(790, 170, 230, "random");
	int ***D = create_three_dim_int(280, 260, 640, "random");

	for (int c = 5; c < 60; c++)
	  for (int b = 0; b < 540; b++)
	    for (int a = 0; a < 540; a++)
	    {
	      
	      A[a][b]=D[a][b][c]/B[a][b];
	      A[a][b-5]=E[a][b][c];
	    }

    return 0;
}