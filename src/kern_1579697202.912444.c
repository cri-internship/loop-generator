#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(630, "ones");
	int *C = create_one_dim_int(940, "ones");
	int ***B = create_three_dim_int(50, 100, 90, "ones");

	for (int c = 4; c < 630; c++)
	  for (int b = 4; b < 630; b++)
	    for (int a = 4; a < 630; a++)
	    {
	      
	      A[a]=A[a-4]*B[a][b][c];
	    }

    return 0;
}