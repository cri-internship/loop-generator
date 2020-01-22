#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(430, "zeros");
	int **A = create_two_dim_int(830, 650, "zeros");
	int **C = create_two_dim_int(190, 720, "zeros");

	for (int b = 1; b < 650; b++)
	  for (int a = 2; a < 427; a++)
	  {
	    
	     B[a]=B[a+3]+27;
	    
	     int var_a=A[a][b]/47;
	     int var_b=A[a-2][b-1]-30;
	  }

    return 0;
}