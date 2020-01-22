#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(50, 10, "ones");
	int ***A = create_three_dim_int(200, 330, 980, "ones");

	for (int b = 5; b < 7; b++)
	  for (int a = 5; a < 45; a++)
	  {
	    
	     B[a][b]=B[a][b-2]-20;
	    
	     B[a][b]=B[a+5][b]/A[a][b][a];
	    
	     A[a][b][a]=B[a][b]*A[a][b][a];
	     B[a][b]=B[a+1][b+2]/28;
	    
	     A[a][b][a]=B[a][b]/A[a][b][a];
	     B[a][b]=B[a-4][b-5]+A[a][b][a];
	    
	     B[a][b]=B[a][b]*A[a][b][a];
	     B[a][b]=B[a+2][b+2]*A[a][b][a];
	  }

    return 0;
}