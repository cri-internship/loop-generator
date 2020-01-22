#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(670, 90, "zeros");
	int ***B = create_three_dim_int(970, 200, 940, "zeros");
	int ***C = create_three_dim_int(220, 190, 930, "zeros");

	for (int b = 3; b < 90; b++)
	  for (int a = 5; a < 215; a++)
	  {
	    
	     C[a][b][a]=C[a-5][b-3][a-4]/A[a][b]-B[a][b][a];
	    
	     A[a][b]=A[a-1][b-1]/C[a][b][a]-14;
	    
	     C[a][b][a]=C[a+2][b+5][a+5]*A[a][b]-B[a][b][a];
	    
	     B[a][b][a]=34;
	     B[a+1][b+5][a+4]=18;
	    
	     int var_a=C[a][b][a]-5;
	     int var_b=C[a][b][a+4]*17;
	  }

    return 0;
}