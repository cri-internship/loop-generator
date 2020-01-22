#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***E = create_three_dim_int(660, 790, 360, "zeros");
	int ***C = create_three_dim_int(910, 160, 960, "zeros");
	int *A = create_one_dim_int(590, "zeros");
	int ***D = create_three_dim_int(520, 490, 520, "zeros");
	int *B = create_one_dim_int(210, "zeros");

	for (int c = 2; c < 206; c++)
	  for (int b = 2; b < 206; b++)
	    for (int a = 2; a < 206; a++)
	    {
	      
	      B[a]=B[a+4]*37;
	      
	      int var_a=B[a]*1;
	      int var_b=B[a-2]/0;
	    }

    return 0;
}