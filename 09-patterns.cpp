//09-patterns

#include <iostream>
using namespace std;
//repeating a string
string repeat(string s, int n){
    string s1=s;
    for (int i=0; i<n; i++){
        s+=s1;
    }
    return s;
}
//reversing a string
string reverse(string str){
    int n=str.length();
    while(n--){
        cout<<str[n];
    }
    return "";
}

//ques-12

// int main(){
//     int i;
//     for(int i=5; i>0 ; i--){
//         cout<<repeat(" ",5-i+1)<<repeat("* ",i)<<endl;

//     }
//     for(int i=5; i>0 ; i--){
//         cout<<repeat(" ",i)<<repeat("* ",5-i+1)<<endl;
//     }    
//     return 0;
// }

//ques-18

// int main(){
//     int i;
//     cout<<repeat("*",10)<<endl;
//     for(int i=4; i>0 ; i--)
//     {    
//         cout<<repeat("*",i)<<repeat(" ",5-i)<<repeat(" ",5-i)<<repeat("*",i)<<endl;
//     }
//     for(int i=4; i>0 ; i--){
//         cout<<repeat("*",5-i)<<repeat(" ",i)<<repeat(" ",i)<<repeat("*",5-i)<<endl;
//     } 
//     cout<<repeat("*",10)<<endl;
//     return 0;
// }    

//ques-34

// int main(){
//     string m="EDCBA";
//     for(int i=0; i<5; i++){
//         cout<<m.substr(i,5)<<endl;
//     }
//     return 0;
// }

//ques-32

// int main(){
//     string m="ABCDE";
//     for(int i=0; i<6; i++){
//         cout<<m.substr(5-i,5)<<endl;

//     }
//     return 0;
// }

//ques-28

// int main(){
//     for(int i=5; i>0 ; i--){
//         cout<<repeat(" ",i)<<repeat("* ",5-i+1)<<endl;
//     }  
//     for(int i=4; i>0 ; i--){
//         cout<<repeat(" ",5-i+1)<<repeat("* ",i)<<endl;
//     }     
//     return 0;
// }

//ques-29

// int main(){
//     for(int i=1; i<5; i++){
//         cout<<repeat("*",i)<<repeat(" ",10-2*i)<<repeat("*",i)<<endl;
//     }
//     cout<<repeat("*",10)<<endl;
//     for(int i=1; i<5; i++){
//         cout<<repeat("*",5-i)<<repeat(" ",2*i)<<repeat("*",5-i)<<endl;
//     }
//     return 0;
// }

//ques-35
// string SubStr(int n, int m){
//     string num="12345";
    
//     return num.substr(n,m);
// }

// int main(){
//     string num2="54321";
//     for(int i=0; i<4; i++){
        
//         cout<<SubStr(0,i)<<repeat("  ",3-i)<<num2.substr(5-i,5)<<endl;
//     }
//     cout<<SubStr(0,4)<<num2.substr(1,5)<<endl;
//     return 0;
// }

int main(){
    int m=4;
    for(int j=1; j<=m+1; j++){
        for(int i=1; i<=j+1; i++){
            cout<<i<<repeat("  ",m-i)<<j-i<<endl;
        }
    
    }
    return 0;
}
