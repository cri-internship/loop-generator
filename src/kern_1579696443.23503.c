#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(260, 340, "ones");
	int *C = create_one_dim_int(340, "ones");
	int **A = create_two_dim_int(810, 700, "ones");

	for (int c = 0; c < 695; c++)
	  for (int b = 0; b < 805; b++)
	    for (int a = 0; a < 805; a++)
	    {
	      
	      int var_a=A[a][b]-0;
	      int var_b=A[a+1][b+5]+36;
	      
	      int var_c=A[a][b]-4;
	      int var_d=A[a+5][b+5]/36;
	    }

    return 0;
}