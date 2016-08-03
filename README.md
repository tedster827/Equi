# Equi
Equilibrium Challenge

The equilibrium index of a sequence is an index such that the sum of elements at 
lower indexes is equal to the sum of elements at higher indexes. 

For example, in a sequence A:
A[0]=-7 A[1]=1 A[2]=5 A[3]=2 A[4]=-4 A[5]=3 A[6]=0

3 is an equilibrium index, because:
A[0]+A[1]+A[2]=A[4]+A[5]+A[6]

6 is also an equilibrium index, because:
A[0]+A[1]+A[2]+A[3]+A[4]+A[5]=0

(The sum of zero elements is zero) 7 is not an equilibrium index - because it is 
not a valid index of sequence A. If you still have doubts, here is a precise 
definition: The integer k is an equilibrium index of a sequence A[0],A[1]..,A[n-1] 
if and only if 0<= k and sum(A[0..(k-1)])=sum(A[(k+1)..(n-1)]). Assume the sum of 
zero elements is equal to zero. 

This challenge was from the codility demo:
http://blog.codility.com/2011/03/solutions-for-task-equi.html
