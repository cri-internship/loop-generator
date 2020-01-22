#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(100, 100, 900, "ones");
	int *C = create_one_dim_int(580, "ones");
	int ***A = create_three_dim_int(680, 380, 450, "ones");

	for (int b = 4; b < 100; b++)
	  for (int a = 5; a < 100; a++)
	  {
	    
	     B[a][b][a]=B[a-1][b-3][a-5]/A[a][b][a]+C[a];
	    
	     A[a][b][a]=A[a-5][b-4][a]+41;
	    
	     A[a][b][a]=A[a][b][a-1]-9;
	    
	     int var_a=C[a]+16;
	     C[a]=16;
	    
	     B[a][b][a]=35;
	    
	     A[a][b][a]=B[a][b][a]/C[a];
	     C[a]=B[a][b-4][a-4]+A[a][b][a]*C[a];
	  }

    return 0;
}