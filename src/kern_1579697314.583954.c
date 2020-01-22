#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(930, 560, "zeros");
	int **B = create_two_dim_int(470, 820, "zeros");

	for (int c = 2; c < 555; c++)
	  for (int b = 5; b < 468; b++)
	    for (int a = 5; a < 468; a++)
	    {
	      
	      A[a][b]=B[a][b];
	      B[a][b]=A[a][b]/B[a][b];
	      
	      B[a][b]=B[a-5][b-2]+38;
	      
	      A[a][b]=A[a+1][b+5]-20;
	      
	      int var_a=A[a][b]/21;
	      int var_b=A[a-3][b]-26;
	      
	      A[a][b]=B[a][b]-7;
	      A[a][b]=B[a-2][b-1]-A[a][b];
	    }

    return 0;
}