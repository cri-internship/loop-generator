#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(940, 1000, "ones");
	int **A = create_two_dim_int(350, 340, "ones");

	for (int c = 4; c < 336; c++)
	  for (int b = 2; b < 345; b++)
	    for (int a = 2; a < 345; a++)
	    {
	      
	      A[a][b]=A[a+5][b+4]+40;
	      
	      A[a][b]=14;
	    }

    return 0;
}