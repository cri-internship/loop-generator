#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(70, 530, "zeros");
	float **D = create_two_dim_float(650, 540, "zeros");
	float ***A = create_three_dim_float(550, 920, 480, "zeros");
	float **B = create_two_dim_float(90, 300, "zeros");

	for (int d = 0; d < 479; d++)
	  for (int c = 3; c < 295; c++)
	    for (int b = 0; b < 67; b++)
	      for (int a = 0; a < 67; a++)
	      {
	        
	       A[a][b][c]=A[a+1][b+2][c+1]+0.626;
	        
	       C[a][b]=C[a+3][b+3]*0.826;
	        
	       D[a][b]=C[a][b];
	       D[a][b-3]=A[a][b][c]+B[a][b]*C[a][b];
	        
	       D[a][b]=A[a][b][c];
	        
	       B[a][b]=B[a][b]+D[a][b]/D[a][b]-C[a][b];
	       D[a][b]=B[a][b+5]+D[a][b]*A[a][b][c];
	      }

    return 0;
}