#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(760, 220, "zeros");
	int ***B = create_three_dim_int(90, 280, 40, "zeros");

	for (int b = 3; b < 220; b++)
	  for (int a = 1; a < 85; a++)
	  {
	    
	     B[a][b][a]=B[a][b-3][a]/A[a][b];
	    
	     A[a][b]=A[a-1][b-2]/46;
	    
	     B[a][b][a]=B[a+2][b+5][a+4]-15;
	    
	     A[a][b]=B[a][b][a];
	    
	     B[a][b][a]=B[a][b][a]/A[a][b];
	     A[a][b]=B[a+1][b+5][a+5]/A[a][b];
	    
	     int var_a=B[a][b][a]*26;
	     int var_b=B[a+4][b+2][a+4]/48;
	  }

    return 0;
}