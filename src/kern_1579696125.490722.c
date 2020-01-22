#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(810, "random");
	int ***A = create_three_dim_int(430, 500, 650, "random");
	int ***B = create_three_dim_int(580, 250, 120, "random");
	int *C = create_one_dim_int(500, "random");
	int **E = create_two_dim_int(1000, 290, "random");

	for (int d = 0; d < 117; d++)
	  for (int c = 1; c < 246; c++)
	    for (int b = 4; b < 579; b++)
	      for (int a = 4; a < 579; a++)
	      {
	        
	       B[a][b][c]=B[a-4][b-1][c]+20;
	        
	       int var_a=D[a]/15;
	       D[a]=46;
	        
	       E[a][b]=E[a][b+3]/2;
	        
	       E[a][b]=E[a+5][b+5]+49;
	        
	       C[a]=B[a][b][c]*E[a][b]/C[a];
	       E[a][b]=B[a+1][b+4][c+3]*A[a][b][c]/D[a]-A[a][b][c];
	      }

    return 0;
}