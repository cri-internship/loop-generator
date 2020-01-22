#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(290, 690, "ones");
	int **B = create_two_dim_int(390, 440, "ones");
	int ***C = create_three_dim_int(510, 670, 950, "ones");
	int **A = create_two_dim_int(660, 770, "ones");

	for (int b = 3; b < 436; b++)
	  for (int a = 0; a < 286; a++)
	  {
	    
	     C[a][b][a]=C[a+3][b][a+2]-D[a][b]*B[a][b]+A[a][b];
	    
	     D[a][b]=D[a+4][b]-C[a][b][a];
	    
	     D[a][b]=2;
	    
	     C[a][b][a]=4;
	    
	     C[a][b][a]=D[a][b]*C[a][b][a]/A[a][b]-B[a][b];
	     B[a][b]=D[a][b-3]+C[a][b][a]*A[a][b]-7;
	    
	     A[a][b]=B[a][b]*D[a][b]/A[a][b];
	     D[a][b]=B[a+4][b+4]-C[a][b][a]*A[a][b]+D[a][b];
	  }

    return 0;
}