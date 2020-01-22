#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(1000, 110, 600, "random");
	int *A = create_one_dim_int(830, "random");

	for (int c = 0; c < 595; c++)
	  for (int b = 0; b < 108; b++)
	    for (int a = 0; a < 830; a++)
	    {
	      
	      B[a][b][c]=B[a+4][b+2][c+5]/A[a];
	      
	      int var_a=A[a]/9;
	    }

    return 0;
}