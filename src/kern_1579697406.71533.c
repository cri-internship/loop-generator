#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(740, 250, 160, "ones");
	int **A = create_two_dim_int(600, 910, "ones");
	int *B = create_one_dim_int(440, "ones");

	for (int d = 0; d < 908; d++)
	  for (int c = 0; c < 595; c++)
	    for (int b = 0; b < 595; b++)
	      for (int a = 0; a < 595; a++)
	      {
	        
	       A[a][b]=50;
	       A[a+5][b+2]=37;
	      }

    return 0;
}