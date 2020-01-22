#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(470, "zeros");
	int ***D = create_three_dim_int(40, 870, 660, "zeros");
	int ***E = create_three_dim_int(910, 840, 70, "zeros");
	int **C = create_two_dim_int(670, 620, "zeros");
	int *A = create_one_dim_int(530, "zeros");

	for (int c = 0; c < 468; c++)
	  for (int b = 0; b < 468; b++)
	    for (int a = 0; a < 468; a++)
	    {
	      
	      int var_a=B[a]-28;
	      int var_b=B[a+2]*2;
	    }

    return 0;
}