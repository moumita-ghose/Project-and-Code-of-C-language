/*                         AUTHOR : MOUMITA GHOSE
//           DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING
//                      UNIVERSITY OF BARISHAL
//                        LANGUAGE : C
//
//                                  PROBLEMS STATEMENTS:
  //                            -------------------------------------
//         WRITE A C PROGRAM THAT FINDS THE LARGEST PRIME PALINDROME NUMBER IN A GIVEN RANGE OF INTEGERS.
//         THE PROGRAM SHOULD TAKE TWO INTEGERS,START AND END, AS INPUT AND FIND THE LARGEST PRIME PALINDROME NUMBER WITHIN THAT RANGE (INCLUSIVE).
//         IF NO PRIME PALINDROME IS FOUND IN THE RANGE, THE PROGRAM SHOULD REPORT THAT.
//                                          
//
//                                            INSTRUCTIONS :
 //                                     ---------------------------------
//            YOUR PROGRAM SHOULD INCLUDE THE FOLLOWING FUNCTION:
//              1.   int isPrime(int num) : this function should determine whether a given integer num is a prime number. 
//                    It should return 1 if the number is prime and 0 otherwise.
//              2. int isPalindrome(int num) : this function should determine whether a given integer number is a palindrome.
//                  it should return 1 if the  num is a palindrome and 0 otherwise .
//                  A palindrome is a number that reads the same forward and backward(e.g. 121,1331). 
//            
//              INPUT: input begins with two integers (start<=end)
//              OUTPUT: YOU SHOULD PRINT ONE LINE SHOWING THE MESSAGE LIKE FOLLOWING :
//                IF PRIME PALINDROME IS FOUND ; THE LARGEST PRIME PALINDROME INT THE RANGE [ START, END ] IS : 99.
//                IF NOT FOUND : THERE IS NO PRIME PALINDROME IN THE RANGE.
//
//                SAMPLE INPUT:----------> ENTER THE STARTING RANGE : 1         
//                                         ENTER THE ENDING RANGE : 1000
//                
 //             SAMPLE OUTPUT: ----------> THE LARGEST PRIME PALINDROME IN THE RANGE [1,1000] IS : 929 .
 //
    */

    // SOLUTION :

    #include<stdio.h>

// finding prime or not
int isPrime(int num)
{
    int i,count=0;
    for(i=2;i<=num/2;i++){
        if(num%i==0){
            count++;
            break;
        }
    }
        if(count>0){
            return 0;
        }else if(count==0){
            return 1;
        }
}

 // finding palindrome or not
int isPalindrome(int num)
{
    int reminder=0,reverse=0,temp;

    temp=num;

    while(num!=0){
        reminder=num%10;
        reverse=reverse*10+reminder;
        num=num/10;
    }

    if(temp==reverse){
        return 1;
    }else{
        return 0;
    }
}

int main()
{
    int start,end,i,max=0,temp=0,j;
    printf("Enter the starting range:");
    scanf("%d",&start);

    printf("Enter the ending range:");
    scanf("%d",&end);

    for(i=start;i<=end;i++){
        if(isPrime(i)==1 && isPalindrome(i)==1){
            temp=i;
            if(temp>max){
                max=temp;
            }
        }
    }

    if(max>0){
        printf("\nThe largest prime palindrome in the range[%d,%d] is : %d\n",start,end,max);
    }else if(max==0){
        printf("There is no prime palindrome in this range\n");
    }

return 0;
}

    
