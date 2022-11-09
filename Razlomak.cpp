#include <iostream>
using namespace std;
class razlomak
{
    private:
            int brojnik, nazivnik;
    public:
          razlomak();
          void Set(int tempBr, int tempNz);
          double GetDecimal();
    
};
razlomak::razlomak(){
    brojnik=0;
    nazivnik=1;
}
void razlomak::Set(int tempBr,int tempNz){
    if(tempNz==0)
    {
        cout<<"Došlo je do pogreške jer nazivnik ne smije biti nula"<<endl;
    }
    else{
        brojnik=tempBr;
        nazivnik=tempNz;
    }
}
double razlomak::GetDecimal(){
    double racun;
    racun=(double)(brojnik)/(double)(nazivnik);
    return racun;
}



int main()
{
    razlomak raz;
    int VrBrojnika, VrNazivnika;
    cout<<"Upišite vrijednost brojnika"<<endl;
    cin>>VrBrojnika;
    cout<<"Upišite vrijednost nazivnika"<<endl;
    cin>>VrNazivnika;
    raz.Set(VrBrojnika,VrNazivnika);
    cout<<"Vrijednost razlomka je: "<<raz.GetDecimal()<<endl;
    return 0;
}