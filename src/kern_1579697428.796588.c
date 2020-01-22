#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **E = create_two_dim_int(260, 270, "zeros");
	int **A = create_two_dim_int(440, 540, "zeros");
	int **D = create_two_dim_int(470, 90, "zeros");
	int *B = create_one_dim_int(790, "zeros");
	int ***C = create_three_dim_int(410, 700, 80, "zeros");

	for (int c = 0; c < 265; c++)
	  for (int b = 0; b < 257; b++)
	    for (int a = 0; a < 257; a++)
	    {
	      
	      int var_a=E[a][b]/39;
	      int var_b=E[a+3][b+5]+23;
	    }

    return 0;
}