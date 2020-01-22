#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(700, 920, 770, "ones");
	int *A = create_one_dim_int(710, "ones");

	for (int b = 0; b < 705; b++)
	  for (int a = 0; a < 705; a++)
	  {
	    
	     int var_a=A[a]+13;
	     int var_b=A[a+4]/19;
	    
	     int var_c=A[a]-31;
	     int var_d=A[a+5]/8;
	  }

    return 0;
}