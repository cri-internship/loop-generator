#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(160, 830, 350, "ones");
	int ***A = create_three_dim_int(360, 490, 20, "ones");

	for (int c = 0; c < 345; c++)
	  for (int b = 0; b < 830; b++)
	    for (int a = 0; a < 157; a++)
	    {
	      
	      int var_a=B[a][b][c]+8;
	      int var_b=B[a+3][b][c+5]+12;
	    }

    return 0;
}