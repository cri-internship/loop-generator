#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(440, 160, 910, "random");
	double ***B = create_three_dim_double(820, 940, 290, "random");

	for (int d = 2; d < 290; d++)
	  for (int c = 3; c < 157; c++)
	    for (int b = 4; b < 440; b++)
	      for (int a = 4; a < 440; a++)
	      {
	        
	       A[a][b][c]=A[a][b+3][c+1]/B[a][b][c];
	        
	       B[a][b][c]=0.385;
	       B[a-4][b-3][c-2]=0.985;
	        
	       A[a][b][c]=B[a][b][c];
	      }

    return 0;
}