#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(690, 240, 270, "random");

	for (int d = 0; d < 269; d++)
	  for (int c = 5; c < 236; c++)
	    for (int b = 5; b < 689; b++)
	      for (int a = 5; a < 689; a++)
	      {
	        
	       A[a][b][c]=A[a-5][b-4][c]/14;
	        
	       A[a][b][c]=A[a+1][b+4][c+1]+19;
	      }

    return 0;
}