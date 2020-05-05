#include<bits/stdc++.h>

using namespace std;

int main() {
    int first, second, third, min, max, mid;
    //cout<<"Given input in the following order:"<<endl;
    cout<<"First number: "<<endl;
    cin>>first;
    cout<<"Second number: "<<endl;
    cin>>second;
    cout<<"Third number: "<<endl;
    cin>>third;


    if (first >= second) {
        if (first >= third) {
            max = first;
            if (second >= third) {
                min = third;
                mid = second;
            } else {
                min = second;
                mid = third;
            }
        } else {
            max = third;
            mid = first;
            min = second;
        }
    } else {
        if (second >= third) {
            max = second;
            if (third >= first) {
                min = first;
                mid = third;
            } else {
                min = third;
                mid = first;
            }
        } else {
            max = third;
            mid = second;
            min = first;
        }
    }
    cout<<"Min: "<<min<<" Mid: "<<mid<<" Max: "<<max;
    return 0;
}
