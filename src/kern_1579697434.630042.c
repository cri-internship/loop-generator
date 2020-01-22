#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(110, 370, 190, "ones");
	int ***D = create_three_dim_int(520, 790, 750, "ones");
	int **B = create_two_dim_int(660, 450, "ones");
	int ***A = create_three_dim_int(770, 670, 390, "ones");
	int **E = create_two_dim_int(370, 510, "ones");

	for (int d = 0; d < 385; d++)
	  for (int c = 0; c < 506; c++)
	    for (int b = 0; b < 365; b++)
	      for (int a = 0; a < 365; a++)
	      {
	        
	       D[a][b][c]=D[a][b+3][c+2]-1;
	        
	       int var_a=E[a][b]/48;
	       int var_b=E[a+5][b+4]-27;
	        
	       int var_c=A[a][b][c]*18;
	       int var_d=A[a+5][b][c+5]*45;
	      }

    return 0;
}