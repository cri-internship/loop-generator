#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(780, "random");
	int *C = create_one_dim_int(740, "random");
	int ***A = create_three_dim_int(280, 920, 220, "random");

	for (int b = 4; b < 920; b++)
	  for (int a = 5; a < 280; a++)
	  {
	    
	     A[a][b][a]=A[a-1][b-3][a-5]-23;
	    
	     A[a][b][a]=21+B[a];
	    
	     int var_a=C[a]+49;
	     int var_b=C[a-3]+8;
	    
	     A[a][b][a]=B[a]+A[a][b][a]-C[a];
	     C[a]=B[a-1]-C[a]+30;
	    
	     B[a]=C[a]/B[a];
	     A[a][b][a]=C[a+4]-43*A[a][b][a];
	  }

    return 0;
}