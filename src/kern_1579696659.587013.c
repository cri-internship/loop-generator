#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(420, "zeros");
	int *C = create_one_dim_int(260, "zeros");
	int ***B = create_three_dim_int(110, 490, 880, "zeros");

	for (int c = 5; c < 420; c++)
	  for (int b = 5; b < 420; b++)
	    for (int a = 5; a < 420; a++)
	    {
	      
	      A[a]=A[a-5]-7;
	      
	      A[a]=A[a-3]+B[a][b][c];
	    }

    return 0;
}