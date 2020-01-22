#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(960, 570, 400, "random");
	double *A = create_one_dim_double(710, "random");
	double ***C = create_three_dim_double(660, 430, 680, "random");

	for (int c = 4; c < 398; c++)
	  for (int b = 5; b < 427; b++)
	    for (int a = 5; a < 658; a++)
	    {
	      
	      C[a][b][c]=C[a-3][b-3][c-2]+0.338/A[a];
	      
	      B[a][b][c]=B[a-4][b-5][c-4]*C[a][b][c];
	      
	      B[a][b][c]=B[a+2][b+2][c+2]-0.345;
	      
	      C[a][b][c]=C[a+2][b+3][c]*0.439;
	      
	      A[a]=B[a][b][c]/C[a][b][c];
	      A[a-5]=C[a][b][c]+B[a][b][c];
	      
	      A[a]=0.85;
	      
	      C[a][b][c]=C[a][b][c]+A[a];
	      A[a]=C[a+2][b][c+1]-B[a][b][c]*A[a];
	    }

    return 0;
}