#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(990, 360, 530, "zeros");
	double **B = create_two_dim_double(720, 630, "zeros");

	for (int d = 5; d < 530; d++)
	  for (int c = 2; c < 356; c++)
	    for (int b = 5; b < 720; b++)
	      for (int a = 5; a < 720; a++)
	      {
	        
	       A[a][b][c]=A[a-4][b-2][c-1]*B[a][b];
	        
	       B[a][b]=A[a][b][c]-0.491;
	       A[a][b][c]=A[a-5][b][c-5]/0.615;
	        
	       double var_a=A[a][b][c]*0.733;
	       double var_b=A[a+3][b+4][c]-0.247;
	        
	       A[a][b][c]=B[a][b]+A[a][b][c];
	       B[a][b]=B[a][b]*0.299;
	      }

    return 0;
}