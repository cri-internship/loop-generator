#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(70, "random");
	double ***A = create_three_dim_double(370, 130, 20, "random");
	double ***C = create_three_dim_double(510, 440, 770, "random");

	for (int d = 0; d < 17; d++)
	  for (int c = 0; c < 126; c++)
	    for (int b = 0; b < 370; b++)
	      for (int a = 0; a < 370; a++)
	      {
	        
	       C[a][b][c]=A[a][b][c];
	       C[a+5][b+3][c+3]=0.577;
	        
	       A[a][b][c]=0.998;
	       A[a][b+4][c+3]=0.801;
	      }

    return 0;
}