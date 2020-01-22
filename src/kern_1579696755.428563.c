#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(850, 360, 370, "zeros");
	int *A = create_one_dim_int(820, "zeros");

	for (int b = 0; b < 820; b++)
	  for (int a = 0; a < 820; a++)
	  {
	    
	     int var_a=A[a]/12;
	     A[a]=50;
	  }

    return 0;
}