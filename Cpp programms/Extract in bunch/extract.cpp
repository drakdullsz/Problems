#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


int main(){
    int sz = 0, i = 0, a, k=0, m=0, m1 = 1, avr, n1, n2;
    vector <int> vect;
    vector <int> vect1;
    string str;
    cin >> sz;
    while (i<sz){
        cin >> str;
        if (str == "ExtractMax")
            {
                vect1.push_back(vect[0]);

                // Insert bott to v[0], delete and sift down
                a = vect[vect.size()-1];
                vect.erase(vect.begin()+vect.size()-1);
                vect[0] = a;
                m1 = 0;
                n1 = vect.size();
                if (n1 > 2){

                while ( (2*m1+2) < n1){
                if (vect[m1] > vect[2*m1+1] && vect[m1] > vect[2*m1+2]) { break;}

                    if (vect[2*m1+1]>vect[2*m1+2]){
                        vect[m1] = vect[2*m1+1];
                        vect[2*m1+1] = a;
                        m1 = 2*m1+1;
                        }
                    else {
                        vect[m1] = vect[2*m1+2];
                        vect[2*m1+2] = a;
                        m1 = 2*m1+2;
                        }

                    }
                if ( (2*m1+1 < n1) && vect[m1]<vect[2*m1+1]){
                    vect[m1] = vect[2*m1+1];
                    vect[2*m1+1] = a;
                    }

                }
                    if (n1 == 2){
                            if (vect[0]<vect[1]){
                                    vect[0] = vect[1];
                                    vect[1] = a;
                                }
                        }

                k++;
            }
        if (str != "ExtractMax")
        {
            cin >> a;
            vect.push_back(a);
            m1 = vect.size()-1;

            // Sift a
            while (m1 > 0)
                {
                    if (vect[m1]<vect[(m1+1)/2-1]){break;}
                    vect[m1] = vect[(m1+1)/2 -1];
                    vect[(m1+1)/2 -1] = a;
                    m1 = (m1+1)/2 - 1;
                }
        }
        i++;
    }


    i = 0;
    while(i<k){
        cout << vect1[i] << endl;
        i++;
    }
    i = 0;
    cout << endl;
    return 0;
}
