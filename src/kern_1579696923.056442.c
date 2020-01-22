#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(470, "zeros");
	int *B = create_one_dim_int(650, "zeros");
	int **C = create_two_dim_int(880, 700, "zeros");
	int ***E = create_three_dim_int(200, 40, 100, "zeros");
	int **A = create_two_dim_int(840, 570, "zeros");

	for (int d = 4; d < 100; d++)
	  for (int c = 4; c < 36; c++)
	    for (int b = 5; b < 195; b++)
	      for (int a = 5; a < 195; a++)
	      {
	        
	       E[a][b][c]=E[a+5][b+4][c]*24;
	        
	       int var_a=E[a][b][c]-16;
	       int var_b=E[a-5][b-4][c-4]/19;
	        
	       int var_c=B[a]*4;
	       int var_d=B[a+2]-36;
	      }

    return 0;
}