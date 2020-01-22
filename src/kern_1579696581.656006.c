#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(350, 870, 180, "zeros");
	int **E = create_two_dim_int(260, 240, "zeros");
	int *A = create_one_dim_int(800, "zeros");
	int **B = create_two_dim_int(890, 730, "zeros");
	int ***C = create_three_dim_int(910, 660, 770, "zeros");

	for (int d = 3; d < 769; d++)
	  for (int c = 5; c < 656; c++)
	    for (int b = 3; b < 797; b++)
	      for (int a = 3; a < 797; a++)
	      {
	        
	       C[a][b][c]=C[a-2][b-5][c-3]/E[a][b]*B[a][b]-A[a]+D[a][b][c];
	        
	       A[a]=A[a+3]-C[a][b][c]+D[a][b][c]*36;
	        
	       B[a][b]=2;
	       B[a+3][b+5]=47;
	        
	       C[a][b][c]=B[a][b]-3/D[a][b][c]+E[a][b];
	        
	       A[a]=E[a][b]/B[a][b]+D[a][b][c]-C[a][b][c];
	        
	       C[a][b][c]=A[a]+E[a][b]*21-B[a][b];
	       D[a][b][c]=A[a-3]*B[a][b];
	      }

    return 0;
}