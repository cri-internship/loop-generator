#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(770, 40, "ones");
	int ***B = create_three_dim_int(870, 760, 220, "ones");
	int *A = create_one_dim_int(90, "ones");
	int *D = create_one_dim_int(310, "ones");

	for (int b = 0; b < 40; b++)
	  for (int a = 1; a < 90; a++)
	  {
	    
	     A[a]=0;
	     A[a]=50;
	    
	     int var_a=A[a]/37;
	     int var_b=A[a-1]/45;
	    
	     int var_c=C[a][b]*11;
	     int var_d=C[a+1][b]-31;
	  }

    return 0;
}