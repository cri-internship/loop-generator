#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(820, 290, 860, "random");
	float **D = create_two_dim_float(580, 890, "random");
	float ***B = create_three_dim_float(270, 510, 280, "random");
	float ***C = create_three_dim_float(780, 910, 540, "random");
	float **E = create_two_dim_float(460, 170, "random");

	for (int c = 0; c < 275; c++)
	  for (int b = 3; b < 509; b++)
	    for (int a = 3; a < 265; a++)
	    {
	      
	      B[a][b][c]=B[a-3][b-3][c]/0.333;
	      
	      C[a][b][c]=C[a+1][b][c+3]+0.88;
	      
	      D[a][b]=0.087;
	      D[a+1][b+3]=0.589;
	      
	      C[a][b][c]=E[a][b]-A[a][b][c];
	      
	      D[a][b]=C[a][b][c]+0.381/B[a][b][c];
	      
	      B[a][b][c]=B[a][b][c]-0.636+A[a][b][c];
	      C[a][b][c]=B[a+5][b+1][c+5]/D[a][b];
	    }

    return 0;
}