#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(690, "zeros");

	for (int b = 1; b < 688; b++)
	  for (int a = 1; a < 688; a++)
	  {
	    
	     int var_a=A[a]*44;
	     int var_b=A[a]-37;
	    
	     int var_c=A[a]-46;
	     int var_d=A[a+2]-41;
	    
	     int var_e=A[a]-7;
	     int var_f=A[a-1]*45;
	  }

    return 0;
}