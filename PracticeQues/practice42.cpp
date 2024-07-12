#include<iostream>
using namespace std;
//updating the value of 'val' to thi given index in 'num'.
void UpdateithBit(int num, int i, int val){
      num= num & ~(1<<i);//clear th ith bit

      num = num |(val<<i);//set the ith bit to val

      cout<<num<<endl;
    }
    //clearing last i bitsssss.
    void ClearLastiBits(int num,int i){
        num= num & (~0)<<i;

        cout<<num<<endl;
    }
    //count set bits.
    int countSetbits(int num){
        int count=0;
        while (num>0)
        {
            int lastdigit = num&1;
            count+=lastdigit;
            num=num>>1;
        }
        cout<<count<<endl;
        return count;
    }
    //fast exponentiation
    int fastexpo(int x, int n){
        int ans=1;
        while(n>0){
            int lastbit= n&1;
            if(lastbit){
                ans= ans*x;     
           }
           x = x*x;
           n = n>>1;
        }
        cout<<ans<<endl;
    }
    int main(){

        UpdateithBit(7,2,0);
        UpdateithBit(7,3,1);

        ClearLastiBits(7,2);
        ClearLastiBits(7,3);

        countSetbits(10);
        countSetbits(100);

        fastexpo(3,5);
        fastexpo(2,10);
    }