#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(50, 730, 720, "random");
	int ***C = create_three_dim_int(160, 120, 920, "random");
	int ***B = create_three_dim_int(820, 630, 180, "random");
	int *E = create_one_dim_int(940, "random");
	int ***D = create_three_dim_int(600, 730, 260, "random");

	for (int d = 0; d < 918; d++)
	  for (int c = 5; c < 118; c++)
	    for (int b = 3; b < 157; b++)
	      for (int a = 3; a < 157; a++)
	      {
	        
	       C[a][b][c]=C[a+3][b+2][c+2]-27;
	        
	       int var_a=C[a][b][c]/39;
	       int var_b=C[a-3][b-5][c]+33;
	      }

    return 0;
}