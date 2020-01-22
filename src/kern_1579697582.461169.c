#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(860, 730, "random");
	int **C = create_two_dim_int(850, 90, "random");
	int **B = create_two_dim_int(130, 490, "random");

	for (int b = 3; b < 725; b++)
	  for (int a = 3; a < 856; a++)
	  {
	    
	     A[a][b]=A[a][b-3]-B[a][b];
	    
	     A[a][b]=A[a-1][b]*8;
	    
	     B[a][b]=A[a][b]+33;
	     A[a][b]=A[a+3][b+5]+B[a][b];
	    
	     int var_a=A[a][b]*31;
	     int var_b=A[a-3][b-3]+31;
	  }

    return 0;
}