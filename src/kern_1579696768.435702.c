#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(40, 770, 890, "ones");
	float ***A = create_three_dim_float(930, 620, 360, "ones");
	float ***C = create_three_dim_float(410, 780, 920, "ones");
	float **D = create_two_dim_float(540, 740, "ones");
	float ***E = create_three_dim_float(660, 390, 250, "ones");

	for (int c = 1; c < 247; c++)
	  for (int b = 2; b < 388; b++)
	    for (int a = 2; a < 40; a++)
	    {
	      
	      C[a][b][c]=C[a-2][b-2][c-1]-B[a][b][c]*A[a][b][c]/0.921+D[a][b];
	      
	      E[a][b][c]=E[a+3][b+2][c+3]-C[a][b][c];
	      
	      A[a][b][c]=A[a+4][b+5][c+2]/0.842;
	      
	      A[a][b][c]=A[a+3][b+4][c+1]*D[a][b]-E[a][b][c]+C[a][b][c];
	      
	      D[a][b]=0.599;
	      D[a+3][b+1]=0.518;
	      
	      float var_a=B[a][b][c]*0.95;
	      float var_b=B[a][b+2][c]*0.251;
	      
	      B[a][b][c]=C[a][b][c]/D[a][b]-A[a][b][c];
	      C[a][b][c]=C[a+5][b+4][c+2]*E[a][b][c]-A[a][b][c];
	    }

    return 0;
}