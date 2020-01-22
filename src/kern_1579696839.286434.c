#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(840, 50, 290, "random");
	int *B = create_one_dim_int(310, "random");

	for (int b = 2; b < 50; b++)
	  for (int a = 5; a < 305; a++)
	  {
	    
	     B[a]=B[a+5]+A[a][b][a];
	    
	     int var_a=A[a][b][a]/12;
	     int var_b=A[a][b-2][a-5]+17;
	    
	     int var_c=B[a]*36;
	     int var_d=B[a+2]/24;
	  }

    return 0;
}