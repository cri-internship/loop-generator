#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(80, "ones");
	int *B = create_one_dim_int(680, "ones");
	int ***A = create_three_dim_int(880, 300, 740, "ones");
	int *D = create_one_dim_int(350, "ones");

	for (int c = 0; c < 678; c++)
	  for (int b = 0; b < 678; b++)
	    for (int a = 0; a < 678; a++)
	    {
	      
	      B[a]=B[a+2]/A[a][b][c]+2;
	    }

    return 0;
}