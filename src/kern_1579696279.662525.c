#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(280, "zeros");
	int **B = create_two_dim_int(950, 310, "zeros");
	int *A = create_one_dim_int(760, "zeros");
	int **D = create_two_dim_int(250, 580, "zeros");
	int *E = create_one_dim_int(960, "zeros");

	for (int b = 0; b < 280; b++)
	  for (int a = 0; a < 280; a++)
	  {
	    
	     C[a]=31;
	     float  var_a=C[a]/2;
	    
	     int var_b=C[a]-20;
	     C[a]=13;
	    
	     int var_c=A[a]-32;
	     int var_d=A[a+2]*28;
	  }

    return 0;
}