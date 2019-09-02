#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim(100);
	float ***C = create_three_dim(50, 50, 50);
	float **B = create_two_dim(50, 50);

	for (int c = 0; c < 50; c++)
	  for (int b = 0; b < 47; b++)
	    for (int a = 1; a < 47; a++)
	    {
	      
	      C[a][b][c]=0.09282;
	      float k=C[a][b][c]*0.63975;
	      
	      A[a]=A[a-1]+0.05299;
	      
	      float I=C[a][b][c]+0.14138;
	      C[a][b][c]=0.83709;
	      
	      A[a]=A[a+1]+0.94067;
	      
	      C[a][b][c]=0.52129;
	      C[a][b][c]=0.18297;
	      
	      B[a+1][b]=0.52608;
	      B[a+1][b]=0.79875;
	      
	      float m=C[a][b][c]-0.85569;
	      float r=C[a][b][c]+0.08246;
	      
	      float I=A[a-1]*0.22648;
	      float H=A[a-1]-0.24741;
	    }

    return 0;
}