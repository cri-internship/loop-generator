#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(520, "zeros");
	int **D = create_two_dim_int(660, 900, "zeros");
	int **B = create_two_dim_int(270, 750, "zeros");
	int **A = create_two_dim_int(550, 430, "zeros");

	for (int b = 3; b < 430; b++)
	  for (int a = 3; a < 270; a++)
	  {
	    
	     A[a][b]=B[a][b]/C[a]+D[a][b];
	     A[a][b]=A[a][b]-D[a][b]*C[a];
	    
	     B[a][b]=B[a-3][b-3]+41;
	    
	     D[a][b]=D[a+2][b+2]*A[a][b]+A[a][b];
	    
	     D[a][b]=36;
	    
	     B[a][b]=21;
	  }

    return 0;
}