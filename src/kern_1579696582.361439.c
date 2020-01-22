#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(760, 470, 850, "zeros");
	int **A = create_two_dim_int(50, 410, "zeros");

	for (int c = 0; c < 849; c++)
	  for (int b = 0; b < 467; b++)
	    for (int a = 0; a < 756; a++)
	    {
	      
	      B[a][b][c]=B[a+4][b+3][c+1]/31;
	    }

    return 0;
}