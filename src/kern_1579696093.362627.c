#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(340, 710, 690, "ones");
	int **B = create_two_dim_int(980, 880, "ones");

	for (int b = 5; b < 708; b++)
	  for (int a = 5; a < 335; a++)
	  {
	    
	     A[a][b][a]=A[a+5][b+2][a+2]/B[a][b];
	    
	     B[a][b]=B[a+1][b+3]*A[a][b][a];
	    
	     B[a][b]=B[a][b+3]*50;
	  }

    return 0;
}