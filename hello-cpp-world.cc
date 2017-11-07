#include <iostream>
int five_count(int n);

int main() {
    int n1, n2, n3;
    int s1, s2, s3, sum;
    std::cin >> n1 >> n2 >> n3;
    
    s1 = five_count(n1);
    s2 = five_count(n2);
    s3 = five_count(n3);
    
    sum = s1 + s2 + s3;
    
    //std::cout << s1 << s2<< s3;
    std::cout << sum;
    
    
    return 0;
}   

int five_count(int n){
    int count = 0; 
    int f = n/100;
    int s = (n%100)/10;
    int t = (n%100)%10;
    if (f==5) count += 1;
    if (s==5) count += 1;
    if (t==5) count += 1;
    //std::cout << t <<std::endl;
    return count;
}
