#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(900, 590, "ones");
	int *D = create_one_dim_int(650, "ones");
	int *C = create_one_dim_int(390, "ones");
	int ***B = create_three_dim_int(820, 320, 220, "ones");

	for (int c = 0; c < 586; c++)
	  for (int b = 0; b < 899; b++)
	    for (int a = 0; a < 899; a++)
	    {
	      
	      A[a][b]=A[a+1][b+4]/D[a];
	    }

    return 0;
}