#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(110, 450, "random");
	int **A = create_two_dim_int(350, 960, "random");

	for (int b = 0; b < 445; b++)
	  for (int a = 0; a < 105; a++)
	  {
	    
	     A[a][b]=B[a][b];
	     A[a][b]=A[a][b]-B[a][b];
	    
	     B[a][b]=45;
	     B[a][b]=B[a][b]*A[a][b];
	    
	     B[a][b]=B[a][b+5]*A[a][b];
	    
	     A[a][b]=A[a+4][b+3]+B[a][b];
	    
	     B[a][b]=B[a+5][b+5]-A[a][b];
	  }

    return 0;
}