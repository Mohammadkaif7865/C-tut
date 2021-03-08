#include<iostream>
using namespace std;
template <class R1 = int  ,class R2 = char ,class R3 = float>
class kuch_bhi_bana_raha_hu_mujhe_nahi_pata{
        R1 kuch;
        R2 toh;
        R3 hai;
        public:
          void data_lele(void){
              cout<<"BC data de : ";
              cin>>kuch >>toh>>hai;
          }
          void ye_le_jo_tune_diya(void){
              cout<<"Ye pakad tera saman : "<<kuch<<endl<<toh<<endl<<hai<<endl;
          }
};
int main(){
    kuch_bhi_bana_raha_hu_mujhe_nahi_pata <> yelo;
    yelo.data_lele();
    yelo.ye_le_jo_tune_diya();
    cout<<"Bsdk aaj ke baad tang mat kariyo subh subh aa jate hai kaha se  "<<char(2);
    return 0;
}