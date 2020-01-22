#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(890, 610, 1000, "ones");
	int **A = create_two_dim_int(170, 130, "ones");
	int ***B = create_three_dim_int(760, 350, 540, "ones");

	for (int c = 5; c < 1000; c++)
	  for (int b = 4; b < 610; b++)
	    for (int a = 5; a < 890; a++)
	    {
	      
	      C[a][b][c]=C[a-5][b-4][c-5]/37;
	      
	      C[a][b][c]=22;
	    }

    return 0;
}