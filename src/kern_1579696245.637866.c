#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(220, 1000, 120, "random");
	int *B = create_one_dim_int(600, "random");

	for (int b = 5; b < 1000; b++)
	  for (int a = 5; a < 220; a++)
	  {
	    
	     A[a][b][a]=A[a-5][b][a-1]-B[a];
	    
	     int var_a=B[a]-39;
	     int var_b=B[a+1]/30;
	    
	     int var_c=A[a][b][a]/29;
	     int var_d=A[a-5][b-5][a-5]+35;
	  }

    return 0;
}