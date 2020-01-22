#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(740, 590, 30, "zeros");
	int **A = create_two_dim_int(910, 570, "zeros");

	for (int c = 5; c < 570; c++)
	  for (int b = 1; b < 910; b++)
	    for (int a = 1; a < 910; a++)
	    {
	      
	      A[a][b]=A[a-1][b-5]*43;
	    }

    return 0;
}