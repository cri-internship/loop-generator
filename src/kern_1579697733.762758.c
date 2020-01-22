#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(990, 120, 20, "zeros");
	int ***A = create_three_dim_int(350, 180, 370, "zeros");
	int *B = create_one_dim_int(380, "zeros");

	for (int c = 5; c < 380; c++)
	  for (int b = 5; b < 380; b++)
	    for (int a = 5; a < 380; a++)
	    {
	      
	      B[a]=B[a-5]*1+C[a][b][c];
	    }

    return 0;
}