#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(990, 340, 70, "random");
	int *A = create_one_dim_int(420, "random");
	int *B = create_one_dim_int(130, "random");

	for (int b = 0; b < 339; b++)
	  for (int a = 5; a < 418; a++)
	  {
	    
	     A[a]=A[a-1]-C[a][b][a];
	    
	     C[a][b][a]=C[a][b+1][a+1]/34;
	    
	     A[a]=A[a+2]-11;
	    
	     C[a][b][a]=C[a][b][a]-41+B[a];
	     A[a]=C[a-5][b][a-5]-A[a];
	  }

    return 0;
}