#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(560, 890, "random");
	float **B = create_two_dim_float(280, 260, "random");
	float ***D = create_three_dim_float(510, 750, 600, "random");
	float **A = create_two_dim_float(180, 690, "random");
	float **E = create_two_dim_float(200, 40, "random");

	for (int c = 3; c < 600; c++)
	  for (int b = 4; b < 40; b++)
	    for (int a = 1; a < 197; a++)
	    {
	      
	      D[a][b][c]=D[a-1][b-4][c-3]-A[a][b];
	      
	      E[a][b]=E[a+3][b]+0.555;
	    }

    return 0;
}