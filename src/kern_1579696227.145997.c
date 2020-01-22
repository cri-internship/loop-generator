#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(390, 250, "ones");
	int *A = create_one_dim_int(880, "ones");

	for (int c = 0; c < 248; c++)
	  for (int b = 3; b < 386; b++)
	    for (int a = 3; a < 386; a++)
	    {
	      
	      B[a][b]=B[a-3][b]+8;
	      
	      A[a]=A[a+5]/50;
	      
	      B[a][b]=B[a][b+1]/30;
	    }

    return 0;
}