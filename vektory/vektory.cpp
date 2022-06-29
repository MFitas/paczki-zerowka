
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
    vector <float> vfloat;
    vfloat.push_back(4.6);
    vfloat.push_back(1.2);
    vfloat.push_back(234.6);
    vfloat.push_back(111.2);

    for (int i = 0; i < vfloat.size(); i++)
        cout << vfloat[i] << "\t";
    cout << endl;

    for (auto& i : vfloat)
        cout << i << "\t";

    cout << endl;

    vector <float>::iterator p;
    for (p = vfloat.begin(); p != vfloat.end(); p++)
        cout << *p << "\t";
    cout << endl;

    float maxV = *max_element(vfloat.begin(), vfloat.end());
    cout << "MAksymalny element to : " << maxV << endl;

    sort(vfloat.begin(), vfloat.end());
    cout << "\nDane po sortowaniu: " << endl;
    for (auto& i : vfloat)
        cout << i << "\t";
}