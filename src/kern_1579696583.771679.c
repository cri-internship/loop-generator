#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(890, 530, "random");
	int **B = create_two_dim_int(60, 40, "random");

	for (int d = 0; d < 525; d++)
	  for (int c = 0; c < 885; c++)
	    for (int b = 0; b < 885; b++)
	      for (int a = 0; a < 885; a++)
	      {
	        
	       A[a][b]=A[a+5][b+5]*47;
	        
	       B[a][b]=A[a][b]/B[a][b];
	       A[a][b]=A[a+4][b]-B[a][b];
	        
	       B[a][b]=A[a][b]+B[a][b];
	       A[a][b]=A[a+3][b+2]+B[a][b];
	      }

    return 0;
}