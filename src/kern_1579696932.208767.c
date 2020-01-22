#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(340, 820, 20, "random");
	int ***C = create_three_dim_int(720, 80, 370, "random");
	int ***E = create_three_dim_int(880, 330, 420, "random");
	int **D = create_two_dim_int(1000, 720, "random");
	int **B = create_two_dim_int(820, 580, "random");

	for (int d = 4; d < 370; d++)
	  for (int c = 4; c < 77; c++)
	    for (int b = 4; b < 717; b++)
	      for (int a = 4; a < 717; a++)
	      {
	        
	       C[a][b][c]=C[a-4][b-2][c-1]-16;
	        
	       C[a][b][c]=C[a][b-4][c-4]-B[a][b]/A[a][b][c]+D[a][b];
	        
	       D[a][b]=D[a+1][b+5]-C[a][b][c]/E[a][b][c];
	        
	       C[a][b][c]=C[a+3][b+3][c]+10;
	        
	       B[a][b]=D[a][b];
	       B[a+1][b+4]=D[a][b]/A[a][b][c];
	        
	       A[a][b][c]=D[a][b]/E[a][b][c]-C[a][b][c]*A[a][b][c]+B[a][b];
	       E[a][b][c]=D[a+4][b+4]-B[a][b]*A[a][b][c]/C[a][b][c]+E[a][b][c];
	      }

    return 0;
}