#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(770, "zeros");
	int ***E = create_three_dim_int(390, 810, 190, "zeros");
	int *B = create_one_dim_int(740, "zeros");
	int ***D = create_three_dim_int(80, 20, 300, "zeros");
	int ***A = create_three_dim_int(160, 940, 40, "zeros");

	for (int c = 0; c < 770; c++)
	  for (int b = 0; b < 770; b++)
	    for (int a = 0; a < 770; a++)
	    {
	      
	      C[a]=32;
	      C[a]=0;
	    }

    return 0;
}