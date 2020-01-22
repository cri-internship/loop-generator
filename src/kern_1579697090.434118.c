#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(470, 390, "random");
	double **B = create_two_dim_double(620, 360, "random");

	for (int d = 5; d < 356; d++)
	  for (int c = 2; c < 470; c++)
	    for (int b = 2; b < 470; b++)
	      for (int a = 2; a < 470; a++)
	      {
	        
	       B[a][b]=B[a+1][b+4]+A[a][b];
	        
	       B[a][b]=B[a+5][b+1]*0.56;
	        
	       A[a][b]=0.902;
	       A[a-2][b-5]=0.47;
	        
	       A[a][b]=B[a][b]*A[a][b];
	       B[a][b]=B[a-2][b-5]*A[a][b];
	      }

    return 0;
}