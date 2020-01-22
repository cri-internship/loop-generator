#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(40, "random");
	int *D = create_one_dim_int(150, "random");
	int *A = create_one_dim_int(550, "random");
	int *E = create_one_dim_int(570, "random");
	int *C = create_one_dim_int(870, "random");

	for (int b = 5; b < 38; b++)
	  for (int a = 5; a < 38; a++)
	  {
	    
	     B[a]=B[a-1]-C[a]/A[a]*D[a];
	    
	     E[a]=E[a-5]-B[a]*C[a];
	    
	     E[a]=E[a-4]/26;
	    
	     int var_a=B[a]-28;
	     int var_b=B[a+2]-44;
	  }

    return 0;
}