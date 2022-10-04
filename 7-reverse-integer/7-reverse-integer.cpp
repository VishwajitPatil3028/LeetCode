class Solution {
public:
    int reverse(int x) {
//         string a = to_string(x) ;
        
//         cout<<"String : "<<a <<endl;
//         if(x<0){
//             for (int i = 0; i < a.size() / 2; i++)
//             {
//                 char temp = a[i];
//                 a[i] = a[a.size() - i - 1];
//                 a[a.size() - i - 1] = temp;
//             }
//             string s = "-"+ a;
//             return stoll(s);
//         }
//         else{
//             for (int i = 0; i < a.size() / 2; i++)
//             {
//                 char temp = a[i];
//                 a[i] = a[a.size() - i - 1];
//                 a[a.size() - i - 1] = temp;
//             }
//             return stoll(a);
//         }
        
        int num = x;
        long long  reverse = 0;
        while(x!=0)
        {
            int digit = x%10;
            reverse = reverse*10+digit;
            x = x/10;
        }
        
        return (reverse<INT_MIN || reverse>INT_MAX) ? 0 : reverse;
        
    }
};