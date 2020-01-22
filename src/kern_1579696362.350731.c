#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(220, 100, "zeros");
	int *A = create_one_dim_int(550, "zeros");

	for (int c = 5; c < 99; c++)
	  for (int b = 5; b < 215; b++)
	    for (int a = 5; a < 215; a++)
	    {
	      
	      A[a]=A[a-1]/41;
	      
	      B[a][b]=B[a+3][b]-40;
	      
	      B[a][b]=36;
	      
	      int var_a=B[a][b]+17;
	      int var_b=B[a+5][b+1]/34;
	      
	      B[a][b]=B[a][b]-47;
	      A[a]=B[a-3][b-5]-A[a];
	      
	      A[a]=A[a]+B[a][b];
	      A[a]=A[a-2]/40;
	    }

    return 0;
}