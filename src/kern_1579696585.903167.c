#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(590, 870, "ones");
	int *A = create_one_dim_int(260, "ones");

	for (int b = 5; b < 255; b++)
	  for (int a = 5; a < 255; a++)
	  {
	    
	     int var_a=A[a]*7;
	     A[a]=49;
	    
	     int var_b=A[a]+19;
	     int var_c=A[a-5]/25;
	    
	     int var_d=A[a]-8;
	     int var_e=A[a+5]+10;
	  }

    return 0;
}