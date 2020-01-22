#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(620, 760, 490, "zeros");

	for (int c = 0; c < 490; c++)
	  for (int b = 0; b < 757; b++)
	    for (int a = 0; a < 615; a++)
	    {
	      
	      A[a][b][c]=A[a+5][b+3][c]-0;
	    }

    return 0;
}