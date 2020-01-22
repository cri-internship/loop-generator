#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(800, 70, "zeros");
	int ***A = create_three_dim_int(210, 690, 960, "zeros");

	for (int b = 0; b < 66; b++)
	  for (int a = 2; a < 205; a++)
	  {
	    
	     B[a][b]=B[a-2][b]*47;
	    
	     A[a][b][a]=A[a+5][b+2][a+5]+B[a][b];
	    
	     A[a][b][a]=A[a][b][a]/27;
	     B[a][b]=A[a][b+3][a+4]+B[a][b];
	    
	     B[a][b]=B[a][b]/18;
	     A[a][b][a]=B[a+1][b+4]/A[a][b][a];
	  }

    return 0;
}