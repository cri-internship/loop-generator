#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(270, 540, "zeros");
	float *E = create_one_dim_float(90, "zeros");
	float ***B = create_three_dim_float(300, 210, 610, "zeros");
	float ***A = create_three_dim_float(960, 530, 610, "zeros");
	float *C = create_one_dim_float(670, "zeros");

	for (int c = 3; c < 610; c++)
	  for (int b = 5; b < 210; b++)
	    for (int a = 5; a < 87; a++)
	    {
	      
	      B[a][b][c]=B[a-3][b-1][c-3]-0.997;
	      
	      E[a]=E[a-2]*0.662;
	      
	      D[a][b]=B[a][b][c]*E[a]+A[a][b][c]/C[a];
	      D[a-5][b-2]=E[a]*B[a][b][c];
	      
	      C[a]=D[a][b]/A[a][b][c]-B[a][b][c];
	      C[a]=A[a][b][c];
	      
	      D[a][b]=0.181;
	      
	      C[a]=B[a][b][c]/A[a][b][c];
	      D[a][b]=B[a][b-5][c-3]-A[a][b][c];
	      
	      B[a][b][c]=E[a]/B[a][b][c]+A[a][b][c]-D[a][b]*C[a];
	      E[a]=E[a+3]*A[a][b][c];
	    }

    return 0;
}