#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(270, 930, "ones");
	int **B = create_two_dim_int(130, 360, "ones");

	for (int c = 1; c < 360; c++)
	  for (int b = 5; b < 130; b++)
	    for (int a = 5; a < 130; a++)
	    {
	      
	      B[a][b]=B[a-5][b-1]*A[a][b];
	      
	      A[a][b]=37;
	      A[a+5][b+4]=36;
	    }

    return 0;
}