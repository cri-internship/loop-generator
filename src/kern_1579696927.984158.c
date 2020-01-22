#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **E = create_two_dim_double(390, 920, "zeros");
	double **B = create_two_dim_double(540, 120, "zeros");
	double ***D = create_three_dim_double(160, 530, 480, "zeros");
	double *C = create_one_dim_double(820, "zeros");
	double ***A = create_three_dim_double(750, 330, 40, "zeros");

	for (int b = 3; b < 118; b++)
	  for (int a = 5; a < 390; a++)
	  {
	    
	     A[a][b][a]=A[a+3][b][a+5]+D[a][b][a];
	    
	     B[a][b]=B[a+4][b+2]/C[a];
	    
	     B[a][b]=E[a][b]-0.029;
	     D[a][b][a]=E[a-5][b-3]-A[a][b][a];
	  }

    return 0;
}