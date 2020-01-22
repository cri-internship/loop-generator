#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(170, 410, 520, "ones");
	int **B = create_two_dim_int(320, 980, "ones");

	for (int c = 5; c < 520; c++)
	  for (int b = 3; b < 410; b++)
	    for (int a = 4; a < 170; a++)
	    {
	      
	      A[a][b][c]=A[a-4][b-3][c]+24;
	      
	      A[a][b][c]=A[a-4][b][c-5]*18;
	    }

    return 0;
}