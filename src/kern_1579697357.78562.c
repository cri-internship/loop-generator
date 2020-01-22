#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(230, "zeros");
	int ***A = create_three_dim_int(110, 610, 50, "zeros");
	int **B = create_two_dim_int(130, 170, "zeros");

	for (int b = 5; b < 170; b++)
	  for (int a = 4; a < 110; a++)
	  {
	    
	     C[a]=C[a-1]/9;
	    
	     A[a][b][a]=C[a]-12;
	     A[a][b-4][a-1]=C[a];
	    
	     A[a][b][a]=B[a][b];
	    
	     C[a]=B[a][b]/A[a][b][a]-C[a];
	     B[a][b]=B[a][b-5]-33+C[a];
	  }

    return 0;
}