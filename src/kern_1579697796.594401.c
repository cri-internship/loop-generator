#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(370, 220, 670, "ones");
	int ***B = create_three_dim_int(700, 570, 930, "ones");
	int *A = create_one_dim_int(850, "ones");

	for (int b = 5; b < 220; b++)
	  for (int a = 1; a < 368; a++)
	  {
	    
	     B[a][b][a]=B[a-1][b-5][a]/A[a];
	    
	     C[a][b][a]=8;
	     C[a+2][b][a+1]=A[a];
	    
	     int var_a=B[a][b][a]-2;
	     int var_b=B[a+3][b][a+5]-42;
	  }

    return 0;
}