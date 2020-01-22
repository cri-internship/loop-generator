#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(860, 670, "random");
	int **B = create_two_dim_int(60, 530, "random");
	int **A = create_two_dim_int(400, 90, "random");

	for (int d = 5; d < 90; d++)
	  for (int c = 5; c < 60; c++)
	    for (int b = 5; b < 60; b++)
	      for (int a = 5; a < 60; a++)
	      {
	        
	       A[a][b]=A[a-3][b-5]/C[a][b]*B[a][b];
	        
	       C[a][b]=C[a+1][b+5]/48;
	        
	       B[a][b]=A[a][b];
	       B[a-5][b-1]=A[a][b]-C[a][b];
	      }

    return 0;
}