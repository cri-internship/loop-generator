#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(850, 450, 180, "ones");
	int *D = create_one_dim_int(20, "ones");
	int *C = create_one_dim_int(610, "ones");
	int ***A = create_three_dim_int(790, 810, 450, "ones");

	for (int c = 2; c < 606; c++)
	  for (int b = 2; b < 606; b++)
	    for (int a = 2; a < 606; a++)
	    {
	      
	      C[a]=0;
	      C[a+4]=43;
	      
	      int var_a=C[a]+12;
	      int var_b=C[a-2]+8;
	    }

    return 0;
}