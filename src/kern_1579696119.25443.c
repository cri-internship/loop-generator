#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(670, "random");
	int *C = create_one_dim_int(550, "random");
	int ***A = create_three_dim_int(520, 800, 20, "random");

	for (int b = 0; b < 546; b++)
	  for (int a = 0; a < 546; a++)
	  {
	    
	     B[a]=C[a];
	     B[a]=B[a]/A[a][b][a];
	    
	     C[a]=30;
	     C[a+4]=35;
	  }

    return 0;
}