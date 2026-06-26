 #include <iostream>
 using namespace std;

 int main() {
    

    int t;
    cin >> t;                

    while (t--) {
        int n;
        cin >> n;          

        string a, b;
        cin >> a >> b;        

        bool same = true;     

        
        for (int i = 0; i < n; ++i) {

            
            bool color = (a[i] == 'R');
            bool colorless = (b[i] == 'R');

            if (color != colorless) {   
                same = false;
                break;           
            }
        }

        if (same)
            cout << "YES"<<endl;
        else
            cout << "NO"<<endl;
    }

    return 0;
}
