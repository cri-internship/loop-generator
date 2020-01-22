#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(430, 300, "random");
	int ***C = create_three_dim_int(780, 570, 970, "random");
	int ***A = create_three_dim_int(530, 180, 120, "random");

	for (int b = 4; b < 178; b++)
	  for (int a = 4; a < 426; a++)
	  {
	    
	     C[a][b][a]=C[a-4][b-4][a-4]+B[a][b]/A[a][b][a];
	    
	     C[a][b][a]=C[a+5][b][a]/B[a][b]*A[a][b][a];
	    
	     C[a][b][a]=C[a][b+2][a+2]/49;
	    
	     A[a][b][a]=A[a+2][b+2][a+2]+29;
	    
	     B[a][b]=B[a+4][b+2]/40;
	  }

    return 0;
}