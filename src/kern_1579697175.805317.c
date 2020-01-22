#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(630, 340, "random");
	double ***C = create_three_dim_double(140, 700, 300, "random");
	double **D = create_two_dim_double(450, 210, "random");
	double **E = create_two_dim_double(50, 490, "random");
	double ***B = create_three_dim_double(460, 440, 970, "random");

	for (int d = 5; d < 300; d++)
	  for (int c = 2; c < 205; c++)
	    for (int b = 5; b < 140; b++)
	      for (int a = 5; a < 140; a++)
	      {
	        
	       D[a][b]=D[a+4][b+5]+E[a][b]-C[a][b][c]/A[a][b]*B[a][b][c];
	        
	       A[a][b]=0.719;
	       A[a+4][b+5]=0.459;
	        
	       B[a][b][c]=0.68;
	       B[a+1][b+3][c+2]=0.62;
	        
	       B[a][b][c]=C[a][b][c]*D[a][b]/D[a][b]+E[a][b];
	       D[a][b]=C[a-5][b-2][c-5]*E[a][b]/B[a][b][c]+A[a][b];
	        
	       A[a][b]=A[a][b]+D[a][b];
	       E[a][b]=A[a-4][b]+E[a][b]-C[a][b][c];
	      }

    return 0;
}