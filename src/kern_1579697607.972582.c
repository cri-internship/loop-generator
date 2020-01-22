#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(410, 500, "random");
	int **B = create_two_dim_int(460, 680, "random");
	int ***A = create_three_dim_int(710, 410, 670, "random");

	for (int c = 0; c < 668; c++)
	  for (int b = 0; b < 406; b++)
	    for (int a = 0; a < 706; a++)
	    {
	      
	      int var_a=A[a][b][c]/26;
	      int var_b=A[a+4][b+4][c+2]-13;
	    }

    return 0;
}