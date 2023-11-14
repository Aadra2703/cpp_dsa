//02-first-java

//ques6-input currency in rupees and output in usd

// # include <iostream>
// using namespace std;

// int main(){
//     int a;
//     cout<<"enter money in INR"<<endl;
//     cin>>a;
//     cout<<"money in USD is "<<a*0.012<<"dollar"<<endl;
//     return 0;
// }



//ques-7 fibonacci series upto n

// #include <iostream>
// using namespace std;

// int fibonacci(int n) {
//     int n1 = 0, n2 = 1, n3;
//     cout << n1 << endl << n2 << endl;
    
//     for (int i = 2; i < n ; i++) { // Adjust the loop condition
//         n3 = n1 + n2;
//         n1 = n2;
        
//         cout << n2 << endl;
//         n2 = n3;
        
//     }
//     return n2;
// }

// int main() {
//     cout << "The function returned " << fibonacci(8) << endl;
//     return 0;
// }

//ques-8 to check for palindrome

#include <iostream>
using namespace std;

int main()
{
    string str="kanak";
    // cout<<reverse(str);
    int n=str.length();
    // string reversed_str=reverse(str);
    for(int i=0; i<n; ++i){
        if(str[n-1-i]==str[i]){
            cout<<"1";
        }
        else{
            cout<<"0";
        }
    }
    return 0;
}