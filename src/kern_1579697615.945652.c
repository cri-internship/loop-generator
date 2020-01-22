#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(620, 220, "zeros");
	int ***A = create_three_dim_int(330, 210, 950, "zeros");

	for (int c = 3; c < 220; c++)
	  for (int b = 4; b < 620; b++)
	    for (int a = 4; a < 620; a++)
	    {
	      
	      B[a][b]=B[a-4][b-3]*31;
	    }

    return 0;
}