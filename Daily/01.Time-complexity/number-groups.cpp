// https://www.hackerrank.com/challenges/number-groups/problem

long sumOfGroup(int k){
    long long first = 1LL*k*(k-1)+1;
    return 1LL*k*(first + k - 1);
}