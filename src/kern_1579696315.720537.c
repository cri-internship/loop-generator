#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(530, 580, 110, "random");
	int **A = create_two_dim_int(540, 640, "random");

	for (int d = 0; d < 106; d++)
	  for (int c = 2; c < 579; c++)
	    for (int b = 5; b < 530; b++)
	      for (int a = 5; a < 530; a++)
	      {
	        
	       B[a][b][c]=A[a][b]-B[a][b][c];
	       A[a][b]=B[a][b][c];
	        
	       A[a][b]=B[a][b][c];
	        
	       B[a][b][c]=A[a][b];
	        
	       int var_a=A[a][b]+50;
	       int var_b=A[a-4][b-2]+11;
	      }

    return 0;
}