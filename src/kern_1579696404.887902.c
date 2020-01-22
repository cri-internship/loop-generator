#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(620, 340, 300, "zeros");

	for (int d = 3; d < 295; d++)
	  for (int c = 3; c < 338; c++)
	    for (int b = 5; b < 618; b++)
	      for (int a = 5; a < 618; a++)
	      {
	        
	       A[a][b][c]=A[a-5][b-3][c-1]+0.982;
	        
	       A[a][b][c]=A[a+2][b+2][c+5]*0.875;
	      }

    return 0;
}