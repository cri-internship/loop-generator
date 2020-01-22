#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(250, "random");
	int ***A = create_three_dim_int(450, 1000, 300, "random");
	int *D = create_one_dim_int(770, "random");
	int *E = create_one_dim_int(280, "random");
	int **B = create_two_dim_int(470, 320, "random");

	for (int d = 5; d < 300; d++)
	  for (int c = 4; c < 320; c++)
	    for (int b = 5; b < 250; b++)
	      for (int a = 5; a < 250; a++)
	      {
	        
	       A[a][b][c]=A[a-3][b-4][c-5]*30;
	        
	       A[a][b][c]=A[a-5][b-4][c]-39;
	        
	       C[a]=D[a]-30;
	       D[a]=28*C[a];
	        
	       D[a]=D[a+3]*B[a][b];
	        
	       B[a][b]=32;
	       B[a][b-4]=43;
	        
	       E[a]=D[a]/B[a][b]+0-C[a];
	       E[a+5]=B[a][b]+A[a][b][c]-C[a]/D[a];
	        
	       A[a][b][c]=C[a]-B[a][b];
	       B[a][b]=C[a-4]*E[a];
	      }

    return 0;
}