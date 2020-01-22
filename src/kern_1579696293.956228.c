#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(610, 360, "ones");
	int ***C = create_three_dim_int(590, 510, 930, "ones");
	int **A = create_two_dim_int(660, 190, "ones");

	for (int b = 0; b < 190; b++)
	  for (int a = 0; a < 605; a++)
	  {
	    
	     int var_a=A[a][b]/49;
	     A[a][b]=35;
	    
	     B[a][b]=25;
	     B[a+5][b+1]=43;
	  }

    return 0;
}