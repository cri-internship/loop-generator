#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(250, "random");
	int ***B = create_three_dim_int(590, 870, 530, "random");

	for (int d = 1; d < 530; d++)
	  for (int c = 5; c < 870; c++)
	    for (int b = 5; b < 249; b++)
	      for (int a = 5; a < 249; a++)
	      {
	        
	       B[a][b][c]=B[a-4][b-1][c-1]/10;
	        
	       A[a]=A[a-5]*B[a][b][c];
	        
	       A[a]=9;
	        
	       A[a]=A[a]+B[a][b][c];
	       B[a][b][c]=A[a+1]/B[a][b][c];
	        
	       A[a]=B[a][b][c]/A[a];
	       A[a]=B[a-4][b-5][c]-3;
	        
	       int var_a=A[a]/6;
	       int var_b=A[a-1]-2;
	      }

    return 0;
}