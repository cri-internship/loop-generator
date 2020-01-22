#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(600, 840, 280, "zeros");
	int **A = create_two_dim_int(870, 540, "zeros");

	for (int b = 0; b < 535; b++)
	  for (int a = 0; a < 868; a++)
	  {
	    
	     int var_a=A[a][b]+23;
	     int var_b=A[a+2][b+5]+2;
	  }

    return 0;
}