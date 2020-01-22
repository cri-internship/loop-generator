#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(80, "ones");
	int **B = create_two_dim_int(550, 970, "ones");
	int ***A = create_three_dim_int(310, 650, 60, "ones");

	for (int d = 0; d < 57; d++)
	  for (int c = 0; c < 650; c++)
	    for (int b = 0; b < 75; b++)
	      for (int a = 0; a < 75; a++)
	      {
	        
	       C[a]=C[a+5]-B[a][b]/44;
	        
	       A[a][b][c]=A[a][b][c+3]-6;
	        
	       A[a][b][c]=14;
	      }

    return 0;
}