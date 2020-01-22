#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(470, 410, 960, "ones");

	for (int c = 3; c < 957; c++)
	  for (int b = 5; b < 407; b++)
	    for (int a = 5; a < 467; a++)
	    {
	      
	      A[a][b][c]=A[a-5][b-3][c-1]-4;
	      
	      A[a][b][c]=A[a+3][b+3][c+3]+26;
	    }

    return 0;
}