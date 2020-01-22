#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(220, 10, 360, "zeros");
	int *E = create_one_dim_int(450, "zeros");
	int ***D = create_three_dim_int(850, 410, 670, "zeros");
	int *B = create_one_dim_int(20, "zeros");
	int *C = create_one_dim_int(50, "zeros");

	for (int b = 0; b < 449; b++)
	  for (int a = 0; a < 449; a++)
	  {
	    
	     E[a]=7;
	     E[a+1]=23;
	  }

    return 0;
}