#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(740, 950, 80, "random");

	for (int c = 5; c < 80; c++)
	  for (int b = 0; b < 950; b++)
	    for (int a = 4; a < 740; a++)
	    {
	      
	      A[a][b][c]=A[a-4][b][c-5]*39;
	    }

    return 0;
}