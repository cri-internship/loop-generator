#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(50, 710, 770, "random");
	int ***A = create_three_dim_int(80, 740, 820, "random");
	int ***C = create_three_dim_int(820, 560, 460, "random");
	int *D = create_one_dim_int(230, "random");

	for (int d = 1; d < 456; d++)
	  for (int c = 1; c < 555; c++)
	    for (int b = 0; b < 77; b++)
	      for (int a = 0; a < 77; a++)
	      {
	        
	       A[a][b][c]=A[a+3][b+2][c+5]/C[a][b][c]-D[a];
	        
	       D[a]=D[a+4]+20;
	        
	       int var_a=C[a][b][c]*6;
	       int var_b=C[a][b-1][c-1]-31;
	        
	       int var_c=C[a][b][c]*41;
	       int var_d=C[a+2][b+5][c+4]/46;
	      }

    return 0;
}