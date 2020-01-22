#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(960, 10, "random");
	int *B = create_one_dim_int(550, "random");

	for (int b = 2; b < 9; b++)
	  for (int a = 2; a < 548; a++)
	  {
	    
	     A[a][b]=A[a-2][b-2]+18;
	    
	     B[a]=9;
	     B[a+2]=4;
	    
	     int var_a=A[a][b]+11;
	     int var_b=A[a+3][b+1]-21;
	  }

    return 0;
}