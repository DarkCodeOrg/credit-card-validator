                //  this is a program for checking the validity of a credit card  

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void convertSTRtoINTarr(char [],int []);

int main()
{
    char creditCardNumber[16];               // for storing users input
    int new_creditcard_number[16] = { 0 };  // for storing the integer array converted by convertSTRtoINTarr
    
    int FIRST_ROW[8];       ///   for breaking the int array into two parts 
    int SECOND_ROW[8];      ///   
    
    int sum1 = 0, sum2 = 0 ; // for storing the sum of the two rows
    
    printf("enter you credit card number : ");
             fgets(creditCardNumber, 17, stdin);
                                                          
    convertSTRtoINTarr(creditCardNumber,new_creditcard_number);        
    // the above ^ function was used to convert the string input to integer array for making accessibility of each element in the string as a integer possible         

    // below part is just mathematical calculation
    // checkout the README.md file to know the algorithm

        // evaluating first row and second row    
            for (int i = 0 ; i <= 15 ; i += 2){
                    for (int j = 0; j < 8; j++){
                            FIRST_ROW[j] = new_creditcard_number[i]*2 ; 
                            i += 2 ;
                    }
            }
            for (int k = 1 ; k <= 15 ; k += 2){
                    for (int l = 0; l < 8; l++){ 
                            SECOND_ROW[l] = new_creditcard_number[k] ;
                            k += 2 ;
                    }
            }

        // subtracting 9 from any digit in FIRST_ROW that has a value greater than or equal 10
            for (int i = 0; i < 8; i++){
                 if (FIRST_ROW[i] >= 10){
                    FIRST_ROW[i] = FIRST_ROW[i] - 9 ;
                 }

            }

        // evaluating the sum of the elements of the two rows    

            for (int i = 0; i < 8; i++){
                sum1 += FIRST_ROW[i];
            }
            for (int j = 0; j < 8; j++){
                sum2 += SECOND_ROW[j];
            }

    // checking the final validity criteria  && giving output

            if ((sum1 + sum2)%10 == 0){
                printf("the credit card is valid");
            }
            
             else{
                 printf("the credit card is invalid !");
                 printf("remember not to include spaces while entering the credit card number ");
            }


    return 0;
}


void convertSTRtoINTarr(char str[16],int m[16])
{
    printf("%d",m[1]*10);          // TODO this is for testing remove this later 
    for (int i = 0; i <= 16; i++){
        
        m[i] = m[i]*10 + (str[i] - 48);
    }
}
