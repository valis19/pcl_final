#include<bits/stdc++.h>

using namespace std;

int main() {
    int first, second, third, min, max, mid;
    cout<<"First number"<<endl;
    cin>>first;
    cout<<"Second number"<<endl;
    cin>>second;
    cout<<"Third number"<<endl;
    cin>>third;

    if ((first >= second)&&(first >= third)&&(second >= third)) {
        min = third;
        mid = second;
        max = first;
    } else if ((first >= second)&&(first >= third)&&(third >= second)) {
        min = second;
        mid = third;
        max = first;
    } else if ((first >= second)&&(third >= first)) {
        min = second;
        mid = first;
        max = third;
    } else if ((second >= first)&&(second >= third)&&(first >= third)) {
        min = third;
        mid = first;
        max = second;
    } else if ((second >= first)&&(second >= third)&&(third >= first)) {
        min = first;
        mid = third;
        max = second;
    } else if ((second >= first)&&(third >= second)) {
        min = first;
        mid = second;
        max = third;
    }
    cout<<"Min: "<<min<<" Mid: "<<mid<<" Max: "<<max;
    return 0;
}
