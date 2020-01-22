#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(570, "random");
	int *A = create_one_dim_int(580, "random");
	int *C = create_one_dim_int(60, "random");
	int *B = create_one_dim_int(230, "random");

	for (int d = 0; d < 57; d++)
	  for (int c = 0; c < 57; c++)
	    for (int b = 0; b < 57; b++)
	      for (int a = 0; a < 57; a++)
	      {
	        
	       C[a]=23;
	       C[a+3]=18;
	        
	       A[a]=27;
	       A[a+2]=D[a]-C[a]*C[a];
	      }

    return 0;
}