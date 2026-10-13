class Solution {
public:
    string addBinary(string a, string b) {
        string wynik = "";
        int i = a.size()-1;
        int j = b.size()-1;
        int przeniesienie = 0;
        while(i >=0 || j >= 0 || przeniesienie >0){
            int suma = przeniesienie;
            if (i >= 0) {
                suma += a[i] - '0'; // Zamiana znaku cyfry na liczbę
                i--;
            }
            if (j >= 0) {
                suma += b[j] - '0';
                j--;
            }

        przeniesienie = suma / 2;
        wynik += std::to_string(suma % 2);
        }
        std::reverse(wynik.begin(),wynik.end());
        return wynik;
      
    }
};