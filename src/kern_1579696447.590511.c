#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(210, 840, 410, "ones");
	double **B = create_two_dim_double(660, 440, "ones");

	for (int c = 5; c < 410; c++)
	  for (int b = 4; b < 836; b++)
	    for (int a = 1; a < 208; a++)
	    {
	      
	      A[a][b][c]=A[a][b-4][c-5]*0.035;
	      
	      double var_a=A[a][b][c]+0.001;
	      double var_b=A[a][b-4][c-4]/0.686;
	      
	      double var_c=A[a][b][c]-0.867;
	      double var_d=A[a-1][b-3][c]*0.725;
	      
	      double var_e=A[a][b][c]/0.399;
	      double var_f=A[a+2][b+4][c]+0.627;
	    }

    return 0;
}