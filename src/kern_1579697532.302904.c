#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(270, 480, 230, "zeros");
	int ***A = create_three_dim_int(280, 990, 980, "zeros");
	int *B = create_one_dim_int(490, "zeros");
	int *C = create_one_dim_int(510, "zeros");
	int ***E = create_three_dim_int(240, 140, 950, "zeros");

	for (int b = 0; b < 137; b++)
	  for (int a = 0; a < 235; a++)
	  {
	    
	     int var_a=E[a][b][a]*14;
	     int var_b=E[a+5][b+3][a+5]/32;
	  }

    return 0;
}