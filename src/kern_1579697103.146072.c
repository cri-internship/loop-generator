#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(750, 380, "random");
	int *B = create_one_dim_int(260, "random");
	int **A = create_two_dim_int(520, 340, "random");

	for (int b = 0; b < 340; b++)
	  for (int a = 4; a < 257; a++)
	  {
	    
	     B[a]=B[a-2]+35;
	    
	     B[a]=B[a+3]+A[a][b]-C[a][b];
	    
	     C[a][b]=C[a+5][b+2]*43;
	    
	     B[a]=13;
	    
	     A[a][b]=A[a+5][b]*B[a];
	    
	     A[a][b]=C[a][b]*A[a][b];
	  }

    return 0;
}