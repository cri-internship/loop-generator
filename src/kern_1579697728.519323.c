#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(610, 630, "ones");
	int *B = create_one_dim_int(470, "ones");
	int **A = create_two_dim_int(70, 660, "ones");

	for (int d = 2; d < 628; d++)
	  for (int c = 5; c < 70; c++)
	    for (int b = 5; b < 70; b++)
	      for (int a = 5; a < 70; a++)
	      {
	        
	       A[a][b]=A[a][b-2]*36;
	        
	       B[a]=B[a-5]*18;
	        
	       C[a][b]=C[a+4][b+2]/32;
	        
	       A[a][b]=C[a][b]-42;
	       B[a]=C[a][b-1]*B[a]+A[a][b];
	      }

    return 0;
}