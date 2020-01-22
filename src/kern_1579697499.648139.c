#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***E = create_three_dim_int(920, 670, 20, "zeros");
	int *D = create_one_dim_int(640, "zeros");
	int *C = create_one_dim_int(760, "zeros");
	int ***A = create_three_dim_int(600, 610, 720, "zeros");
	int **B = create_two_dim_int(180, 330, "zeros");

	for (int d = 4; d < 20; d++)
	  for (int c = 5; c < 610; c++)
	    for (int b = 2; b < 600; b++)
	      for (int a = 2; a < 600; a++)
	      {
	        
	       E[a][b][c]=E[a-2][b-5][c-4]*8;
	        
	       A[a][b][c]=24;
	       A[a-1][b-2][c-1]=36;
	      }

    return 0;
}