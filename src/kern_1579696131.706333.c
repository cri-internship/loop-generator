#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(990, 220, "zeros");
	float ***C = create_three_dim_float(770, 530, 720, "zeros");
	float **A = create_two_dim_float(560, 260, "zeros");

	for (int c = 2; c < 720; c++)
	  for (int b = 0; b < 530; b++)
	    for (int a = 4; a < 770; a++)
	    {
	      
	      C[a][b][c]=C[a-4][b][c-2]*B[a][b];
	    }

    return 0;
}