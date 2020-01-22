#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(90, 730, "ones");
	int **B = create_two_dim_int(430, 40, "ones");
	int **A = create_two_dim_int(930, 370, "ones");
	int *D = create_one_dim_int(960, "ones");

	for (int b = 2; b < 36; b++)
	  for (int a = 2; a < 88; a++)
	  {
	    
	     B[a][b]=B[a-1][b-2]/D[a]*C[a][b]-A[a][b];
	    
	     B[a][b]=B[a+1][b+4]-A[a][b]/D[a];
	    
	     C[a][b]=B[a][b];
	     C[a+2][b+4]=A[a][b];
	    
	     A[a][b]=D[a]/C[a][b]*B[a][b]+A[a][b];
	     D[a]=D[a-1]*A[a][b];
	  }

    return 0;
}