#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(30, "zeros");
	int ***C = create_three_dim_int(420, 910, 590, "zeros");
	int *A = create_one_dim_int(100, "zeros");

	for (int b = 5; b < 30; b++)
	  for (int a = 5; a < 30; a++)
	  {
	    
	     A[a]=B[a]-A[a];
	     B[a]=C[a][b][a]/A[a];
	    
	     int var_a=B[a]+50;
	     int var_b=B[a-5]+3;
	    
	     C[a][b][a]=A[a]+B[a]/15;
	     B[a]=A[a+1]/25;
	  }

    return 0;
}