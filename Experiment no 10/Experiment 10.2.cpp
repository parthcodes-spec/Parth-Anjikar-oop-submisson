#include <iostream>
#include <cstring>
using namespace std;
template<class T> T square(T x) {

    T squaring = x*x;
    return squaring;

}
template<class T> string square(string ss) {

    return (ss+ss);



}

int main(void) {
    cout<<square<int>(5)<<endl;
    cout<<square<string>("sam")<<endl;
}