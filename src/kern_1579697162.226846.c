#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(920, 970, 340, "zeros");
	int **A = create_two_dim_int(400, 530, "zeros");
	int **C = create_two_dim_int(940, 680, "zeros");

	for (int c = 0; c < 337; c++)
	  for (int b = 0; b < 969; b++)
	    for (int a = 0; a < 916; a++)
	    {
	      
	      int var_a=B[a][b][c]*46;
	      int var_b=B[a+4][b+1][c+3]-10;
	    }

    return 0;
}