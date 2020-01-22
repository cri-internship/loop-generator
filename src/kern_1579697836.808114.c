#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(630, 600, "ones");
	int **D = create_two_dim_int(560, 380, "ones");
	int *B = create_one_dim_int(220, "ones");
	int *C = create_one_dim_int(150, "ones");
	int *E = create_one_dim_int(230, "ones");

	for (int b = 2; b < 376; b++)
	  for (int a = 5; a < 150; a++)
	  {
	    
	     C[a]=C[a-2]+E[a]*A[a][b]/36;
	    
	     B[a]=B[a-5]+C[a]*A[a][b]-E[a]/C[a];
	    
	     A[a][b]=A[a-3][b-2]/B[a]*D[a][b];
	    
	     C[a]=C[a-5]-18;
	    
	     B[a]=19;
	    
	     D[a][b]=0;
	     D[a+5][b+4]=13;
	  }

    return 0;
}