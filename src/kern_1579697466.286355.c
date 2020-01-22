#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(820, 680, 610, "ones");

	for (int d = 0; d < 605; d++)
	  for (int c = 0; c < 676; c++)
	    for (int b = 0; b < 815; b++)
	      for (int a = 0; a < 815; a++)
	      {
	        
	       A[a][b][c]=A[a+5][b+4][c+5]*16;
	      }

    return 0;
}