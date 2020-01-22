#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(900, 700, 860, "ones");
	int **A = create_two_dim_int(180, 340, "ones");
	int **C = create_two_dim_int(540, 200, "ones");

	for (int b = 4; b < 337; b++)
	  for (int a = 4; a < 176; a++)
	  {
	    
	     A[a][b]=A[a-3][b]-13;
	    
	     B[a][b][a]=B[a+2][b+5][a+4]+38;
	    
	     A[a][b]=A[a+4][b+3]+16;
	    
	     int var_a=A[a][b]/44;
	     int var_b=A[a-4][b-4]/47;
	    
	     C[a][b]=B[a][b][a]+C[a][b];
	     A[a][b]=B[a+5][b+1][a+2]*A[a][b]-C[a][b];
	  }

    return 0;
}